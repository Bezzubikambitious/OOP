#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "drib.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_enter_clicked();

    void on_adddd_clicked();

    void on_subbb_clicked();

    void on_divvv_clicked();

    void on_mulll_clicked();

    void on_obern_3_clicked();

    void on_obern_4_clicked();

private:
    Ui::MainWindow *ui;
    Drib *m1;
    Drib *m2;
};
#endif // MAINWINDOW_H
