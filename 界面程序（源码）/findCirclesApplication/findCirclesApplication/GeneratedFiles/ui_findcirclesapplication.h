/********************************************************************************
** Form generated from reading UI file 'findcirclesapplication.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDCIRCLESAPPLICATION_H
#define UI_FINDCIRCLESAPPLICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_findCirclesApplicationClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *bthSetPath;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelTotalNum;
    QLineEdit *editTotalNum;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelImgNum;
    QLineEdit *editImgNum;
    QPushButton *btnReadImg;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *editThresholdValue;
    QPushButton *btnSetThresholdValue;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *editPixelThreshold;
    QPushButton *btnPixelThreshold;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btnToDetectSampleImgs;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *editResult;
    QLabel *labelShowResult;
    QPushButton *btnNextImg;
    QPushButton *btnExit;
    QSpacerItem *horizontalSpacer_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *ImgLabel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *findCirclesApplicationClass)
    {
        if (findCirclesApplicationClass->objectName().isEmpty())
            findCirclesApplicationClass->setObjectName(QStringLiteral("findCirclesApplicationClass"));
        findCirclesApplicationClass->resize(1367, 788);
        centralWidget = new QWidget(findCirclesApplicationClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        bthSetPath = new QPushButton(centralWidget);
        bthSetPath->setObjectName(QStringLiteral("bthSetPath"));
        bthSetPath->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(bthSetPath);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelTotalNum = new QLabel(centralWidget);
        labelTotalNum->setObjectName(QStringLiteral("labelTotalNum"));
        labelTotalNum->setMinimumSize(QSize(0, 12));
        labelTotalNum->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(labelTotalNum);

        editTotalNum = new QLineEdit(centralWidget);
        editTotalNum->setObjectName(QStringLiteral("editTotalNum"));
        editTotalNum->setMinimumSize(QSize(40, 30));
        editTotalNum->setBaseSize(QSize(25, 35));
        editTotalNum->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(editTotalNum);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelImgNum = new QLabel(centralWidget);
        labelImgNum->setObjectName(QStringLiteral("labelImgNum"));
        labelImgNum->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labelImgNum);

        editImgNum = new QLineEdit(centralWidget);
        editImgNum->setObjectName(QStringLiteral("editImgNum"));
        editImgNum->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(editImgNum);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout);

        btnReadImg = new QPushButton(centralWidget);
        btnReadImg->setObjectName(QStringLiteral("btnReadImg"));
        btnReadImg->setEnabled(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/\350\257\273\345\217\226\345\233\276\347\211\207/tupian/\350\257\273\345\217\226\345\233\276\347\211\207/pictures_55.178571428571px_1204563_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnReadImg->setIcon(icon);

        horizontalLayout_3->addWidget(btnReadImg);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        editThresholdValue = new QLineEdit(centralWidget);
        editThresholdValue->setObjectName(QStringLiteral("editThresholdValue"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(editThresholdValue->sizePolicy().hasHeightForWidth());
        editThresholdValue->setSizePolicy(sizePolicy);
        editThresholdValue->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(editThresholdValue);

        btnSetThresholdValue = new QPushButton(centralWidget);
        btnSetThresholdValue->setObjectName(QStringLiteral("btnSetThresholdValue"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnSetThresholdValue->sizePolicy().hasHeightForWidth());
        btnSetThresholdValue->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/\350\256\276\347\275\256\351\230\210\345\200\274/tupian/\350\256\276\347\275\256\351\230\210\345\200\274/electrical_threshold_48px_1169345_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSetThresholdValue->setIcon(icon1);

        verticalLayout_2->addWidget(btnSetThresholdValue);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        editPixelThreshold = new QLineEdit(centralWidget);
        editPixelThreshold->setObjectName(QStringLiteral("editPixelThreshold"));
        sizePolicy.setHeightForWidth(editPixelThreshold->sizePolicy().hasHeightForWidth());
        editPixelThreshold->setSizePolicy(sizePolicy);
        editPixelThreshold->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(editPixelThreshold);

        btnPixelThreshold = new QPushButton(centralWidget);
        btnPixelThreshold->setObjectName(QStringLiteral("btnPixelThreshold"));
        sizePolicy1.setHeightForWidth(btnPixelThreshold->sizePolicy().hasHeightForWidth());
        btnPixelThreshold->setSizePolicy(sizePolicy1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/\350\256\276\347\275\256\344\272\256\345\272\246\345\200\274/tupian/\350\256\276\347\275\256\344\272\256\345\272\246\351\230\210\345\200\274/Brightness_48px_1191655_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPixelThreshold->setIcon(icon2);

        verticalLayout_7->addWidget(btnPixelThreshold);


        horizontalLayout_3->addLayout(verticalLayout_7);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        btnToDetectSampleImgs = new QPushButton(centralWidget);
        btnToDetectSampleImgs->setObjectName(QStringLiteral("btnToDetectSampleImgs"));
        btnToDetectSampleImgs->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/\346\243\200\346\265\213\345\233\276\347\211\207/tupian/\346\243\200\346\265\213\345\233\276\347\211\207/face_detect_43.467811158798px_1195571_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnToDetectSampleImgs->setIcon(icon3);

        verticalLayout_3->addWidget(btnToDetectSampleImgs);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        editResult = new QLineEdit(centralWidget);
        editResult->setObjectName(QStringLiteral("editResult"));
        sizePolicy.setHeightForWidth(editResult->sizePolicy().hasHeightForWidth());
        editResult->setSizePolicy(sizePolicy);
        editResult->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(editResult);

        labelShowResult = new QLabel(centralWidget);
        labelShowResult->setObjectName(QStringLiteral("labelShowResult"));
        labelShowResult->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(labelShowResult);


        horizontalLayout_3->addLayout(verticalLayout_4);

        btnNextImg = new QPushButton(centralWidget);
        btnNextImg->setObjectName(QStringLiteral("btnNextImg"));
        btnNextImg->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/\344\270\213\344\270\200\345\274\240/tupian/\344\270\213\344\270\200\345\274\240/next_48px_1205821_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnNextImg->setIcon(icon4);

        horizontalLayout_3->addWidget(btnNextImg);

        btnExit = new QPushButton(centralWidget);
        btnExit->setObjectName(QStringLiteral("btnExit"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/\351\200\200\345\207\272/tupian/\351\200\200\345\207\272/system_exit_48px_540086_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnExit->setIcon(icon5);

        horizontalLayout_3->addWidget(btnExit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout_3);

        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1333, 577));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        ImgLabel = new QLabel(scrollAreaWidgetContents);
        ImgLabel->setObjectName(QStringLiteral("ImgLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ImgLabel->sizePolicy().hasHeightForWidth());
        ImgLabel->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(ImgLabel, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_5->addWidget(scrollArea);


        gridLayout_2->addLayout(verticalLayout_5, 0, 0, 1, 1);

        findCirclesApplicationClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(findCirclesApplicationClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1367, 34));
        findCirclesApplicationClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(findCirclesApplicationClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        findCirclesApplicationClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(findCirclesApplicationClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        findCirclesApplicationClass->setStatusBar(statusBar);

        retranslateUi(findCirclesApplicationClass);

        QMetaObject::connectSlotsByName(findCirclesApplicationClass);
    } // setupUi

    void retranslateUi(QMainWindow *findCirclesApplicationClass)
    {
        findCirclesApplicationClass->setWindowTitle(QApplication::translate("findCirclesApplicationClass", "findCirclesApplication", Q_NULLPTR));
        bthSetPath->setText(QApplication::translate("findCirclesApplicationClass", "\350\256\276\347\275\256\350\267\257\345\276\204", Q_NULLPTR));
        labelTotalNum->setText(QApplication::translate("findCirclesApplicationClass", "\345\233\276\347\211\207\346\200\273\346\225\260", Q_NULLPTR));
        labelImgNum->setText(QApplication::translate("findCirclesApplicationClass", "\345\233\276\347\211\207\345\272\217\345\217\267", Q_NULLPTR));
        btnReadImg->setText(QApplication::translate("findCirclesApplicationClass", "\350\257\273\345\217\226\345\233\276\347\211\207", Q_NULLPTR));
        btnSetThresholdValue->setText(QApplication::translate("findCirclesApplicationClass", "\350\256\276\347\275\256\351\230\210\345\200\274", Q_NULLPTR));
        btnPixelThreshold->setText(QApplication::translate("findCirclesApplicationClass", "\350\256\276\347\275\256\344\272\256\345\272\246\345\200\274", Q_NULLPTR));
        btnToDetectSampleImgs->setText(QApplication::translate("findCirclesApplicationClass", "\346\243\200\346\265\213\345\233\276\347\211\207", Q_NULLPTR));
        labelShowResult->setText(QApplication::translate("findCirclesApplicationClass", "\346\230\276\347\244\272\347\273\223\346\236\234", Q_NULLPTR));
        btnNextImg->setText(QApplication::translate("findCirclesApplicationClass", "\344\270\213\344\270\200\345\274\240", Q_NULLPTR));
        btnExit->setText(QApplication::translate("findCirclesApplicationClass", "\351\200\200\345\207\272", Q_NULLPTR));
        ImgLabel->setText(QApplication::translate("findCirclesApplicationClass", "\346\230\276\347\244\272\345\233\276\347\211\207", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class findCirclesApplicationClass: public Ui_findCirclesApplicationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDCIRCLESAPPLICATION_H
