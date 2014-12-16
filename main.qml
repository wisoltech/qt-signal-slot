import QtQuick 2.2
import QtQuick.Window 2.1

Window {
    id: test
    visible: true
    width: 200
    height: 50

    Connections {
        target: receiver
        onSendToQml: {
            console.log("Received in QML from C++: " + count)
        }
    }

    MouseArea {
        anchors.fill: parent
        onClicked: {
            receiver.receiveFromQml(42);
        }
    }

    Text {
        text: qsTr("Press me to send a signal to C++")
        anchors.centerIn: parent
    }
}
