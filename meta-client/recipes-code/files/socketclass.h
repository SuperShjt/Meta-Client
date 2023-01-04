#ifndef SOCKETCLASS_H
#define SOCKETCLASS_H

#include <QObject>
#include <QTcpSocket>
#include <QDebug>
class socketClass : public QObject
{
    Q_OBJECT
    public:
    explicit socketClass(QObject *parent = nullptr);
    void Connect();

    signals:

    public slots:

    private:
        QTcpSocket *socket;



};

#endif // SOCKETCLASS_H
