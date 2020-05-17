#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "drib.h"
#include <QString>
#include <exception>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    loggingg("Start...");
    m1=nullptr;
    m2=nullptr;

}

MainWindow::~MainWindow()
{
    delete ui;
     loggingg("End...");
}



void MainWindow::on_enter_clicked()
{
    delete m1;
    delete m2;
    m1 = new Drib();
       try {
            m1->initialization(ui->up1->toPlainText(), ui->down1->toPlainText(), ui->up2->toPlainText(),
                                  ui->down2->toPlainText());

       } catch (std::exception &ex) {
            loggingg(ex.what());
             QMessageBox::information(this, "ERROR", QString(ex.what()));
       }

     m2 = new Drib;
}

void MainWindow::on_adddd_clicked()
{
    try {
        m1->adding(m2);

        } catch (std::exception &ex)
        {
        loggingg(ex.what());
        QMessageBox::information(this, "ERROR", QString(ex.what()));
           }
     ui->add->setText( QString::number(m2->get_up_1()) + "/" + QString::number(m2->get_down_1()));
}

void MainWindow::on_subbb_clicked()
{
    try {
         m1->substraction(m2);
    } catch (std::exception &ex) {
         loggingg(ex.what());
       QMessageBox::information(this, "ERROR", QString(ex.what()));
    }
   ui->subs->setText( QString::number(m2->get_up_1()) + "/" + QString::number(m2->get_down_1()));

}

void MainWindow::on_divvv_clicked()
{
    try {
        m1->dividing(m2);
    } catch (std::exception &ex) {
         loggingg(ex.what());
         QMessageBox::information(this, "ERROR", QString(ex.what()));
    }
    ui->divide->setText( QString::number(m2->get_up_1()) + "/" + QString::number(m2->get_down_1()));
}

void MainWindow::on_mulll_clicked()
{
    try {
        m1->multiplying(m2);
    } catch (std::exception &ex) {
         loggingg(ex.what());
        QMessageBox::information(this, "ERROR", QString(ex.what()));
    }
    ui->multiply->setText( QString::number(m2->get_up_1()) + "/" + QString::number(m2->get_down_1()));
}

void MainWindow::on_obern_3_clicked()
{
    ui->obern_1->setText( QString::number(m1->get_down_1()) + "/" + QString::number(m1->get_up_1()));
}

void MainWindow::on_obern_4_clicked()
{
    ui->obern_2->setText( QString::number(m1->get_down_2()) + "/" + QString::number(m1->get_up_2()));

}
