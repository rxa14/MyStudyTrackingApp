import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
import QtQuick.Controls.Material
import QtQuick.Effects
import MyPomodoro 1.0

Page {
    id: pomodoroView

    anchors.fill: parent

    function formatTime(seconds) {
        let m = Math.floor(seconds / 60);
        let s = seconds % 60;
        let mm = m < 10 ? "0" + m : m;
        let ss = s < 10 ? "0" + s : s;
        return mm + ":" + ss;
    }

    Rectangle {
        anchors.fill: parent
        gradient: Gradient {
            GradientStop { position: 0.0; color: "#FFDE59" }
            GradientStop { position: 1.0; color: "#FFF8DC" }
        }
        border.width: 1

        MultiEffect {
            anchors.fill: parent
            source: parent
            shadowEnabled: true
            shadowColor: "#20000000"
            shadowBlur: 0.4
            shadowHorizontalOffset: 0
            shadowVerticalOffset: 2
        }

        Column {
            anchors.centerIn: parent
            spacing: 30
            width: parent.width * 0.8
            Text {
                text: "Pomodoro Timer"
                font.pixelSize: 36
                anchors.horizontalCenter: parent.horizontalCenter
            }

            // Live Countdown Display
            Rectangle {
                width: parent.width * 0.6
                height: 120
                color: "#FFFFFF"
                radius: 10
                border.width: 2
                border.color: "#CCCCCC"
                anchors.horizontalCenter: parent.horizontalCenter

                Text {
                    id: timerText
                    anchors.centerIn: parent
                    font.pixelSize: 72
                    font.bold: true
                    text: pomodoroView.formatTime(pomodoroTimer.timeRemaining)
                }
            }


            Connections {
                target: pomodoroTimer
                function onTimeRemainingChanged() {
                    timerText.text = pomodoroView.formatTime(pomodoroTimer.timeRemaining)
                }

                function onSessionEnded() {
                    console.log("Pomodoro session ended!");
                }

                function onClosePomodorotimer() {
                    console.log("received closed signal");
                    if(pomodoroView.StackView.view){
                        pomodoroView.StackView.view.pop();
                    }
                }
            }


            // Status indicator
            Text {
                id: statusText
                text: {
                    switch(pomodoroTimer.currentState) {
                        case 0: return "Ready to start";
                        case 1: return "Focus time!";
                        case 2: return "Break time!";
                        default: return "";
                    }
                }
                font.pixelSize: 24
                anchors.horizontalCenter: parent.horizontalCenter
            }


            Row {
                spacing: 20
                anchors.horizontalCenter: parent.horizontalCenter

                Button {
                    text: "Start (25m/5m)"
                    font.pixelSize: 18
                    padding: 12
                    onClicked: pomodoroTimer.startSession(25*60, 5*60)
                }

                Button {
                    text: "Stop"
                    font.pixelSize: 18
                    padding: 12
                    onClicked: pomodoroTimer.stop()
                }
            }

            Row {
                spacing: 20
                anchors.horizontalCenter: parent.horizontalCenter

                Button {
                    text: "Pause"
                    font.pixelSize: 18
                    padding: 12
                    onClicked: pomodoroTimer.pause()
                }

                Button {
                    text: "Resume"
                    font.pixelSize: 18
                    padding: 12
                    onClicked: pomodoroTimer.resume()
                }
            }

            Button {
                text: "Back to Menu"
                font.pixelSize: 18
                padding: 12
                anchors.horizontalCenter: parent.horizontalCenter
                onClicked: {
                    console.log("Back to Menu clicked")
                    pomodoroTimer.killPomodoroView()
                }
            }
        }
    }
}
