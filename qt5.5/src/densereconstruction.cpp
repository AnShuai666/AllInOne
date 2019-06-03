#include "densereconstruction.h"
#include "ui_densereconstruction.h"

DenseReconstruction::DenseReconstruction(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DenseReconstruction)
{
    ui->setupUi(this);
}

DenseReconstruction::~DenseReconstruction()
{
    delete ui;
}
