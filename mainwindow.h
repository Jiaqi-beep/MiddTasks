#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QPushButton;
class QLineEdit;
class QTextEdit;
class QDateTimeEdit;
class QDoubleSpinBox;
class QTableWidget;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void addTask();
    void updateTableWidget();
    void userChangePriority();

private:

    // fields in save task window
    QPushButton *saveButton;
    QPushButton *clearButton;
    QLineEdit *titleLineEdit;
    QDateTimeEdit *deadlineDateTimeEdit;
    QDoubleSpinBox *timeCommitSpinBox;
    QTextEdit *descriptionText;

    // fields in display task window
    QTableWidget tasksTable;

    // methods
    void setUpUI();
    void readSettings();
    void writeSettings();

};
#endif // MAINWINDOW_H
