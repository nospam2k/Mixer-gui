#ifndef BUFFER_H
#define BUFFER_H

#include <QObject>
#include <cstring>
#include <QTimer>
#include <sys/ipc.h>
#include <sys/shm.h>

class Buffer : public QObject
{
    Q_OBJECT
public:
    Buffer(int widt, int heigh, int bp, int fps);

    void* Open(int number);

    void Resample(uchar *input, int oldWidth, int oldHeight, uchar *output);

    void* start[32];
    int frame[32]={0};
    int width;
    int height;
    int bpp;
    int fps;
    int buf_len;
    void newFrame(int number);

    int frames=0;

    QTimer *clock;

private:
    int isopen[32];

private slots:
    void incFrame();


signals:
    void newFrameSignal(int number);


};

#endif // BUFFER_H
