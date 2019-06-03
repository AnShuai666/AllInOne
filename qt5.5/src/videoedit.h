#ifndef VIDEOEDIT_H
#define VIDEOEDIT_H

#include <QWidget>

namespace Ui {
class VideoEdit;
}

class VideoEdit : public QWidget
{
    Q_OBJECT

public:
    explicit VideoEdit(QWidget *parent = 0);
    ~VideoEdit();

private:
    Ui::VideoEdit *ui;
};

#endif // VIDEOEDIT_H
