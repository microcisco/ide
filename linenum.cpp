#include "linenum.h"

LineNum::LineNum()
{
    QString str;
    int num = 1;
    for(int i = 1;i<num+1;++i)
    {
        str.append(QString::number(i));
        str.append("\n");
    }

    this->setText(str);

}

