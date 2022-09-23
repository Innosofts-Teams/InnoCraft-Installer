#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "ui_mainwindow.h"
#include <stdlib.h>
#include <stdio.h>
#include <QMessageBox>
#include <Windows.h>
#include <direct.h>
#include <iostream>
#include <urlmon.h>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <fstream>
#pragma comment(lib,"urlmon.lib")
using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_clicked()
{
   QString user_ = ui->user->text();
   QString key_ = ui->key->text();
   int key = key_.toInt();qDebug() << key_;
   string user = user_.toStdString();
   string a;
   a = "aria2c.exe http://175.178.105.153:3205/" + user +"key.js";
   const char* url = a.data();
   system(url);
   ifstream ifile;
   ifile.open(user + "key.js");
   int key_2;
   ifile >> key_2;
   if (key == key_2)
   {
    ifile.close();
    system("del *.js");
    QMessageBox::information(NULL, "密钥正确！", "正在激活.......");
    QMessageBox::information(NULL, "提示" , "激活过程中会大约死机7.5秒");
    system("aria2c.exe http://175.178.105.153:3205/package.zip");
    system("7z.exe x package.zip");
    system("start install.exe");
    Sleep(7500);
    QMessageBox::information(NULL, "提示" , "激活成功！");

   }
   else{
       ifile.close();
       system("del %TEMP%\\*.js");
       QMessageBox::information(NULL, "密钥错误！", "请检查用户名或key是否错误");
   }


}
