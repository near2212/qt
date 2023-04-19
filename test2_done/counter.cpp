#include "mainwindow.h"
#include "counter.h"

Counter::Counter(MainWindow *w)
{

    connect(this, &Counter::ValueChanged, w, &MainWindow::on_label_windowIconTextChanged);
}

void Counter::SetCounter()
{

    this->counter += 1;
    emit ValueChanged();

}


