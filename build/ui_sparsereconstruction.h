/********************************************************************************
** Form generated from reading UI file 'sparsereconstruction.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPARSERECONSTRUCTION_H
#define UI_SPARSERECONSTRUCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SparseReconstruction
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *sparseReconstructionGroupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *cameraModelLabel;
    QComboBox *cameraModelcomboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *intrinsicsLabel;
    QLineEdit *intrinsicsLineEdit;
    QToolButton *intrinsicsToolButton;
    QCheckBox *intrinsicsSharedCheckBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *fileTypeLabel;
    QComboBox *fileTypeComboBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *reconstructionTypeLabel;
    QComboBox *reconstructionTypeComboBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *useGPULabel;
    QCheckBox *isGPUActivateCheckBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *GPUNumLabel;
    QSpinBox *GPUNumSpinBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *outputPathLabel;
    QLineEdit *outputPathlineEdit;
    QToolButton *outPathToolButton;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *cancelPushButton;
    QPushButton *runPushButton;

    void setupUi(QWidget *SparseReconstruction)
    {
        if (SparseReconstruction->objectName().isEmpty())
            SparseReconstruction->setObjectName(QStringLiteral("SparseReconstruction"));
        SparseReconstruction->resize(260, 395);
        verticalLayout = new QVBoxLayout(SparseReconstruction);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        sparseReconstructionGroupBox = new QGroupBox(SparseReconstruction);
        sparseReconstructionGroupBox->setObjectName(QStringLiteral("sparseReconstructionGroupBox"));
        verticalLayout_2 = new QVBoxLayout(sparseReconstructionGroupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cameraModelLabel = new QLabel(sparseReconstructionGroupBox);
        cameraModelLabel->setObjectName(QStringLiteral("cameraModelLabel"));

        horizontalLayout->addWidget(cameraModelLabel);

        cameraModelcomboBox = new QComboBox(sparseReconstructionGroupBox);
        cameraModelcomboBox->setObjectName(QStringLiteral("cameraModelcomboBox"));

        horizontalLayout->addWidget(cameraModelcomboBox);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        intrinsicsLabel = new QLabel(sparseReconstructionGroupBox);
        intrinsicsLabel->setObjectName(QStringLiteral("intrinsicsLabel"));

        horizontalLayout_2->addWidget(intrinsicsLabel);

        intrinsicsLineEdit = new QLineEdit(sparseReconstructionGroupBox);
        intrinsicsLineEdit->setObjectName(QStringLiteral("intrinsicsLineEdit"));

        horizontalLayout_2->addWidget(intrinsicsLineEdit);

        intrinsicsToolButton = new QToolButton(sparseReconstructionGroupBox);
        intrinsicsToolButton->setObjectName(QStringLiteral("intrinsicsToolButton"));

        horizontalLayout_2->addWidget(intrinsicsToolButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        intrinsicsSharedCheckBox = new QCheckBox(sparseReconstructionGroupBox);
        intrinsicsSharedCheckBox->setObjectName(QStringLiteral("intrinsicsSharedCheckBox"));

        verticalLayout_2->addWidget(intrinsicsSharedCheckBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        fileTypeLabel = new QLabel(sparseReconstructionGroupBox);
        fileTypeLabel->setObjectName(QStringLiteral("fileTypeLabel"));

        horizontalLayout_3->addWidget(fileTypeLabel);

        fileTypeComboBox = new QComboBox(sparseReconstructionGroupBox);
        fileTypeComboBox->setObjectName(QStringLiteral("fileTypeComboBox"));

        horizontalLayout_3->addWidget(fileTypeComboBox);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        reconstructionTypeLabel = new QLabel(sparseReconstructionGroupBox);
        reconstructionTypeLabel->setObjectName(QStringLiteral("reconstructionTypeLabel"));

        horizontalLayout_4->addWidget(reconstructionTypeLabel);

        reconstructionTypeComboBox = new QComboBox(sparseReconstructionGroupBox);
        reconstructionTypeComboBox->setObjectName(QStringLiteral("reconstructionTypeComboBox"));

        horizontalLayout_4->addWidget(reconstructionTypeComboBox);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        useGPULabel = new QLabel(sparseReconstructionGroupBox);
        useGPULabel->setObjectName(QStringLiteral("useGPULabel"));

        horizontalLayout_5->addWidget(useGPULabel);

        isGPUActivateCheckBox = new QCheckBox(sparseReconstructionGroupBox);
        isGPUActivateCheckBox->setObjectName(QStringLiteral("isGPUActivateCheckBox"));

        horizontalLayout_5->addWidget(isGPUActivateCheckBox);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        GPUNumLabel = new QLabel(sparseReconstructionGroupBox);
        GPUNumLabel->setObjectName(QStringLiteral("GPUNumLabel"));

        horizontalLayout_6->addWidget(GPUNumLabel);

        GPUNumSpinBox = new QSpinBox(sparseReconstructionGroupBox);
        GPUNumSpinBox->setObjectName(QStringLiteral("GPUNumSpinBox"));

        horizontalLayout_6->addWidget(GPUNumSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        outputPathLabel = new QLabel(sparseReconstructionGroupBox);
        outputPathLabel->setObjectName(QStringLiteral("outputPathLabel"));

        horizontalLayout_7->addWidget(outputPathLabel);

        outputPathlineEdit = new QLineEdit(sparseReconstructionGroupBox);
        outputPathlineEdit->setObjectName(QStringLiteral("outputPathlineEdit"));

        horizontalLayout_7->addWidget(outputPathlineEdit);

        outPathToolButton = new QToolButton(sparseReconstructionGroupBox);
        outPathToolButton->setObjectName(QStringLiteral("outPathToolButton"));

        horizontalLayout_7->addWidget(outPathToolButton);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        cancelPushButton = new QPushButton(sparseReconstructionGroupBox);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout_8->addWidget(cancelPushButton);

        runPushButton = new QPushButton(sparseReconstructionGroupBox);
        runPushButton->setObjectName(QStringLiteral("runPushButton"));

        horizontalLayout_8->addWidget(runPushButton);


        verticalLayout_2->addLayout(horizontalLayout_8);


        verticalLayout->addWidget(sparseReconstructionGroupBox);


        retranslateUi(SparseReconstruction);

        QMetaObject::connectSlotsByName(SparseReconstruction);
    } // setupUi

    void retranslateUi(QWidget *SparseReconstruction)
    {
        SparseReconstruction->setWindowTitle(QApplication::translate("SparseReconstruction", "Form", 0));
        sparseReconstructionGroupBox->setTitle(QApplication::translate("SparseReconstruction", "\347\250\200\347\226\217\351\207\215\345\273\272", 0));
        cameraModelLabel->setText(QApplication::translate("SparseReconstruction", "\347\233\270\346\234\272\346\250\241\345\236\213", 0));
        cameraModelcomboBox->clear();
        cameraModelcomboBox->insertItems(0, QStringList()
         << QApplication::translate("SparseReconstruction", "\351\222\210\345\255\224\347\233\270\346\234\272\346\250\241\345\236\213", 0)
         << QApplication::translate("SparseReconstruction", "\351\261\274\347\234\274\347\233\270\346\234\272\346\250\241\345\236\213", 0)
         << QApplication::translate("SparseReconstruction", "\345\276\204\345\220\221\347\225\270\345\217\230\346\250\241\345\236\213", 0)
         << QApplication::translate("SparseReconstruction", "\345\210\207\345\220\221\347\225\270\345\217\230\346\250\241\345\236\213", 0)
        );
        intrinsicsLabel->setText(QApplication::translate("SparseReconstruction", "\345\206\205\345\217\202\346\226\207\344\273\266", 0));
        intrinsicsToolButton->setText(QApplication::translate("SparseReconstruction", "...", 0));
        intrinsicsSharedCheckBox->setText(QApplication::translate("SparseReconstruction", "\345\205\261\344\272\253\345\206\205\345\217\202", 0));
        fileTypeLabel->setText(QApplication::translate("SparseReconstruction", "\346\226\207\344\273\266\347\261\273\345\236\213", 0));
        fileTypeComboBox->clear();
        fileTypeComboBox->insertItems(0, QStringList()
         << QApplication::translate("SparseReconstruction", "\350\277\236\347\273\255\345\233\276", 0)
         << QApplication::translate("SparseReconstruction", "\346\227\240\345\272\217\345\233\276", 0)
        );
        reconstructionTypeLabel->setText(QApplication::translate("SparseReconstruction", "\351\207\215\345\273\272\346\226\271\345\274\217", 0));
        reconstructionTypeComboBox->clear();
        reconstructionTypeComboBox->insertItems(0, QStringList()
         << QApplication::translate("SparseReconstruction", "\345\242\236\351\207\217\345\274\217", 0)
         << QApplication::translate("SparseReconstruction", "\346\211\271\351\207\217\345\274\217", 0)
        );
        useGPULabel->setText(QApplication::translate("SparseReconstruction", "\344\275\277\347\224\250GPU", 0));
        isGPUActivateCheckBox->setText(QApplication::translate("SparseReconstruction", "\346\277\200\346\264\273", 0));
        GPUNumLabel->setText(QApplication::translate("SparseReconstruction", "GPU\346\225\260\351\207\217", 0));
        outputPathLabel->setText(QApplication::translate("SparseReconstruction", "\350\276\223\345\207\272\350\267\257\345\276\204", 0));
        outPathToolButton->setText(QApplication::translate("SparseReconstruction", "...", 0));
        cancelPushButton->setText(QApplication::translate("SparseReconstruction", "\345\217\226\346\266\210", 0));
        runPushButton->setText(QApplication::translate("SparseReconstruction", "\350\277\220\350\241\214", 0));
    } // retranslateUi

};

namespace Ui {
    class SparseReconstruction: public Ui_SparseReconstruction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPARSERECONSTRUCTION_H
