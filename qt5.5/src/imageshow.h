#ifndef IMAGESHOW_H
#define IMAGESHOW_H

#include <QWidget>

namespace Ui {
class ImageShow;
}

class ImageShow : public QWidget
{
    Q_OBJECT

public:
    explicit ImageShow(QWidget *parent = 0);
    ~ImageShow();

signals:
    void emitDeleteImage();

public slots:
    void changeImage();

private:
    Ui::ImageShow *ui;
};

#endif // IMAGESHOW_H
