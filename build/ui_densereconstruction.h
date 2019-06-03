/********************************************************************************
** Form generated from reading UI file 'densereconstruction.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DENSERECONSTRUCTION_H
#define UI_DENSERECONSTRUCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
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

class Ui_DenseReconstruction
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *pointCLoudPathLabel;
    QLineEdit *pointCLoudPathLineEdit;
    QToolButton *pointCLoudPathToolButton;
    QHBoxLayout *horizontalLayout_6;
    QLabel *cameraParameterLabel;
    QLineEdit *lineEdit_2;
    QToolButton *cameraParameterstoolButton;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QCheckBox *imageUndistortionCheckBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *maxImageNumLabel;
    QLineEdit *maxImageNumLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *reconstructionResolutionLabel;
    QComboBox *reconstructionResolutionComboBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *GPUNumLabel;
    QLineEdit *GPUNumLineEdit;
    QCheckBox *useGPUCheckBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *outputPathLabel;
    QLineEdit *outputPathLineEdit;
    QToolButton *outputPathToolButton;
    QHBoxLayout *horizontalLayout;
    QPushButton *cancelPushButton;
    QPushButton *runPushButton;

    void setupUi(QWidget *DenseReconstruction)
    {
        if (DenseReconstruction->objectName().isEmpty())
            DenseReconstruction->setObjectName(QStringLiteral("DenseReconstruction"));
        DenseReconstruction->resize(450, 389);
        gridLayout = new QGridLayout(DenseReconstruction);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(DenseReconstruction);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        pointCLoudPathLabel = new QLabel(groupBox);
        pointCLoudPathLabel->setObjectName(QStringLiteral("pointCLoudPathLabel"));

        horizontalLayout_7->addWidget(pointCLoudPathLabel);

        pointCLoudPathLineEdit = new QLineEdit(groupBox);
        pointCLoudPathLineEdit->setObjectName(QStringLiteral("pointCLoudPathLineEdit"));

        horizontalLayout_7->addWidget(pointCLoudPathLineEdit);

        pointCLoudPathToolButton = new QToolButton(groupBox);
        pointCLoudPathToolButton->setObjectName(QStringLiteral("pointCLoudPathToolButton"));

        horizontalLayout_7->addWidget(pointCLoudPathToolButton);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        cameraParameterLabel = new QLabel(groupBox);
        cameraParameterLabel->setObjectName(QStringLiteral("cameraParameterLabel"));

        horizontalLayout_6->addWidget(cameraParameterLabel);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_6->addWidget(lineEdit_2);

        cameraParameterstoolButton = new QToolButton(groupBox);
        cameraParameterstoolButton->setObjectName(QStringLiteral("cameraParameterstoolButton"));

        horizontalLayout_6->addWidget(cameraParameterstoolButton);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        imageUndistortionCheckBox = new QCheckBox(groupBox);
        imageUndistortionCheckBox->setObjectName(QStringLiteral("imageUndistortionCheckBox"));

        horizontalLayout_8->addWidget(imageUndistortionCheckBox);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        maxImageNumLabel = new QLabel(groupBox);
        maxImageNumLabel->setObjectName(QStringLiteral("maxImageNumLabel"));

        horizontalLayout_5->addWidget(maxImageNumLabel);

        maxImageNumLineEdit = new QLineEdit(groupBox);
        maxImageNumLineEdit->setObjectName(QStringLiteral("maxImageNumLineEdit"));

        horizontalLayout_5->addWidget(maxImageNumLineEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        reconstructionResolutionLabel = new QLabel(groupBox);
        reconstructionResolutionLabel->setObjectName(QStringLiteral("reconstructionResolutionLabel"));

        horizontalLayout_4->addWidget(reconstructionResolutionLabel);

        reconstructionResolutionComboBox = new QComboBox(groupBox);
        reconstructionResolutionComboBox->setObjectName(QStringLiteral("reconstructionResolutionComboBox"));

        horizontalLayout_4->addWidget(reconstructionResolutionComboBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        GPUNumLabel = new QLabel(groupBox);
        GPUNumLabel->setObjectName(QStringLiteral("GPUNumLabel"));

        horizontalLayout_3->addWidget(GPUNumLabel);

        GPUNumLineEdit = new QLineEdit(groupBox);
        GPUNumLineEdit->setObjectName(QStringLiteral("GPUNumLineEdit"));

        horizontalLayout_3->addWidget(GPUNumLineEdit);

        useGPUCheckBox = new QCheckBox(groupBox);
        useGPUCheckBox->setObjectName(QStringLiteral("useGPUCheckBox"));

        horizontalLayout_3->addWidget(useGPUCheckBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        outputPathLabel = new QLabel(groupBox);
        outputPathLabel->setObjectName(QStringLiteral("outputPathLabel"));

        horizontalLayout_2->addWidget(outputPathLabel);

        outputPathLineEdit = new QLineEdit(groupBox);
        outputPathLineEdit->setObjectName(QStringLiteral("outputPathLineEdit"));

        horizontalLayout_2->addWidget(outputPathLineEdit);

        outputPathToolButton = new QToolButton(groupBox);
        outputPathToolButton->setObjectName(QStringLiteral("outputPathToolButton"));

        horizontalLayout_2->addWidget(outputPathToolButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cancelPushButton = new QPushButton(groupBox);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout->addWidget(cancelPushButton);

        runPushButton = new QPushButton(groupBox);
        runPushButton->setObjectName(QStringLiteral("runPushButton"));

        horizontalLayout->addWidget(runPushButton);


        verticalLayout->addLayout(horizontalLayout);

        pointCLoudPathLabel->raise();
        cameraParameterLabel->raise();
        maxImageNumLabel->raise();
        reconstructionResolutionLabel->raise();
        GPUNumLabel->raise();
        outputPathLabel->raise();
        pointCLoudPathLineEdit->raise();
        pointCLoudPathToolButton->raise();
        lineEdit_2->raise();
        cameraParameterstoolButton->raise();
        imageUndistortionCheckBox->raise();
        maxImageNumLineEdit->raise();
        reconstructionResolutionComboBox->raise();
        GPUNumLineEdit->raise();
        useGPUCheckBox->raise();
        outputPathLineEdit->raise();
        outputPathToolButton->raise();
        outputPathLineEdit->raise();
        cancelPushButton->raise();
        runPushButton->raise();

        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(DenseReconstruction);

        QMetaObject::connectSlotsByName(DenseReconstruction);
    } // setupUi

    void retranslateUi(QWidget *DenseReconstruction)
    {
        DenseReconstruction->setWindowTitle(QApplication::translate("DenseReconstruction", "Form", 0));
        groupBox->setTitle(QApplication::translate("DenseReconstruction", " \347\250\240\345\257\206\351\207\215\345\273\272", 0));
        pointCLoudPathLabel->setText(QApplication::translate("DenseReconstruction", "\347\202\271\344\272\221\350\267\257\345\276\204", 0));
        pointCLoudPathToolButton->setText(QApplication::translate("DenseReconstruction", "...", 0));
        cameraParameterLabel->setText(QApplication::translate("DenseReconstruction", "\347\233\270\346\234\272\345\217\202\346\225\260", 0));
        cameraParameterstoolButton->setText(QApplication::translate("DenseReconstruction", "...", 0));
        imageUndistortionCheckBox->setText(QApplication::translate("DenseReconstruction", "\345\233\276\345\203\217\345\216\273\347\225\270\345\217\230", 0));
        maxImageNumLabel->setText(QApplication::translate("DenseReconstruction", "\346\234\200\345\244\247\345\233\276\345\203\217\346\225\260\351\207\217", 0));
        reconstructionResolutionLabel->setText(QApplication::translate("DenseReconstruction", "\351\207\215\345\273\272\345\210\206\350\276\250\347\216\207", 0));
        reconstructionResolutionComboBox->clear();
        reconstructionResolutionComboBox->insertItems(0, QStringList()
         << QApplication::translate("DenseReconstruction", "\345\216\237\345\233\276", 0)
         << QApplication::translate("DenseReconstruction", "1/2", 0)
         << QApplication::translate("DenseReconstruction", "1/4", 0)
        );
        GPUNumLabel->setText(QApplication::translate("DenseReconstruction", "GPU\346\225\260\351\207\217", 0));
        useGPUCheckBox->setText(QApplication::translate("DenseReconstruction", "\344\275\277\347\224\250GPU", 0));
        outputPathLabel->setText(QApplication::translate("DenseReconstruction", "\350\276\223\345\207\272\350\267\257\345\276\204", 0));
        outputPathToolButton->setText(QApplication::translate("DenseReconstruction", "...", 0));
        cancelPushButton->setText(QApplication::translate("DenseReconstruction", "\345\217\226\346\266\210", 0));
        runPushButton->setText(QApplication::translate("DenseReconstruction", "\350\277\220\350\241\214", 0));
    } // retranslateUi

};

namespace Ui {
    class DenseReconstruction: public Ui_DenseReconstruction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DENSERECONSTRUCTION_H
