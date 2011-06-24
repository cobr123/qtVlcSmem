
#include <QtGui/QApplication>
#include <QFile>
#include <QtCore/QDebug>
#include "include/streamplayer.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile f("d:\\test.out");
    if (!f.open(QIODevice::ReadWrite | QIODevice::Append))
    {
        qDebug() << "Не удалось открыть файл на дополнение.";
    }

    StreamPlayer* sp = new StreamPlayer;
    sp->setUrl("http://scfire-ntc-aa06.stream.aol.com:80/stream/1011");
    sp->play();

    return a.exec();
}
