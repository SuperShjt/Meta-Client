#include "socketclass.h"



socketClass::socketClass(QObject *parent)
    : QObject{parent}
{

}

void socketClass::Connect(){

    socket = new QTcpSocket();

    //connect
    socket ->connectToHost("192.168.7.4",1234);


    if(socket->waitForConnected(3000)){
        qDebug() << "Connected!";
         //send  data
        socket->write("Hello Server\n");


        //wait to make sure data is sent
        socket->waitForBytesWritten(1000);

        //recieve data
        socket->waitForReadyRead(3000);
        qDebug() << "Reading: " << socket->bytesAvailable();

        qDebug() << socket->readAll();



        socket->close();
    }
    else{
        qDebug() << "Failed to connect";
    }
}
