#include<QMediaPlayer>
#include<QVideoWidget>
#include<QDebug>
#include<QLayout>
#include<QWidget>
#include "widget.h"
#include <QApplication>
#include <QUrl>
#include <QGraphicsProxyWidget>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget wgt;

    wgt.setGeometry(100,100,1000,600);


    //Widget w;
    //w.show();
   // QLayout* vv = new QLayout;
    //QUrl*

    QMediaPlayer* player = new QMediaPlayer;
    QVideoWidget* vm = new QVideoWidget;

    QMediaPlayer* player2 = new QMediaPlayer;
    QVideoWidget* vm2 = new QVideoWidget;

    QMediaPlayer* player3 = new QMediaPlayer;
    QVideoWidget* vm3 = new QVideoWidget;

    QMediaPlayer* player4 = new QMediaPlayer;
    QVideoWidget* vm4 = new QVideoWidget;

    player->setVideoOutput(vm);
    player2->setVideoOutput(vm2);
    player3->setVideoOutput(vm3);
    player4->setVideoOutput(vm4);


    player->setMedia(QUrl::fromLocalFile("/Users/xander9/Desktop/01.mp4"));

    //player2->setMedia(QUrl::setAuthority("ftp://admin:tbiirs3rBnUokDznzo@192.168.1.1/01.mp4"));

    player2->setMedia(QUrl::fromLocalFile("/Users/xander9/Desktop/02.mp4"));
    player3->setMedia(QUrl::fromLocalFile("/Users/xander9/Desktop/03.mp4"));
    player4->setMedia(QUrl::fromLocalFile("/Users/xander9/Desktop/04.mp4"));

    // vm->setGeometry(100,100,533,300);
    // vm2->setGeometry(200,200,533,300);
    // vm3->setGeometry(100,100,533,300);
    // vm4->setGeometry(200,200,533,300);

    player->play();
    player2->play();
    player3->play();
    player4->play();

    QHBoxLayout* phbxLayout1 = new QHBoxLayout;
    phbxLayout1->addWidget(vm);
    phbxLayout1->addWidget(vm2);
    //wgt.setLayout(phbxLayout1);

    QHBoxLayout* phbxLayout2 = new QHBoxLayout;
    phbxLayout2->addWidget(vm3);
    phbxLayout2->addWidget(vm4);
    //wgt.setLayout(phbxLayout2);

    QVBoxLayout* pvbxLayout = new QVBoxLayout;
    pvbxLayout->addLayout(phbxLayout1);
    pvbxLayout->addLayout(phbxLayout2);
    wgt.setLayout(pvbxLayout);

    wgt.show();

    //vm->show();
    //vm2->show();

    qDebug() << player->state();

    return a.exec();
}

