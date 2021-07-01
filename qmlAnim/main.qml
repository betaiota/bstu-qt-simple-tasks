import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Itachi")

    Image {
        id: image
        x: 170
        y: 90
        width: 300
        fillMode: Image.PreserveAspectFit
        source: "itachi.png"
        RotationAnimation on rotation {
        from: 360
        to: 0
        duration: 3000
        loops: Animation.Infinite
        }
    }
}
