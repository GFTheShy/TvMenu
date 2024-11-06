#ifndef TVWIDGET_H
#define TVWIDGET_H

#include <QWidget>
#include <QMovie>
#include <QLabel>
#include <QMediaPlayer>
#include <QUrl>
#include <QVideoWidget>
#include <QAudioOutput>
#include <QFileDialog>
#include "widget.h"

namespace Ui {
class TVWidget;
}

class TVWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TVWidget(QWidget *parent = nullptr);
    ~TVWidget();
private slots:
    void Sub1Slots(int value);  //响应一级子菜单的模式变化
private:
    void playVideo(const QString& videoPath);   //播放视频
    void playMusic(const QString& musicPath);   //播放音乐
private:
    Ui::TVWidget *ui;
    Widget *Menu;

    //音乐
    QMediaPlayer *player = nullptr;
    QAudioOutput *audioOutput = nullptr;

    //视频
    QMediaPlayer* m_player = nullptr;
    QAudioOutput* m_audioOutput = nullptr;
    QVideoWidget* m_videoWidget = nullptr;

    //视频的路径列表
    QStringList PlayMvList = {"qrc:/mv/1.mp4","qrc:/mv/2.mp4","qrc:/mv/3.mp4","qrc:/mv/4.mp4","qrc:/mv/5.mp4"};
    //音乐列表
    QStringList PlayMusicList = {"qrc:/music/1.mp3","qrc:/music/2.mp3","qrc:/music/3.mp3","qrc:/music/4.mp3","qrc:/music/5.mp3"};

};

#endif // TVWIDGET_H
