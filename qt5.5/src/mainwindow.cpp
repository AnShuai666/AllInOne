#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //初始化稀疏重建窗口 并设置窗口标题 然后建立联系
    sparseReconstruction = new SparseReconstruction();
    sparseReconstruction->setWindowTitle("稀疏重建");
    connect(ui->sparseReconstructionAction,SIGNAL(triggered(bool)),this,SLOT(showSparseReconstructionWidget()));

    //初始化稠密重建窗口 并设置窗口标题 然后建立联系
    denseReconstruction = new DenseReconstruction();
    denseReconstruction->setWindowTitle("稠密重建");
    connect(ui->denseReconstructionAction,SIGNAL(triggered(bool)),this,SLOT(showDenseReconstructionWidget()));

    //初始化稠密重建窗口 并设置窗口标题 然后建立联系
    videoEdit = new VideoEdit();
    videoEdit->setWindowTitle("视频编辑");
    connect(ui->videoeditAction,SIGNAL(triggered(bool)),this,SLOT(showVideoEditWidget()));

    //初始化新建工程窗口 并设置窗口标题 然后建立联系
    newProject = new NewProject();
    newProject->setWindowTitle("新建工程");
    connect(ui->newProjectAction,SIGNAL(triggered(bool)),this,SLOT(showNewProjectWidget()));



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showSparseReconstructionWidget()
{
    sparseReconstruction->show();
}

void MainWindow::showDenseReconstructionWidget()
{
    denseReconstruction->show();
}

void MainWindow::showVideoEditWidget()
{
    videoEdit->show();
}

void MainWindow::showNewProjectWidget()
{
    newProject->show();
}

