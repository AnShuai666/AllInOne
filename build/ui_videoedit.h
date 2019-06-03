/********************************************************************************
** Form generated from reading UI file 'videoedit.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOEDIT_H
#define UI_VIDEOEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VideoEdit
{
public:
    QGridLayout *gridLayout;
    QGroupBox *VideoEditGroupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *frameRateSettingLabel;
    QSpinBox *frameRateSettingNumSpinBox;
    QCheckBox *isSmoothCheckBox;
    QSlider *frameSettingHorizontalSlider;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *addFramepushButton;
    QPushButton *deleteframePushButton;
    QHBoxLayout *horizontalLayout_4;
    QLabel *musicSelectLabel;
    QLineEdit *musicSelectLineEdit;
    QToolButton *musicSelectToolButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *videoFomatLabel;
    QRadioButton *MP4RadioButton;
    QRadioButton *AVIRadioButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *savePathLabel;
    QLineEdit *savePathLineEdit;
    QToolButton *savePathToolButton;
    QHBoxLayout *horizontalLayout;
    QPushButton *previewPushButton;
    QPushButton *generatePushButton;
    QPushButton *closePushButton;

    void setupUi(QWidget *VideoEdit)
    {
        if (VideoEdit->objectName().isEmpty())
            VideoEdit->setObjectName(QStringLiteral("VideoEdit"));
        VideoEdit->resize(431, 387);
        gridLayout = new QGridLayout(VideoEdit);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        VideoEditGroupBox = new QGroupBox(VideoEdit);
        VideoEditGroupBox->setObjectName(QStringLiteral("VideoEditGroupBox"));
        verticalLayout = new QVBoxLayout(VideoEditGroupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        frameRateSettingLabel = new QLabel(VideoEditGroupBox);
        frameRateSettingLabel->setObjectName(QStringLiteral("frameRateSettingLabel"));

        horizontalLayout_6->addWidget(frameRateSettingLabel);

        frameRateSettingNumSpinBox = new QSpinBox(VideoEditGroupBox);
        frameRateSettingNumSpinBox->setObjectName(QStringLiteral("frameRateSettingNumSpinBox"));

        horizontalLayout_6->addWidget(frameRateSettingNumSpinBox);

        isSmoothCheckBox = new QCheckBox(VideoEditGroupBox);
        isSmoothCheckBox->setObjectName(QStringLiteral("isSmoothCheckBox"));

        horizontalLayout_6->addWidget(isSmoothCheckBox);


        verticalLayout->addLayout(horizontalLayout_6);

        frameSettingHorizontalSlider = new QSlider(VideoEditGroupBox);
        frameSettingHorizontalSlider->setObjectName(QStringLiteral("frameSettingHorizontalSlider"));
        frameSettingHorizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(frameSettingHorizontalSlider);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        addFramepushButton = new QPushButton(VideoEditGroupBox);
        addFramepushButton->setObjectName(QStringLiteral("addFramepushButton"));

        horizontalLayout_5->addWidget(addFramepushButton);

        deleteframePushButton = new QPushButton(VideoEditGroupBox);
        deleteframePushButton->setObjectName(QStringLiteral("deleteframePushButton"));

        horizontalLayout_5->addWidget(deleteframePushButton);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        musicSelectLabel = new QLabel(VideoEditGroupBox);
        musicSelectLabel->setObjectName(QStringLiteral("musicSelectLabel"));

        horizontalLayout_4->addWidget(musicSelectLabel);

        musicSelectLineEdit = new QLineEdit(VideoEditGroupBox);
        musicSelectLineEdit->setObjectName(QStringLiteral("musicSelectLineEdit"));

        horizontalLayout_4->addWidget(musicSelectLineEdit);

        musicSelectToolButton = new QToolButton(VideoEditGroupBox);
        musicSelectToolButton->setObjectName(QStringLiteral("musicSelectToolButton"));

        horizontalLayout_4->addWidget(musicSelectToolButton);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        videoFomatLabel = new QLabel(VideoEditGroupBox);
        videoFomatLabel->setObjectName(QStringLiteral("videoFomatLabel"));

        horizontalLayout_3->addWidget(videoFomatLabel);

        MP4RadioButton = new QRadioButton(VideoEditGroupBox);
        MP4RadioButton->setObjectName(QStringLiteral("MP4RadioButton"));

        horizontalLayout_3->addWidget(MP4RadioButton);

        AVIRadioButton = new QRadioButton(VideoEditGroupBox);
        AVIRadioButton->setObjectName(QStringLiteral("AVIRadioButton"));

        horizontalLayout_3->addWidget(AVIRadioButton);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        savePathLabel = new QLabel(VideoEditGroupBox);
        savePathLabel->setObjectName(QStringLiteral("savePathLabel"));

        horizontalLayout_2->addWidget(savePathLabel);

        savePathLineEdit = new QLineEdit(VideoEditGroupBox);
        savePathLineEdit->setObjectName(QStringLiteral("savePathLineEdit"));

        horizontalLayout_2->addWidget(savePathLineEdit);

        savePathToolButton = new QToolButton(VideoEditGroupBox);
        savePathToolButton->setObjectName(QStringLiteral("savePathToolButton"));

        horizontalLayout_2->addWidget(savePathToolButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        previewPushButton = new QPushButton(VideoEditGroupBox);
        previewPushButton->setObjectName(QStringLiteral("previewPushButton"));

        horizontalLayout->addWidget(previewPushButton);

        generatePushButton = new QPushButton(VideoEditGroupBox);
        generatePushButton->setObjectName(QStringLiteral("generatePushButton"));

        horizontalLayout->addWidget(generatePushButton);

        closePushButton = new QPushButton(VideoEditGroupBox);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addWidget(VideoEditGroupBox, 0, 0, 1, 1);


        retranslateUi(VideoEdit);

        QMetaObject::connectSlotsByName(VideoEdit);
    } // setupUi

    void retranslateUi(QWidget *VideoEdit)
    {
        VideoEdit->setWindowTitle(QApplication::translate("VideoEdit", "Form", 0));
        VideoEditGroupBox->setTitle(QApplication::translate("VideoEdit", "\350\247\206\351\242\221\347\274\226\350\276\221", 0));
        frameRateSettingLabel->setText(QApplication::translate("VideoEdit", "\345\270\247\347\216\207\350\256\276\347\275\256", 0));
        isSmoothCheckBox->setText(QApplication::translate("VideoEdit", "\345\271\263\346\273\221\350\277\207\346\270\241", 0));
        addFramepushButton->setText(QApplication::translate("VideoEdit", "\346\267\273\345\212\240\345\270\247", 0));
        deleteframePushButton->setText(QApplication::translate("VideoEdit", "\345\210\240\351\231\244\345\270\247", 0));
        musicSelectLabel->setText(QApplication::translate("VideoEdit", "\351\237\263\344\271\220\351\200\211\346\213\251", 0));
        musicSelectToolButton->setText(QApplication::translate("VideoEdit", "...", 0));
        videoFomatLabel->setText(QApplication::translate("VideoEdit", "\350\247\206\351\242\221\346\240\274\345\274\217", 0));
        MP4RadioButton->setText(QApplication::translate("VideoEdit", "MP4", 0));
        AVIRadioButton->setText(QApplication::translate("VideoEdit", "AVI", 0));
        savePathLabel->setText(QApplication::translate("VideoEdit", "\344\277\235\345\255\230\350\267\257\345\276\204", 0));
        savePathToolButton->setText(QApplication::translate("VideoEdit", "...", 0));
        previewPushButton->setText(QApplication::translate("VideoEdit", "\351\242\204\350\247\210", 0));
        generatePushButton->setText(QApplication::translate("VideoEdit", "\347\224\237\346\210\220", 0));
        closePushButton->setText(QApplication::translate("VideoEdit", "\345\205\263\351\227\255", 0));
    } // retranslateUi

};

namespace Ui {
    class VideoEdit: public Ui_VideoEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOEDIT_H
