#include "tvwidget.h"
#include "ui_tvwidget.h"

TVWidget::TVWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TVWidget)
{
    ui->setupUi(this);
    //去掉窗口边框
    setWindowFlags(Qt::FramelessWindowHint);

    //实例化TV菜单
    Menu = new Widget;

    //关联菜单模式改变TV
    connect(Menu, &Widget::Sub1Signal, this, &TVWidget::Sub1Slots);

    //初始化视频窗口和播放
    m_player = new QMediaPlayer(this);
    m_audioOutput = new QAudioOutput(this);
    m_videoWidget = new QVideoWidget(this);
    m_videoWidget->resize(800, 600);
    m_player->setAudioOutput(m_audioOutput);
    m_player->setVideoOutput(m_videoWidget);

    //默认第0个
    m_player->setSource(QUrl("qrc:/mv/1.mp4"));
    m_player->play();

    //音乐
    player = new QMediaPlayer(this);
    audioOutput = new QAudioOutput(this);
    player->setAudioOutput(audioOutput);//指定音频输出位置
    audioOutput->setVolume(0.5);  //调节音频音量
    player->setSource(QUrl("qrc:/music/1.mp3"));
    player->play();

    // 设置视频循环播放
    connect(m_player, &QMediaPlayer::mediaStatusChanged, this, [this](QMediaPlayer::MediaStatus status) {
        if (status == QMediaPlayer::MediaStatus::EndOfMedia) {
            m_player->setPosition(0);
            m_player->play();
        }
    });

    // 设置音乐循环播放
    connect(player, &QMediaPlayer::mediaStatusChanged, this, [this](QMediaPlayer::MediaStatus status) {
        if (status == QMediaPlayer::MediaStatus::EndOfMedia) {
            player->setPosition(0);
            player->play();
        }
    });

}

TVWidget::~TVWidget()
{
    delete ui;
}

void TVWidget::Sub1Slots(int value)
{
    //qDebug()<<"因为收到遥控器的改变输入源的信号，收到val=="<<value;
    playVideo(PlayMvList[value]);
    playMusic(PlayMusicList[value]);
}

// 播放视频的函数
void TVWidget::playVideo(const QString &newGifPath)
{
    m_player->setSource(QUrl(newGifPath));
    m_player->play();
}

// 播放音乐的函数
void TVWidget::playMusic(const QString& musicPath)
{
    player->setSource(QUrl(musicPath));
    player->play();
}

