/*
This is a UI file (.ui.qml) that is intended to be edited in Qt Design Studio only.
It is supposed to be strictly declarative and only uses a subset of QML. If you edit
this file manually, you might introduce QML code that is not supported by Qt Design Studio.
Check out https://doc.qt.io/qtcreator/creator-quick-ui-forms.html for details on .ui.qml files.
*/

import QtQuick 6.2
import QtQuick.Controls 6.2
import InitProject
import QtQuick3D 6.3

Rectangle {
    width: Constants.width
    height: Constants.height
    color: "#212529"


    Text {
        width: 254
        height: 52
        color: "#e5bc31"
        text: qsTr("ProDigital")
        horizontalAlignment: Text.AlignHCenter
        font.pointSize: 26
        font.styleName: "Italic"
        font.family: "Times New Roman"
        anchors.verticalCenterOffset: -322
        anchors.horizontalCenterOffset: 0
        anchors.centerIn: parent
    }

    App {
        id: app
        x: 444
        y: 649
    }

    Button {
        id: button
        x: 561
        y: 513
        text: qsTr("On")
        highlighted: true
        flat: true
        transformOrigin: Item.Center
        display: AbstractButton.TextOnly
        rotation: 0
    }

    Button {
        id: button1
        x: 686
        y: 513
        text: qsTr("Off")
        display: AbstractButton.TextOnly
        transformOrigin: Item.Center
        flat: true
        rotation: 0
        highlighted: true
    }

    Text {
        width: 230
        height: 52
        color: "#e5bc31"
        text: qsTr("Leds")
        horizontalAlignment: Text.AlignHCenter
        font.styleName: "Italic"
        anchors.verticalCenterOffset: -90
        anchors.horizontalCenterOffset: -289
        font.pointSize: 26
        font.family: "Times New Roman"
        anchors.centerIn: parent
    }

    Item {
        id: __materialLibrary__
    }
}
