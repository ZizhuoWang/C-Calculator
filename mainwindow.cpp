#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>
#include <string>
#include <cstdio>
#include <iostream>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->lineEdit4->setText("=");
    ui->lineEdit4->setReadOnly(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton0_clicked()
{
    if(flag%4==0){
        flag=1;
        ui->textEdit->append(ui->lineEdit1->text()
                             +ui->lineEdit2->text()
                             +ui->lineEdit3->text()
                             +ui->lineEdit4->text()
                             +ui->lineEdit5->text()+"\n");
        ui->lineEdit1->setText("");
        ui->lineEdit2->setText("");
        ui->lineEdit3->setText("");
        ui->lineEdit5->setText("");
    }
    if(flag%4==2){
        flag++;
    }
    if(flag%4==1){
        ui->lineEdit1->setText(ui->lineEdit1->text()+ui->pushButton0->text());
    }else if (flag%4==3) {
        ui->lineEdit3->setText(ui->lineEdit3->text()+ui->pushButton0->text());
    }
}
void MainWindow::on_pushButton1_clicked()
{
    if(flag%4==0){
        flag=1;
        ui->textEdit->append(ui->lineEdit1->text()
                             +ui->lineEdit2->text()
                             +ui->lineEdit3->text()
                             +ui->lineEdit4->text()
                             +ui->lineEdit5->text()+"\n");
        ui->lineEdit1->setText("");
        ui->lineEdit2->setText("");
        ui->lineEdit3->setText("");
        ui->lineEdit5->setText("");
    }
    if(flag%4==2){
        flag++;
    }
    if(flag%4==1){
        ui->lineEdit1->setText(ui->lineEdit1->text()+ui->pushButton1->text());
    }else if (flag%4==3) {
        ui->lineEdit3->setText(ui->lineEdit3->text()+ui->pushButton1->text());
    }
}
void MainWindow::on_pushButton2_clicked()
{
    if(flag%4==0){
        flag=1;
        ui->textEdit->append(ui->lineEdit1->text()
                             +ui->lineEdit2->text()
                             +ui->lineEdit3->text()
                             +ui->lineEdit4->text()
                             +ui->lineEdit5->text()+"\n");
        ui->lineEdit1->setText("");
        ui->lineEdit2->setText("");
        ui->lineEdit3->setText("");
        ui->lineEdit5->setText("");
    }
    if(flag%4==2){
        flag++;
    }
    if(flag%4==1){
        ui->lineEdit1->setText(ui->lineEdit1->text()+ui->pushButton2->text());
    }else if (flag%4==3) {
        ui->lineEdit3->setText(ui->lineEdit3->text()+ui->pushButton2->text());
    }
}
void MainWindow::on_pushButton3_clicked()
{
    if(flag%4==0){
        flag=1;
        ui->textEdit->append(ui->lineEdit1->text()
                             +ui->lineEdit2->text()
                             +ui->lineEdit3->text()
                             +ui->lineEdit4->text()
                             +ui->lineEdit5->text()+"\n");
        ui->lineEdit1->setText("");
        ui->lineEdit2->setText("");
        ui->lineEdit3->setText("");
        ui->lineEdit5->setText("");
    }
    if(flag%4==2){
        flag++;
    }
    if(flag%4==1){
        ui->lineEdit1->setText(ui->lineEdit1->text()+ui->pushButton3->text());
    }else if (flag%4==3) {
        ui->lineEdit3->setText(ui->lineEdit3->text()+ui->pushButton3->text());
    }
}
void MainWindow::on_pushButton4_clicked()
{
    if(flag%4==0){
        flag=1;
        ui->textEdit->append(ui->lineEdit1->text()
                             +ui->lineEdit2->text()
                             +ui->lineEdit3->text()
                             +ui->lineEdit4->text()
                             +ui->lineEdit5->text()+"\n");
        ui->lineEdit1->setText("");
        ui->lineEdit2->setText("");
        ui->lineEdit3->setText("");
        ui->lineEdit5->setText("");
    }
    if(flag%4==2){
        flag++;
    }
    if(flag%4==1){
        ui->lineEdit1->setText(ui->lineEdit1->text()+ui->pushButton4->text());
    }else if (flag%4==3) {
        ui->lineEdit3->setText(ui->lineEdit3->text()+ui->pushButton4->text());
    }
}
void MainWindow::on_pushButton5_clicked()
{
    if(flag%4==0){
        flag=1;
        ui->textEdit->append(ui->lineEdit1->text()
                             +ui->lineEdit2->text()
                             +ui->lineEdit3->text()
                             +ui->lineEdit4->text()
                             +ui->lineEdit5->text()+"\n");
        ui->lineEdit1->setText("");
        ui->lineEdit2->setText("");
        ui->lineEdit3->setText("");
        ui->lineEdit5->setText("");
    }
    if(flag%4==2){
        flag++;
    }
    if(flag%4==1){
        ui->lineEdit1->setText(ui->lineEdit1->text()+ui->pushButton5->text());
    }else if (flag%4==3) {
        ui->lineEdit3->setText(ui->lineEdit3->text()+ui->pushButton5->text());
    }
}
void MainWindow::on_pushButton6_clicked()
{
    if(flag%4==0){
        flag=1;
        ui->textEdit->append(ui->lineEdit1->text()
                             +ui->lineEdit2->text()
                             +ui->lineEdit3->text()
                             +ui->lineEdit4->text()
                             +ui->lineEdit5->text()+"\n");
        ui->lineEdit1->setText("");
        ui->lineEdit2->setText("");
        ui->lineEdit3->setText("");
        ui->lineEdit5->setText("");
    }
    if(flag%4==2){
        flag++;
    }
    if(flag%4==1){
        ui->lineEdit1->setText(ui->lineEdit1->text()+ui->pushButton6->text());
    }else if (flag%4==3) {
        ui->lineEdit3->setText(ui->lineEdit3->text()+ui->pushButton6->text());
    }
}
void MainWindow::on_pushButton7_clicked()
{
    if(flag%4==0){
        flag=1;
        ui->textEdit->append(ui->lineEdit1->text()
                             +ui->lineEdit2->text()
                             +ui->lineEdit3->text()
                             +ui->lineEdit4->text()
                             +ui->lineEdit5->text()+"\n");
        ui->lineEdit1->setText("");
        ui->lineEdit2->setText("");
        ui->lineEdit3->setText("");
        ui->lineEdit5->setText("");
    }
    if(flag%4==2){
        flag++;
    }
    if(flag%4==1){
        ui->lineEdit1->setText(ui->lineEdit1->text()+ui->pushButton7->text());
    }else if (flag%4==3) {
        ui->lineEdit3->setText(ui->lineEdit3->text()+ui->pushButton7->text());
    }
}
void MainWindow::on_pushButton8_clicked()
{
    if(flag%4==0){
        flag=1;
        ui->textEdit->append(ui->lineEdit1->text()
                             +ui->lineEdit2->text()
                             +ui->lineEdit3->text()
                             +ui->lineEdit4->text()
                             +ui->lineEdit5->text()+"\n");
        ui->lineEdit1->setText("");
        ui->lineEdit2->setText("");
        ui->lineEdit3->setText("");
        ui->lineEdit5->setText("");
    }
    if(flag%4==2){
        flag++;
    }
    if(flag%4==1){
        ui->lineEdit1->setText(ui->lineEdit1->text()+ui->pushButton8->text());
    }else if (flag%4==3) {
        ui->lineEdit3->setText(ui->lineEdit3->text()+ui->pushButton8->text());
    }
}
void MainWindow::on_pushButton9_clicked()
{
    if(flag%4==0){
        flag=1;
        ui->textEdit->append(ui->lineEdit1->text()
                             +ui->lineEdit2->text()
                             +ui->lineEdit3->text()
                             +ui->lineEdit4->text()
                             +ui->lineEdit5->text()+"\n");
        ui->lineEdit1->setText("");
        ui->lineEdit2->setText("");
        ui->lineEdit3->setText("");
        ui->lineEdit5->setText("");
    }
    if(flag%4==2){
        flag++;
    }
    if(flag%4==1){
        ui->lineEdit1->setText(ui->lineEdit1->text()+ui->pushButton9->text());
    }else if (flag%4==3) {
        ui->lineEdit3->setText(ui->lineEdit3->text()+ui->pushButton9->text());
    }
}
void MainWindow::on_pushButtonPoint_clicked()
{
    if(flag%4==0){
        flag=1;
        ui->textEdit->append(ui->lineEdit1->text()
                             +ui->lineEdit2->text()
                             +ui->lineEdit3->text()
                             +ui->lineEdit4->text()
                             +ui->lineEdit5->text()+"\n");
        ui->lineEdit1->setText("");
        ui->lineEdit2->setText("");
        ui->lineEdit3->setText("");
        ui->lineEdit5->setText("");
    }
    if(flag%4==2){
        flag++;
    }
    if(flag%4==1){
        ui->lineEdit1->setText(ui->lineEdit1->text()+ui->pushButtonPoint->text());
    }else if (flag%4==3) {
        ui->lineEdit3->setText(ui->lineEdit3->text()+ui->pushButtonPoint->text());
    }
}

void MainWindow::on_pushButtonAdd_clicked()
{
    if (flag%4==0) {
        //If there already had a result, then move the result in lineEdit5 to lineEdit1 and clear others.
        flag=1;//Use the next if statement
        ui->textEdit->append(ui->lineEdit1->text()
                             +ui->lineEdit2->text()
                             +ui->lineEdit3->text()
                             +ui->lineEdit4->text()
                             +ui->lineEdit5->text()+"\n");
        ui->lineEdit1->setText(ui->lineEdit5->text());
        ui->lineEdit2->setText("");
        ui->lineEdit3->setText("");
        ui->lineEdit5->setText("");
    }
    if (flag%4==1||flag%4==3) {
        flag++;
    }
    if (flag%4==2) {
        //Set the operator
        ui->lineEdit2->setText(ui->pushButtonAdd->text());
    }
}
void MainWindow::on_pushButtonSubstract_clicked()
{
    if (flag%4==0) {
        //If there already had a result, then move the result in lineEdit5 to lineEdit1 and clear others.
        flag=1;//Use the next if statement
        ui->textEdit->append(ui->lineEdit1->text()
                             +ui->lineEdit2->text()
                             +ui->lineEdit3->text()
                             +ui->lineEdit4->text()
                             +ui->lineEdit5->text()+"\n");
        ui->lineEdit1->setText(ui->lineEdit5->text());
        ui->lineEdit2->setText("");
        ui->lineEdit3->setText("");
        ui->lineEdit5->setText("");
    }
    if (flag%4==1||flag%4==3) {
        flag++;
    }
    if (flag%4==2) {
        //Set the operator
        ui->lineEdit2->setText(ui->pushButtonSubstract->text());
    }
}
void MainWindow::on_pushButtonMultiply_clicked()
{
    if (flag%4==0) {
        //If there already had a result, then move the result in lineEdit5 to lineEdit1 and clear others.
        flag=1;//Use the next if statement
        ui->textEdit->append(ui->lineEdit1->text()
                             +ui->lineEdit2->text()
                             +ui->lineEdit3->text()
                             +ui->lineEdit4->text()
                             +ui->lineEdit5->text()+"\n");
        ui->lineEdit1->setText(ui->lineEdit5->text());
        ui->lineEdit2->setText("");
        ui->lineEdit3->setText("");
        ui->lineEdit5->setText("");
    }
    if (flag%4==1||flag%4==3) {
        flag++;
    }
    if (flag%4==2) {
        //Set the operator
        ui->lineEdit2->setText(ui->pushButtonMultiply->text());
    }
}
void MainWindow::on_pushButtonDivide_clicked()
{
    if (flag%4==0) {
        //If there already had a result, then move the result in lineEdit5 to lineEdit1 and clear others.
        flag=1;//Use the next if statement
        ui->textEdit->append(ui->lineEdit1->text()
                             +ui->lineEdit2->text()
                             +ui->lineEdit3->text()
                             +ui->lineEdit4->text()
                             +ui->lineEdit5->text()+"\n");
        ui->lineEdit1->setText(ui->lineEdit5->text());
        ui->lineEdit2->setText("");
        ui->lineEdit3->setText("");
        ui->lineEdit5->setText("");
    }
    if (flag%4==1||flag%4==3) {
        flag++;
    }
    if (flag%4==2) {
        //Set the operator
        ui->lineEdit2->setText(ui->pushButtonDivide->text());
    }
}
void MainWindow::on_pushButtonRoot_clicked()
{
    if (flag%4==0) {
        //If there already had a result, then move the result in lineEdit5 to lineEdit1 and clear others.
        flag=1;//Use the next if statement
        ui->textEdit->append(ui->lineEdit1->text()
                             +ui->lineEdit2->text()
                             +ui->lineEdit3->text()
                             +ui->lineEdit4->text()
                             +ui->lineEdit5->text()+"\n");
        ui->lineEdit1->setText(ui->lineEdit5->text());
        ui->lineEdit2->setText("");
        ui->lineEdit3->setText("");
        ui->lineEdit5->setText("");
    }
    if (flag%4==1||flag%4==3) {
        flag++;
    }
    if (flag%4==2) {
        //Set the operator
        ui->lineEdit2->setText(ui->pushButtonRoot->text());
    }
}
void MainWindow::on_pushButtonPower_clicked()
{
    if (flag%4==0) {
        //If there already had a result, then move the result in lineEdit5 to lineEdit1 and clear others.
        flag=1;//Use the next if statement
        ui->textEdit->append(ui->lineEdit1->text()
                             +ui->lineEdit2->text()
                             +ui->lineEdit3->text()
                             +ui->lineEdit4->text()
                             +ui->lineEdit5->text()+"\n");
        ui->lineEdit1->setText(ui->lineEdit5->text());
        ui->lineEdit2->setText("");
        ui->lineEdit3->setText("");
        ui->lineEdit5->setText("");
    }
    if (flag%4==1||flag%4==3) {
        flag++;
    }
    if (flag%4==2) {
        //Set the operator
        ui->lineEdit2->setText(ui->pushButtonPower->text());
    }
}


void MainWindow::on_pushButtonC_clicked()
{
    ui->lineEdit1->setText("");
    ui->lineEdit2->setText("");
    ui->lineEdit3->setText("");
    ui->lineEdit5->setText("");
}

void MainWindow::on_pushButtonBack_clicked()
{
    if(flag%4==1){
        ui->lineEdit1->backspace();
    }
    if(flag%4==3){
        ui->lineEdit3->backspace();
    }
    if(flag%4==0){
        //If there already had a result, then move the result in lineEdit5 to lineEdit1 and clear others.
        flag=1;
        ui->textEdit->append(ui->lineEdit1->text()
                             +ui->lineEdit2->text()
                             +ui->lineEdit3->text()
                             +ui->lineEdit4->text()
                             +ui->lineEdit5->text()+"\n");
        ui->lineEdit1->setText(ui->lineEdit5->text());
        ui->lineEdit2->setText("");
        ui->lineEdit3->setText("");
        ui->lineEdit5->setText("");
        ui->lineEdit1->backspace();
    }
}


void MainWindow::on_pushButtonEqual_clicked()
{
    if (flag%4==3) {
        flag++;
    }
    if (flag%4==0) {
        double result=0.0;
        switch((unsigned char)ui->lineEdit2->text().at(0).toLatin1()){
        case '+':
            result=ui->lineEdit1->text().toDouble()+ui->lineEdit3->text().toDouble();
            break;
        case '-':
            result=ui->lineEdit1->text().toDouble()-ui->lineEdit3->text().toDouble();
            break;
        case '*':
            result=ui->lineEdit1->text().toDouble()*ui->lineEdit3->text().toDouble();
            break;
        case '/':
            result=ui->lineEdit1->text().toDouble()/ui->lineEdit3->text().toDouble();
            break;
        case 'r':
            result=pow(ui->lineEdit1->text().toDouble(),(double)1.0/ui->lineEdit3->text().toDouble());
            break;
        case '^':
            result=pow(ui->lineEdit1->text().toDouble(),ui->lineEdit3->text().toDouble());
            break;
        case 's':
            result=sin(ui->lineEdit1->text().toDouble());
            break;
        case 'c':
            result=cos(ui->lineEdit1->text().toDouble());
            break;
        case 't':
            result=tan(ui->lineEdit1->text().toDouble());
            break;
        default:
            result=0.0;
            break;
        }
        char buffer[30];
        gcvt(result,15,buffer);
        ui->lineEdit5->setText(buffer);
    }
}

void MainWindow::on_pushButtonSin_clicked()
{
    if (flag%4==0) {
        //If there already had a result, then move the result in lineEdit5 to lineEdit1 and clear others.
        flag=1;//Use the next if statement
        ui->textEdit->append(ui->lineEdit1->text()
                             +ui->lineEdit2->text()
                             +ui->lineEdit3->text()
                             +ui->lineEdit4->text()
                             +ui->lineEdit5->text()+"\n");
        ui->lineEdit1->setText(ui->lineEdit5->text());
        ui->lineEdit2->setText("");
        ui->lineEdit3->setText("");
        ui->lineEdit5->setText("");
    }
    if (flag%4==1) {
        flag++;
    }
    if (flag%4==2) {
        //Set the operator
        ui->lineEdit2->setText("s");
        flag=4;
    }
}

void MainWindow::on_pushButtonCos_clicked()
{
    if (flag%4==0) {
        //If there already had a result, then move the result in lineEdit5 to lineEdit1 and clear others.
        flag=1;//Use the next if statement
        ui->textEdit->append(ui->lineEdit1->text()
                             +ui->lineEdit2->text()
                             +ui->lineEdit3->text()
                             +ui->lineEdit4->text()
                             +ui->lineEdit5->text()+"\n");
        ui->lineEdit1->setText(ui->lineEdit5->text());
        ui->lineEdit2->setText("");
        ui->lineEdit3->setText("");
        ui->lineEdit5->setText("");
    }
    if (flag%4==1) {
        flag++;
    }
    if (flag%4==2) {
        //Set the operator
        ui->lineEdit2->setText("c");
        flag=4;
    }
}
void MainWindow::on_pushButtonTan_clicked()
{
    if (flag%4==0) {
        //If there already had a result, then move the result in lineEdit5 to lineEdit1 and clear others.
        flag=1;//Use the next if statement
        ui->textEdit->append(ui->lineEdit1->text()
                             +ui->lineEdit2->text()
                             +ui->lineEdit3->text()
                             +ui->lineEdit4->text()
                             +ui->lineEdit5->text()+"\n");
        ui->lineEdit1->setText(ui->lineEdit5->text());
        ui->lineEdit2->setText("");
        ui->lineEdit3->setText("");
        ui->lineEdit5->setText("");
    }
    if (flag%4==1) {
        flag++;
    }
    if (flag%4==2) {
        //Set the operator
        ui->lineEdit2->setText("t");
        flag=4;
    }
}
