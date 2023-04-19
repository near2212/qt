
#ifndef COUNTER_H
#define COUNTER_H



#include <QObject>
#include <QWidget>

class MainWindow;



class Counter: public QWidget
{
    Q_OBJECT
public:
    explicit Counter(MainWindow *w);
    int GetCounter();
    int counter = 0;


public slots:
    void SetCounter();
signals:
    void ValueChanged();
private:
    //int counter = 0;
    QString s = "";

};

#endif // COUNTER_H
