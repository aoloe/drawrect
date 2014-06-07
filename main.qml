import QtQuick 2.0

Rectangle {
    id: root

    width: 250
    height: 250

    flags: Qt.SubWindow | Qt.Tool | Qt.FramelessWindowHint | Qt.WindowSystemMenuHint | Qt.WindowStaysOnTopHint

    opacity: 0.75

    // completely transparent background
    color: "#00FFFFFF"

    border.color: "#F00"
    border.width: 2
}
