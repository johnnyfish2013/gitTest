#include "firstprogram.h"
#include "ui_firstprogram.h"

FirstProgram::FirstProgram(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FirstProgram)
{
    ui->setupUi(this);
}

FirstProgram::~FirstProgram()
{
    delete ui;
}
