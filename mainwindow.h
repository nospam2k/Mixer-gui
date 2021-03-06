#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QSlider>
#include <QWindow>
#include "capture.h"
#include "preview.h"
#include "fader.h"
#include "buffer.h"
#include "save.h"
#include "load.h"
#include "overlay.h"
#include "hdmi.h"
#include "webview.h"
#include "externaloutput.h"
#include "pip.h"
#include "externalinput.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void setName(const QString &name);
    QString name() const;
    void changeEvent(QEvent *e);

private slots:

    void startPreview();

    void saveBuffer();

    void on_actionHDMI_triggered();

    void on_actionLoad_image_triggered();

    void on_actionHTML_page_triggered();

    void on_actionOverlay_triggered();

    void on_actionFader_triggered();

    void on_actionCapture_device_triggered();

    void on_actionExternal_triggered();

    void on_actionPIP_triggered();

    void on_actionExternal_2_triggered();

private:
    Ui::MainWindow *ui;

    Buffer* buffer;
};

#endif // MAINWINDOW_H
