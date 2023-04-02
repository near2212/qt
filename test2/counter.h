#ifndef COUNTER_H
#define COUNTER_H

#include <QWidget>



class Counter:public QWidget
{
    Q_OBJECT
public:
   explicit Counter();
    int GetCounter();


public slots:
    void SetCounter(int newValue = 1);
signals:
    void ValueChanged(int newVal);
private:
    int counter = 0;
    QString s = "";


};


#endif // COUNTER_H
