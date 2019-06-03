#include "imageshow.h"
#include "ui_imageshow.h"

ImageShow::ImageShow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ImageShow)
{
    ui->setupUi(this);
}

ImageShow::~ImageShow()
{
    delete ui;
}

void ImageShow::changeImage()
{

}