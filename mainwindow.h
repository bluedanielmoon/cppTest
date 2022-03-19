#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class father{
public:
    father(){
        qDebug()<<"this is father con";
    }
    virtual ~father(){
        qDebug()<<"this is father decon";
    }
    void goHunt(){
        qDebug()<<"father go hunt";
        hunt();
    }

    virtual void hunt(){
        qDebug()<<"father hunt";
    }

    void note(){
        qDebug()<<"father note";
    }

};

class son :public father{
public:
    son(){
        qDebug()<<"this is son con";
    }
    ~son(){
        qDebug()<<"this is son decon";
    }
    void secondHunt(){
        qDebug()<<"son second hunt";
    }
    void hunt(){
        qDebug()<<"son hunt";
    }
    void note(){
        qDebug()<<"son note";
    }
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
