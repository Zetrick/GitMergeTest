#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Code added in master branch at 1pm
    //Code added in master branch at 3pm
}

MainWindow::~MainWindow()
{
    delete ui;
}
