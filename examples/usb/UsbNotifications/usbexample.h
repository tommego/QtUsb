#ifndef USBEXAMPLE_H
#define USBEXAMPLE_H

#include <QObject>
#include <QUsbDevice>
#include <QUsbInfo>

class UsbExample : public QObject
{
    Q_OBJECT
public:
    explicit UsbExample(QObject *parent = Q_NULLPTR);
    ~UsbExample(void);

signals:

public slots:
    void onDevInserted(QtUsb::FilterList list);
    void onDevRemoved(QtUsb::FilterList list);

private:
    QUsbInfo m_usb_manager;

};

#endif // USBEXAMPLE_H
