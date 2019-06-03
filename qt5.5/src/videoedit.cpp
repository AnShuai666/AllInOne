#include "videoedit.h"
#include "ui_videoedit.h"

VideoEdit::VideoEdit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VideoEdit)
{
    ui->setupUi(this);
}

VideoEdit::~VideoEdit()
{
    delete ui;
}
