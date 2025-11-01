import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
import Qt5Compat.GraphicalEffects


Item {




    width:400
    height:200

    Rectangle {
        x:100; y:50
        height:100
        width: richard.width * 2
        color: "lightblue"

    }


    Rectangle {
        x:100; y:110
        height:100
        width: height * 2
        color: "green"

    }

    TextInput {
        id: richard
        x:50
        y:50
        text: "QTquick"
        font.family: "Helvetica"
        font.pixelSize: 50
    }

}
