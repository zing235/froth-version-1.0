#ifndef AUCAMERA_H
#define AUCAMERA_H

#include <QtQuick/QQuickPaintedItem>


class AuCamera : public QQuickPaintedItem
{
    Q_OBJECT
    Q_PROPERTY(quint32 AuCameraID READ getAuCameraID )
    Q_PROPERTY(quint32 getauimagewidth READ getauimagewidth)
    Q_PROPERTY(quint32 getauimageheight READ getauimageheight)
public:
    AuCamera(QQuickItem *parent = 0);

    quint32 getAuCameraID(void) const;
    quint32 getauimagewidth(void) const;
    quint32 getauimageheight(void) const;

    Q_INVOKABLE void startaucamera();
    Q_INVOKABLE void getauimage();
    Q_INVOKABLE void updateaucamera();


   void paint(QPainter *painter);
private:
//   quint32 m_cameraID;

};
#endif // AUCAMERA_H
