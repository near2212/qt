#include "counter.h"
#include "mainwindow.h"

Counter::Counter()
{
    MainWindow * w = new MainWindow;
    connect(this, SIGNAL(ValueChanged(int)), w, SLOT(w->on_label_windowIconTextChanged(Counter::s)));
}

void Counter::SetCounter(int newValue)
{

        this->counter += newValue;
        emit ValueChanged(this->counter);

}

void Counter::ValueChanged(int newValue)
{
        Counter::s = QString::number(newValue);
}
