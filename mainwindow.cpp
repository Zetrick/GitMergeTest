#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Changed code (in new_code) added in master branch at 1pm

    //Code added in new_code at 2pm
    //Extra code added in new_code at 4pm
}

MainWindow::~MainWindow()
{
    delete ui;
}
