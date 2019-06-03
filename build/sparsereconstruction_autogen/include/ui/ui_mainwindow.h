/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *CUDAAction;
    QAction *threadNumAction;
    QAction *maxImageNumAction;
    QAction *GCPaction;
    QAction *inertialAction;
    QAction *featureMatchingAction;
    QAction *featureExtractionAction;
    QAction *imageRegisterAction;
    QAction *imageMenderAction;
    QAction *cityAction;
    QAction *hillAction;
    QAction *handicraftAction;
    QAction *indoorAction;
    QAction *sparseReconstructionAction;
    QAction *denseReconstructionAction;
    QAction *newProjectAction;
    QAction *openProjectAction;
    QAction *meshAction;
    QAction *textureAction;
    QAction *autoReconstructionAction;
    QAction *pointCloudGenerateAction;
    QAction *meshGenerateAction;
    QAction *textureGenerateAction;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QOpenGLWidget *openGLWidget;
    QMenuBar *menuBar;
    QMenu *configMenu;
    QMenu *stitchMenu;
    QMenu *selectSceneMenu;
    QMenu *reconstructionMenu;
    QMenu *editModeMenu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1006, 610);
        CUDAAction = new QAction(MainWindow);
        CUDAAction->setObjectName(QStringLiteral("CUDAAction"));
        threadNumAction = new QAction(MainWindow);
        threadNumAction->setObjectName(QStringLiteral("threadNumAction"));
        maxImageNumAction = new QAction(MainWindow);
        maxImageNumAction->setObjectName(QStringLiteral("maxImageNumAction"));
        GCPaction = new QAction(MainWindow);
        GCPaction->setObjectName(QStringLiteral("GCPaction"));
        inertialAction = new QAction(MainWindow);
        inertialAction->setObjectName(QStringLiteral("inertialAction"));
        featureMatchingAction = new QAction(MainWindow);
        featureMatchingAction->setObjectName(QStringLiteral("featureMatchingAction"));
        featureExtractionAction = new QAction(MainWindow);
        featureExtractionAction->setObjectName(QStringLiteral("featureExtractionAction"));
        imageRegisterAction = new QAction(MainWindow);
        imageRegisterAction->setObjectName(QStringLiteral("imageRegisterAction"));
        imageMenderAction = new QAction(MainWindow);
        imageMenderAction->setObjectName(QStringLiteral("imageMenderAction"));
        cityAction = new QAction(MainWindow);
        cityAction->setObjectName(QStringLiteral("cityAction"));
        hillAction = new QAction(MainWindow);
        hillAction->setObjectName(QStringLiteral("hillAction"));
        handicraftAction = new QAction(MainWindow);
        handicraftAction->setObjectName(QStringLiteral("handicraftAction"));
        indoorAction = new QAction(MainWindow);
        indoorAction->setObjectName(QStringLiteral("indoorAction"));
        sparseReconstructionAction = new QAction(MainWindow);
        sparseReconstructionAction->setObjectName(QStringLiteral("sparseReconstructionAction"));
        denseReconstructionAction = new QAction(MainWindow);
        denseReconstructionAction->setObjectName(QStringLiteral("denseReconstructionAction"));
        newProjectAction = new QAction(MainWindow);
        newProjectAction->setObjectName(QStringLiteral("newProjectAction"));
        openProjectAction = new QAction(MainWindow);
        openProjectAction->setObjectName(QStringLiteral("openProjectAction"));
        meshAction = new QAction(MainWindow);
        meshAction->setObjectName(QStringLiteral("meshAction"));
        textureAction = new QAction(MainWindow);
        textureAction->setObjectName(QStringLiteral("textureAction"));
        autoReconstructionAction = new QAction(MainWindow);
        autoReconstructionAction->setObjectName(QStringLiteral("autoReconstructionAction"));
        pointCloudGenerateAction = new QAction(MainWindow);
        pointCloudGenerateAction->setObjectName(QStringLiteral("pointCloudGenerateAction"));
        meshGenerateAction = new QAction(MainWindow);
        meshGenerateAction->setObjectName(QStringLiteral("meshGenerateAction"));
        textureGenerateAction = new QAction(MainWindow);
        textureGenerateAction->setObjectName(QStringLiteral("textureGenerateAction"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        openGLWidget = new QOpenGLWidget(centralWidget);
        openGLWidget->setObjectName(QStringLiteral("openGLWidget"));

        gridLayout->addWidget(openGLWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1006, 23));
        configMenu = new QMenu(menuBar);
        configMenu->setObjectName(QStringLiteral("configMenu"));
        stitchMenu = new QMenu(menuBar);
        stitchMenu->setObjectName(QStringLiteral("stitchMenu"));
        selectSceneMenu = new QMenu(menuBar);
        selectSceneMenu->setObjectName(QStringLiteral("selectSceneMenu"));
        reconstructionMenu = new QMenu(menuBar);
        reconstructionMenu->setObjectName(QStringLiteral("reconstructionMenu"));
        editModeMenu = new QMenu(menuBar);
        editModeMenu->setObjectName(QStringLiteral("editModeMenu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::LeftToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(configMenu->menuAction());
        menuBar->addAction(stitchMenu->menuAction());
        menuBar->addAction(selectSceneMenu->menuAction());
        menuBar->addAction(reconstructionMenu->menuAction());
        menuBar->addAction(editModeMenu->menuAction());
        configMenu->addAction(CUDAAction);
        configMenu->addAction(threadNumAction);
        configMenu->addAction(maxImageNumAction);
        configMenu->addAction(GCPaction);
        configMenu->addAction(inertialAction);
        stitchMenu->addAction(featureExtractionAction);
        stitchMenu->addAction(featureMatchingAction);
        stitchMenu->addAction(imageRegisterAction);
        stitchMenu->addAction(imageMenderAction);
        selectSceneMenu->addAction(cityAction);
        selectSceneMenu->addAction(hillAction);
        selectSceneMenu->addAction(indoorAction);
        selectSceneMenu->addAction(handicraftAction);
        reconstructionMenu->addAction(sparseReconstructionAction);
        reconstructionMenu->addAction(denseReconstructionAction);
        reconstructionMenu->addAction(meshAction);
        reconstructionMenu->addAction(textureAction);
        mainToolBar->addAction(newProjectAction);
        mainToolBar->addAction(openProjectAction);
        mainToolBar->addAction(autoReconstructionAction);
        mainToolBar->addAction(pointCloudGenerateAction);
        mainToolBar->addAction(meshGenerateAction);
        mainToolBar->addAction(textureGenerateAction);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        CUDAAction->setText(QApplication::translate("MainWindow", "CUDA", 0));
        threadNumAction->setText(QApplication::translate("MainWindow", "\347\272\277\347\250\213\346\225\260", 0));
        maxImageNumAction->setText(QApplication::translate("MainWindow", "\346\234\200\345\244\247\345\233\276\345\203\217\346\225\260\351\207\217", 0));
        GCPaction->setText(QApplication::translate("MainWindow", "GCP", 0));
        inertialAction->setText(QApplication::translate("MainWindow", "\346\203\257\345\257\274", 0));
        featureMatchingAction->setText(QApplication::translate("MainWindow", "\347\211\271\345\276\201\345\214\271\351\205\215", 0));
        featureExtractionAction->setText(QApplication::translate("MainWindow", "\347\211\271\345\276\201\346\217\220\345\217\226", 0));
        imageRegisterAction->setText(QApplication::translate("MainWindow", "\345\233\276\345\203\217\351\205\215\345\207\206", 0));
        imageMenderAction->setText(QApplication::translate("MainWindow", "\345\233\276\345\203\217\350\236\215\345\220\210", 0));
        cityAction->setText(QApplication::translate("MainWindow", "\345\237\216\345\270\202", 0));
        hillAction->setText(QApplication::translate("MainWindow", "\345\261\261\345\234\260", 0));
        handicraftAction->setText(QApplication::translate("MainWindow", "\345\267\245\350\211\272\345\223\201", 0));
        indoorAction->setText(QApplication::translate("MainWindow", "\345\256\244\345\206\205", 0));
        sparseReconstructionAction->setText(QApplication::translate("MainWindow", "\347\250\200\347\226\217\351\207\215\345\273\272", 0));
        denseReconstructionAction->setText(QApplication::translate("MainWindow", "\347\250\240\345\257\206\351\207\215\345\273\272", 0));
        newProjectAction->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\351\241\271\347\233\256", 0));
        openProjectAction->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\351\241\271\347\233\256", 0));
        meshAction->setText(QApplication::translate("MainWindow", "\347\275\221\346\240\274", 0));
        textureAction->setText(QApplication::translate("MainWindow", "\347\272\271\347\220\206", 0));
        autoReconstructionAction->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\351\207\215\345\273\272", 0));
        pointCloudGenerateAction->setText(QApplication::translate("MainWindow", "\347\202\271\344\272\221\347\224\237\346\210\220", 0));
        meshGenerateAction->setText(QApplication::translate("MainWindow", "\347\275\221\346\240\274\347\224\237\346\210\220", 0));
        textureGenerateAction->setText(QApplication::translate("MainWindow", "\350\264\264\345\233\276\347\224\237\346\210\220", 0));
        configMenu->setTitle(QApplication::translate("MainWindow", "\351\205\215\347\275\256\351\200\211\351\241\271", 0));
        stitchMenu->setTitle(QApplication::translate("MainWindow", "\345\233\276\345\203\217\346\213\274\346\216\245", 0));
        selectSceneMenu->setTitle(QApplication::translate("MainWindow", "\345\234\272\346\231\257\351\200\211\346\213\251", 0));
        reconstructionMenu->setTitle(QApplication::translate("MainWindow", "\344\270\211\347\273\264\351\207\215\345\273\272", 0));
        editModeMenu->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221\346\250\241\345\274\217", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
