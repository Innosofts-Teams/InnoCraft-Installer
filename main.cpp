#include "mainwindow.h"
#include <iostream>
#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QMessageBox>
using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "untitled_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
     }
    //QMessageBox::information(NULL, "提示", "请安装7zip！否则无法安装本软件!");
    MainWindow w;
    w.setWindowTitle(QStringLiteral("InnoToolsActivation"));
    w.show();
    return a.exec();
}


