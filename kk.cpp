#include "kk.h"

kk::kk(QWidget *parent) : QWidget(parent)
{

}

void kk::changeLine()
{

    QString str;
    int num = so->document()->lineCount();
    for(int i = 1;i<num+1;++i)
    {
        str.append(QString::number(i));
        str.append("\n");
    }

    os->setText(str);

}
