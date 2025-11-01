import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
import QtQuick.Controls.Material
import QtQuick.Effects
import MyPomodoro 1.0


Page {
    id: todoView
    anchors.fill: parent

    // Define the property and immediately access the context property
    property var todoModel: todoModelInstance

    // Remove the Component.onCompleted assignment since we're setting it directly above
    Component.onCompleted: {
        // You can leave this empty or add other initialization if needed
    }

    // Connection to handle the close signal
    Connections {
        target: todoModel
        function onCloseTodoView() {
            if (todoView.StackView.view) {
                todoView.StackView.view.pop()
            }
        }
    }

    // Background
    Rectangle {
        anchors.fill: parent
        gradient: Gradient {
            GradientStop { position: 0.0; color: "#FFDE59" }
            GradientStop { position: 1.0; color: "#FFF8DC" }
        }
    }


    ColumnLayout {
        anchors.fill: parent
        anchors.margins: 20
        spacing: 15

        // Header Card
        Rectangle {
            Layout.fillWidth: true
            Layout.preferredHeight: 80
            radius: 15
            color: "white"
            border.color: "black"

            MultiEffect {
                anchors.fill: parent
                source: parent
                shadowEnabled: true
                shadowColor: "#20000000"
                shadowBlur: 0.4
                shadowHorizontalOffset: 0
                shadowVerticalOffset: 2
            }

            RowLayout {
                anchors.fill: parent
                anchors.margins: 20

                Label {
                    text: "My Tasks"
                    font.pixelSize: 32
                    font.bold: true
                    color: "#2c3e50"
                    Layout.fillWidth: true
                }

                Button {
                    id: backButton
                    text: "←"
                    flat: true
                    Material.foreground: "grey"
                    Layout.preferredWidth: 80

                    onClicked: {
                        console.log("Back button clicked")
                        todoModel.killTodoView()
                    }
                }
            }
        }

        // Add new task section
        Rectangle {
            Layout.fillWidth: true
            Layout.preferredHeight: 80
            color: "white"
            radius: 15

            MultiEffect {
                anchors.fill: parent
                source: parent
                shadowEnabled: true
                shadowColor: "#20000000"
                shadowBlur: 0.4
                shadowHorizontalOffset: 0
                shadowVerticalOffset: 2
            }

            RowLayout {
                anchors.fill: parent
                anchors.margins: 10
                spacing: 10

                TextField {
                    id: newTaskInput
                    Layout.fillWidth: true
                    placeholderText: "Add a new task..."
                    font.pixelSize: 14
                    Material.accent: Material.Green

                    onAccepted: {
                        if (text.trim() !== "") {
                            todoModel.addTodo(text, "", new Date(), 1)
                            text = ""
                        }
                    }
                }

                Button {
                    text: "Add Task"
                    enabled: newTaskInput.text.trim() !== ""
                    Material.background: Material.Blue
                    Material.foreground: "white"
                    onClicked: {
                        if (newTaskInput.text.trim() !== "") {
                            todoModel.addTodo(newTaskInput.text, "", new Date(), 1)
                            newTaskInput.text = ""
                        }
                    }
                }
            }
        }

        // Filter controls
        Rectangle {
            Layout.fillWidth: true
            Layout.preferredHeight: 60
            color: "white"
            radius: 15

            MultiEffect {
                anchors.fill: parent
                source: parent
                shadowEnabled: true
                shadowColor: "#20000000"
                shadowBlur: 0.4
                shadowHorizontalOffset: 0
                shadowVerticalOffset: 2
            }

            RowLayout {
                anchors.fill: parent
                anchors.margins: 10
                spacing: 10

                ComboBox {
                    id: priorityFilter
                    model: ["All Priorities", "High", "Medium", "Low"]
                    Layout.preferredWidth: 150
                }

                CheckBox {
                    id: hideCompleted
                    text: "Hide Completed"
                }

                Item { Layout.fillWidth: true }

                Button {
                    text: "Clear Completed"
                    Material.background: Material.Orange
                    Material.foreground: "white"
                    onClicked: todoModel.clearCompleted()
                }
            }
        }

        // Todo list
        ScrollView {
            Layout.fillWidth: true
            Layout.fillHeight: true
            clip: true

            ListView {
                id: todoList
                model: todoModel
                spacing: 10

                delegate: Rectangle {
                    width: todoList.width
                    height: 100
                    color: "white"
                    radius: 15

                    // Filter logic (same as before)
                    visible: {
                        if (hideCompleted.checked && model.completed) return false;

                        if (priorityFilter.currentIndex > 0) {
                            let filterPriority;
                            switch (priorityFilter.currentIndex) {
                                case 1: filterPriority = 2; break; // High
                                case 2: filterPriority = 1; break; // Medium
                                case 3: filterPriority = 0; break; // Low
                            }
                            if (model.priority !== filterPriority) return false;
                        }

                        return true;
                    }

                    // Shadow effect
                    MultiEffect {
                        anchors.fill: parent
                        source: parent
                        shadowEnabled: true
                        shadowColor: "#20000000"
                        shadowBlur: 0.4
                        shadowHorizontalOffset: 0
                        shadowVerticalOffset: 2
                    }

                    RowLayout {
                        anchors.fill: parent
                        anchors.margins: 15
                        spacing: 15

                        CheckBox {
                            checked: model.completed
                            onToggled: todoModel.markAsCompleted(index, checked)
                        }

                        ColumnLayout {
                            Layout.fillWidth: true
                            spacing: 4

                            Text {
                                text: model.title
                                font.pixelSize: 16
                                font.bold: true
                                font.strikeout: model.completed
                                color: model.completed ? "#9E9E9E" : "#2c3e50"
                            }

                            Text {
                                text: model.description || "No description"
                                font.pixelSize: 13
                                color: "#7f8c8d"
                                elide: Text.ElideRight
                                visible: model.description !== ""
                            }

                            Text {
                                text: {
                                    if (!model.dueDate) return "";
                                    let date = new Date(model.dueDate);
                                    return "Due: " + date.toLocaleDateString();
                                }
                                font.pixelSize: 13
                                color: {
                                    if (!model.dueDate) return "#7f8c8d";
                                    let now = new Date();
                                    let due = new Date(model.dueDate);
                                    return due < now && !model.completed ? "#e74c3c" : "#7f8c8d";
                                }
                                visible: model.dueDate !== undefined
                            }
                        }

                        Rectangle {
                            width: 16
                            height: 16
                            radius: 8
                            color: {
                                switch(model.priority) {
                                    case 2: return "#e74c3c"; // High
                                    case 1: return "#f39c12"; // Medium
                                    case 0: return "#27ae60"; // Low
                                    default: return "#95a5a6";
                                }
                            }
                        }

                        RowLayout {
                            spacing: 5
                            Layout.alignment: Qt.AlignRight | Qt.AlignVCenter

                            Button {
                                text: "Edit"
                                Material.background: Material.Blue
                                Material.foreground: "white"
                                Layout.preferredWidth: 60
                                onClicked: editDialog.open(index, model.title, model.description, model.dueDate, model.priority)
                            }

                            Button {
                                text: "X"
                                Material.background: Material.Red
                                Material.foreground: "white"
                                Layout.preferredWidth: 50
                                onClicked: todoModel.removeTodo(index)
                            }
                        }
                    }
                }
            }
        }
    }

    // Dialog for editing tasks
    Dialog {
        id: editDialog
        title: "Edit Task"
        standardButtons: Dialog.Save | Dialog.Cancel
        width: Math.min(todoView.width * 0.75, 550)
        height: Math.min(todoView.height * 0.95, 600)
        anchors.centerIn: Overlay.overlay
        modal: true



        property int currentIndex: -1
        property date selectedDate: new Date()

        function open(index, title, description, dueDate, priority) {
            currentIndex = index;
            editTitle.text = title;
            editDescription.text = description || "";
            editPriority.currentIndex = priority;

            if (dueDate) {
                let date = new Date(dueDate);
                selectedDate = date;

                // Set the values in the date pickers
                dayCombo.currentIndex = date.getDate() - 1;
                monthCombo.currentIndex = date.getMonth();
                yearField.text = date.getFullYear().toString();
            } else {
                let today = new Date();
                selectedDate = today;

                dayCombo.currentIndex = today.getDate() - 1;
                monthCombo.currentIndex = today.getMonth();
                yearField.text = today.getFullYear().toString();
            }

            visible = true;
        }

        contentItem: ScrollView {
            // We wrap our ColumnLayout in an Item and use anchors with margins
            // instead of directly using the padding property

            ColumnLayout {
                anchors.fill: parent
                anchors.margins: 20  // This replaces the padding property
                spacing: 15

                Label {
                    text: "Title:"
                    font.bold: true
                }

                TextField {
                    id: editTitle
                    Layout.fillWidth: true
                    placeholderText: "Task title"
                }

                Label {
                    text: "Description:"
                    font.bold: true
                }

                TextArea {
                    id: editDescription
                    Layout.fillWidth: true
                    Layout.preferredHeight: 80
                    placeholderText: "Task description"
                    wrapMode: TextEdit.Wrap
                }

                Label {
                    text: "Due Date:"
                    font.bold: true
                }

                // Custom date selector using basic components
                RowLayout {
                    Layout.fillWidth: true
                    spacing: 10

                    ComboBox {
                        id: dayCombo
                        model: {
                            let days = [];
                            for (let i = 1; i <= 31; i++) {
                                days.push(i);
                            }
                            return days;
                        }
                        Layout.preferredWidth: 80

                        onCurrentValueChanged: {
                            editDialog.updateSelectedDate();
                        }
                    }

                    ComboBox {
                        id: monthCombo
                        model: ["January", "February", "March", "April", "May", "June", "July",
                               "August", "September", "October", "November", "December"]
                        Layout.preferredWidth: 120

                        onCurrentIndexChanged: {
                            // Adjust days in month based on selected month
                            let year = parseInt(yearField.text) || new Date().getFullYear();
                            let daysInMonth = new Date(year, currentIndex + 1, 0).getDate();

                            // Keep current day if valid for new month, otherwise set to last day of month
                            if (dayCombo.currentIndex >= daysInMonth) {
                                dayCombo.currentIndex = daysInMonth - 1;
                            }

                            editDialog.updateSelectedDate();
                        }
                    }

                    TextField {
                        id: yearField
                        placeholderText: "Year"
                        inputMethodHints: Qt.ImhDigitsOnly
                        Layout.preferredWidth: 80
                        validator: IntValidator { bottom: 2000; top: 2100 }

                        onTextChanged: {
                            if (text.length === 4) {
                                editDialog.updateSelectedDate();
                            }
                        }
                    }
                }

                Label {
                    text: "Priority:"
                    font.bold: true
                }

                ComboBox {
                    id: editPriority
                    Layout.fillWidth: true
                    model: ["Low", "Medium", "High"]
                }
            }
        }

        // Function to update the selected date based on the fields
        function updateSelectedDate() {
            let day = dayCombo.currentValue;
            let month = monthCombo.currentIndex;
            let year = parseInt(yearField.text);

            if (!isNaN(year) && year >= 2000 && year <= 2100) {
                selectedDate = new Date(year, month, day);
            }
        }

        onAccepted: {
            if (editTitle.text.trim() === "") return;

            // Make sure date is updated before sending
            updateSelectedDate();

            todoModel.updateTodo(
                currentIndex,
                editTitle.text,
                editDescription.text,
                selectedDate,
                editPriority.currentIndex
            );
        }
    }

    // Save/Load functionality
    Component.onDestruction: {
        todoModel.saveTodos("todos.json")
    }
}
