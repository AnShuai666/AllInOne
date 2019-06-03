#ifndef SPARSERECONSTRUCTION_H
#define SPARSERECONSTRUCTION_H

#include <QWidget>

namespace Ui {
class SparseReconstruction;
}

class SparseReconstruction : public QWidget
{
    Q_OBJECT

public:
    explicit SparseReconstruction(QWidget *parent = 0);
    ~SparseReconstruction();

private:
    Ui::SparseReconstruction *ui;

};

#endif // SPARSERECONSTRUCTION_H
