#include "mainwindow.h"

#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setUpUI();

    setWindowTitle(tr("MiddTask"));
    setUnifiedTitleAndToolBarOnMac(true);
}

MainWindow::~MainWindow()
{
}

MainWindow::setUpUI()
{
    QWidget *w = new QWidget();
    setCentralWidget(w);
    tasksTable = new QTableWidget(1, 10, this);
    QVBoxLayout *l1 = new QVBoxLayout();
    w->setLayout(l1);
    l1->addWidget(tasksTable);
}
