#ifndef DENSERECONSTRUCTION_H
#define DENSERECONSTRUCTION_H

#include <QWidget>

namespace Ui {
class DenseReconstruction;
}

class DenseReconstruction : public QWidget
{
    Q_OBJECT

public:
    explicit DenseReconstruction(QWidget *parent = 0);
    ~DenseReconstruction();

private:
    Ui::DenseReconstruction *ui;
};

#endif // DENSERECONSTRUCTION_H
