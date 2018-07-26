#ifndef FIRSTPROGRAM_H
#define FIRSTPROGRAM_H

#include <QMainWindow>

namespace Ui {
class FirstProgram;
}

class FirstProgram : public QMainWindow
{
    Q_OBJECT

public:
    explicit FirstProgram(QWidget *parent = 0);
    ~FirstProgram();

private:
    Ui::FirstProgram *ui;
};

#endif // FIRSTPROGRAM_H
