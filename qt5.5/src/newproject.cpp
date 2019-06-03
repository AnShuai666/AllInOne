#include "newproject.h"
#include "ui_newproject.h"

NewProject::NewProject(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NewProject)
{
    ui->setupUi(this);

    //初始化图像显示窗口 并设置窗口标题 然后建立联系
    imageShow = new ImageShow();
    imageShow->setWindowTitle("图像");
    connect(ui->filePathToolButton,SIGNAL(clicked(bool)),this,SLOT(showImageShowWidget()));

}

NewProject::~NewProject()
{
    delete ui;
}

void NewProject::showImageShowWidget()
{
    imageShow->show();
}

