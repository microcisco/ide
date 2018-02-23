#ifndef KK_H
#define KK_H

#include <QWidget>
#include<QDebug>
#include<code.h>
#include<linenum.h>

class kk : public QWidget
{
    Q_OBJECT
public:
    explicit kk(QWidget *parent = 0);

    Code* so;
    LineNum* os;



signals:

public slots:
        void changeLine();
};

#endif // KK_H
