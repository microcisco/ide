#include<QApplication>
#include<QWidget>
#include<QPlainTextEdit>
#include<QHBoxLayout>
#include<QDebug>
#include<QObject>
#include<Qt>

#include<code.h>
#include<linenum.h>
#include<kk.h>


int main(int argc, char* argv[])
{

    QApplication app(argc, argv);
    QWidget w; //主窗口
    w.show();
    kk slotK;
    //行号区
    LineNum l;
    //代码区
    Code c;
    //调整显示
    l.setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    slotK.so = &c;
    slotK.os = &l;
    QHBoxLayout layout;
    layout.setSpacing(0);
    w.setLayout(&layout);
    layout.addWidget(&l);
    layout.addWidget(&c, 3);
    w.setMinimumSize(600, 400);
    l.setFixedWidth(14);
    l.setStyleSheet(QString::fromUtf8("border:1px solid #ccc"));
    c.setStyleSheet(QString::fromUtf8("border:0px"));
    QObject::connect(&c, SIGNAL(textChanged()), &slotK, SLOT(changeLine()));








    return app.exec();
}
