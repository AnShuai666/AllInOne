#include "sparsereconstruction.h"
#include "ui_sparsereconstruction.h"

SparseReconstruction::SparseReconstruction(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SparseReconstruction)
{
    ui->setupUi(this);
}

SparseReconstruction::~SparseReconstruction()
{
    delete ui;
}
