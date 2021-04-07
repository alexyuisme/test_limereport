#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "lrreportengine.h"
#include <QDebug>
#include <QTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    QTime start = QTime::currentTime();
    LimeReport::ReportEngine* report = new LimeReport::ReportEngine(this);
    qDebug() << start.msecsTo(QTime::currentTime());
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

