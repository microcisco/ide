#ifndef CODE_H
#define CODE_H
#include<QPlainTextEdit>
#include<QDebug>

class Code : public QPlainTextEdit
{
public:
    Code();

signals:

public slots:
    void changeLine();
};

#endif // CODE_H
