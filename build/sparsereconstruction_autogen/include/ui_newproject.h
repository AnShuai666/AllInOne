/********************************************************************************
** Form generated from reading UI file 'newproject.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPROJECT_H
#define UI_NEWPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewProject
{
public:
    QGridLayout *gridLayout;
    QGroupBox *newProjectGroupBox;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *filePathLabel;
    QLineEdit *filePathLineEdit;
    QToolButton *filePathToolButton;
    QHBoxLayout *horizontalLayout_8;
    QLabel *savePathLabel;
    QLineEdit *savePathLineEdit;
    QToolButton *savePathLoolButton;
    QHBoxLayout *horizontalLayout_9;
    QLabel *pointCloudFormatLabel;
    QComboBox *pointCloudFormatComboBox;
    QHBoxLayout *horizontalLayout_10;
    QLabel *textureQualityLabel;
    QComboBox *textureQualityComboBox;
    QHBoxLayout *horizontalLayout_11;
    QLabel *meshFormatLabel;
    QComboBox *meshFormatComboBox;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *savePushButton;
    QPushButton *closePushButton;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *NewProject)
    {
        if (NewProject->objectName().isEmpty())
            NewProject->setObjectName(QStringLiteral("NewProject"));
        NewProject->resize(260, 313);
        NewProject->setMaximumSize(QSize(260, 500));
        gridLayout = new QGridLayout(NewProject);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        newProjectGroupBox = new QGroupBox(NewProject);
        newProjectGroupBox->setObjectName(QStringLiteral("newProjectGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(newProjectGroupBox->sizePolicy().hasHeightForWidth());
        newProjectGroupBox->setSizePolicy(sizePolicy);
        newProjectGroupBox->setMaximumSize(QSize(252, 500));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe \345\256\213\344\275\223 Std L"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        newProjectGroupBox->setFont(font);
        newProjectGroupBox->setAutoFillBackground(true);
        newProjectGroupBox->setFlat(true);
        verticalLayout_4 = new QVBoxLayout(newProjectGroupBox);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        filePathLabel = new QLabel(newProjectGroupBox);
        filePathLabel->setObjectName(QStringLiteral("filePathLabel"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Adobe \345\256\213\344\275\223 Std L"));
        font1.setBold(false);
        font1.setWeight(50);
        filePathLabel->setFont(font1);

        horizontalLayout_7->addWidget(filePathLabel);

        filePathLineEdit = new QLineEdit(newProjectGroupBox);
        filePathLineEdit->setObjectName(QStringLiteral("filePathLineEdit"));

        horizontalLayout_7->addWidget(filePathLineEdit);

        filePathToolButton = new QToolButton(newProjectGroupBox);
        filePathToolButton->setObjectName(QStringLiteral("filePathToolButton"));

        horizontalLayout_7->addWidget(filePathToolButton);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        savePathLabel = new QLabel(newProjectGroupBox);
        savePathLabel->setObjectName(QStringLiteral("savePathLabel"));
        savePathLabel->setFont(font1);

        horizontalLayout_8->addWidget(savePathLabel);

        savePathLineEdit = new QLineEdit(newProjectGroupBox);
        savePathLineEdit->setObjectName(QStringLiteral("savePathLineEdit"));

        horizontalLayout_8->addWidget(savePathLineEdit);

        savePathLoolButton = new QToolButton(newProjectGroupBox);
        savePathLoolButton->setObjectName(QStringLiteral("savePathLoolButton"));

        horizontalLayout_8->addWidget(savePathLoolButton);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        pointCloudFormatLabel = new QLabel(newProjectGroupBox);
        pointCloudFormatLabel->setObjectName(QStringLiteral("pointCloudFormatLabel"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Adobe \345\256\213\344\275\223 Std L"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        pointCloudFormatLabel->setFont(font2);

        horizontalLayout_9->addWidget(pointCloudFormatLabel);

        pointCloudFormatComboBox = new QComboBox(newProjectGroupBox);
        pointCloudFormatComboBox->setObjectName(QStringLiteral("pointCloudFormatComboBox"));
        QFont font3;
        font3.setBold(false);
        font3.setWeight(50);
        pointCloudFormatComboBox->setFont(font3);

        horizontalLayout_9->addWidget(pointCloudFormatComboBox);


        verticalLayout_4->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        textureQualityLabel = new QLabel(newProjectGroupBox);
        textureQualityLabel->setObjectName(QStringLiteral("textureQualityLabel"));
        textureQualityLabel->setFont(font1);

        horizontalLayout_10->addWidget(textureQualityLabel);

        textureQualityComboBox = new QComboBox(newProjectGroupBox);
        textureQualityComboBox->setObjectName(QStringLiteral("textureQualityComboBox"));
        textureQualityComboBox->setFont(font3);

        horizontalLayout_10->addWidget(textureQualityComboBox);


        verticalLayout_4->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        meshFormatLabel = new QLabel(newProjectGroupBox);
        meshFormatLabel->setObjectName(QStringLiteral("meshFormatLabel"));
        meshFormatLabel->setFont(font2);

        horizontalLayout_11->addWidget(meshFormatLabel);

        meshFormatComboBox = new QComboBox(newProjectGroupBox);
        meshFormatComboBox->setObjectName(QStringLiteral("meshFormatComboBox"));

        horizontalLayout_11->addWidget(meshFormatComboBox);


        verticalLayout_4->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        savePushButton = new QPushButton(newProjectGroupBox);
        savePushButton->setObjectName(QStringLiteral("savePushButton"));
        savePushButton->setFont(font1);

        horizontalLayout_12->addWidget(savePushButton);

        closePushButton = new QPushButton(newProjectGroupBox);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));
        closePushButton->setFont(font1);

        horizontalLayout_12->addWidget(closePushButton);


        verticalLayout_4->addLayout(horizontalLayout_12);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Ignored);

        verticalLayout_2->addItem(verticalSpacer_3);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalSpacer_4 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_4);


        gridLayout->addWidget(newProjectGroupBox, 0, 0, 1, 1);


        retranslateUi(NewProject);

        QMetaObject::connectSlotsByName(NewProject);
    } // setupUi

    void retranslateUi(QWidget *NewProject)
    {
        NewProject->setWindowTitle(QApplication::translate("NewProject", "Form", 0));
        newProjectGroupBox->setTitle(QApplication::translate("NewProject", "\346\226\260\345\273\272\345\267\245\347\250\213", 0));
        filePathLabel->setText(QApplication::translate("NewProject", "\346\226\207\344\273\266\350\267\257\345\276\204", 0));
        filePathToolButton->setText(QApplication::translate("NewProject", "...", 0));
        savePathLabel->setText(QApplication::translate("NewProject", "\344\277\235\345\255\230\347\233\256\345\275\225", 0));
        savePathLoolButton->setText(QApplication::translate("NewProject", "...", 0));
        pointCloudFormatLabel->setText(QApplication::translate("NewProject", "\347\202\271\344\272\221\346\240\274\345\274\217", 0));
        pointCloudFormatComboBox->clear();
        pointCloudFormatComboBox->insertItems(0, QStringList()
         << QApplication::translate("NewProject", ".ply", 0)
         << QApplication::translate("NewProject", ".obj", 0)
         << QApplication::translate("NewProject", ".pcd", 0)
         << QApplication::translate("NewProject", ".xyz", 0)
         << QApplication::translate("NewProject", ".txt", 0)
        );
        textureQualityLabel->setText(QApplication::translate("NewProject", "\350\264\264\345\233\276\350\264\250\351\207\217", 0));
        textureQualityComboBox->clear();
        textureQualityComboBox->insertItems(0, QStringList()
         << QApplication::translate("NewProject", "\344\275\216", 0)
         << QApplication::translate("NewProject", "\344\270\255", 0)
         << QApplication::translate("NewProject", "\351\253\230", 0)
        );
        meshFormatLabel->setText(QApplication::translate("NewProject", "\347\275\221\346\240\274\346\240\274\345\274\217", 0));
        savePushButton->setText(QApplication::translate("NewProject", "\344\277\235\345\255\230", 0));
        closePushButton->setText(QApplication::translate("NewProject", "\345\205\263\351\227\255", 0));
    } // retranslateUi

};

namespace Ui {
    class NewProject: public Ui_NewProject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPROJECT_H
