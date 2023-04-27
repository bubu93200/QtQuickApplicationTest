#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCheckBox>
#include <QLineEdit>
#include <QPushButton>

#include "mylibrary.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

private slots:
    void onComputeClicked();

private:
    QCheckBox* mAdditionCheckBox;
    QCheckBox* mMultiplicationCheckBox;
    QLineEdit* mNumber1LineEdit;
    QLineEdit* mNumber2LineEdit;
    QPushButton* mComputeButton;

    MyLibrary mLibrary;
};

#endif // MAINWINDOW_H

