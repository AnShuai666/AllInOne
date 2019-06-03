/********************************************************************************
** Form generated from reading UI file 'imageshow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGESHOW_H
#define UI_IMAGESHOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageShow
{
public:
    QHBoxLayout *horizontalLayout_3;
    QListView *thumbnailListView;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *imageShowLabel;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *fileNameLabel;
    QPushButton *prevImagePushButton;
    QPushButton *nextImagePushButton;
    QPushButton *deletePushButton;
    QPushButton *calibrationPushButton;

    void setupUi(QWidget *ImageShow)
    {
        if (ImageShow->objectName().isEmpty())
            ImageShow->setObjectName(QStringLiteral("ImageShow"));
        ImageShow->resize(656, 412);
        horizontalLayout_3 = new QHBoxLayout(ImageShow);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        thumbnailListView = new QListView(ImageShow);
        thumbnailListView->setObjectName(QStringLiteral("thumbnailListView"));
        thumbnailListView->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(thumbnailListView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        scrollArea = new QScrollArea(ImageShow);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 528, 356));
        horizontalLayout_2 = new QHBoxLayout(scrollAreaWidgetContents_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(219, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        imageShowLabel = new QLabel(scrollAreaWidgetContents_2);
        imageShowLabel->setObjectName(QStringLiteral("imageShowLabel"));

        horizontalLayout_2->addWidget(imageShowLabel);

        horizontalSpacer_2 = new QSpacerItem(219, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout->addWidget(scrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        fileNameLabel = new QLabel(ImageShow);
        fileNameLabel->setObjectName(QStringLiteral("fileNameLabel"));

        horizontalLayout->addWidget(fileNameLabel);

        prevImagePushButton = new QPushButton(ImageShow);
        prevImagePushButton->setObjectName(QStringLiteral("prevImagePushButton"));

        horizontalLayout->addWidget(prevImagePushButton);

        nextImagePushButton = new QPushButton(ImageShow);
        nextImagePushButton->setObjectName(QStringLiteral("nextImagePushButton"));

        horizontalLayout->addWidget(nextImagePushButton);

        deletePushButton = new QPushButton(ImageShow);
        deletePushButton->setObjectName(QStringLiteral("deletePushButton"));

        horizontalLayout->addWidget(deletePushButton);

        calibrationPushButton = new QPushButton(ImageShow);
        calibrationPushButton->setObjectName(QStringLiteral("calibrationPushButton"));

        horizontalLayout->addWidget(calibrationPushButton);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout);


        retranslateUi(ImageShow);

        QMetaObject::connectSlotsByName(ImageShow);
    } // setupUi

    void retranslateUi(QWidget *ImageShow)
    {
        ImageShow->setWindowTitle(QApplication::translate("ImageShow", "Form", 0));
        imageShowLabel->setText(QApplication::translate("ImageShow", "TextLabel", 0));
        fileNameLabel->setText(QApplication::translate("ImageShow", "\345\233\276\345\203\217\345\220\215", 0));
        prevImagePushButton->setText(QApplication::translate("ImageShow", "\344\270\212\344\270\200\345\274\240", 0));
        nextImagePushButton->setText(QApplication::translate("ImageShow", " \344\270\213\344\270\200\345\274\240", 0));
        deletePushButton->setText(QApplication::translate("ImageShow", " \345\210\240\351\231\244", 0));
        calibrationPushButton->setText(QApplication::translate("ImageShow", "\347\237\253\346\255\243", 0));
    } // retranslateUi

};

namespace Ui {
    class ImageShow: public Ui_ImageShow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGESHOW_H
