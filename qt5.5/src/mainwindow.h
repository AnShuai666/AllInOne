#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <qt5/QtWidgets/QMainWindow>
#include <qt5/QtCore/qobjectdefs.h>
#include "sparsereconstruction.h"
#include "densereconstruction.h"
#include "videoedit.h"
#include "imageshow.h"
#include "newproject.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
        ~MainWindow();

public slots:
    void showSparseReconstructionWidget();
    void showDenseReconstructionWidget();
    void showVideoEditWidget();
    void showNewProjectWidget();


private:
    Ui::MainWindow *ui;
    SparseReconstruction *sparseReconstruction;
    DenseReconstruction *denseReconstruction;
    VideoEdit *videoEdit;
    NewProject *newProject;

};

#endif // MAINWINDOW_H
