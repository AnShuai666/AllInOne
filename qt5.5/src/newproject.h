#ifndef NEWPROJECT_H
#define NEWPROJECT_H

#include <QWidget>
#include "imageshow.h"

namespace Ui {
class NewProject;
}

class NewProject : public QWidget
{
    Q_OBJECT

public:
    explicit NewProject(QWidget *parent = 0);
    ~NewProject();

    signals:

public slots:
    void showImageShowWidget();

private:
    Ui::NewProject *ui;
    ImageShow *imageShow;

};

#endif // NEWPROJECT_H
