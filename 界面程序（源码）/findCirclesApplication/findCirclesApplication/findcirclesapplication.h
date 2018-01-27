#ifndef FINDCIRCLESAPPLICATION_H
#define FINDCIRCLESAPPLICATION_H

#include <QtWidgets/QMainWindow>
#include "ui_findcirclesapplication.h"

//qt header files
#include<QDialog>
#include <QFileDialog>
#include<QString>
#include<QPixmap>

//其他头文件
#include "GBK.h"
#include <sstream>
#include "findCircles.h"

class findCirclesApplication : public QMainWindow
{
	Q_OBJECT

public:
	findCirclesApplication(QWidget *parent = 0);
	~findCirclesApplication();

private:
	Ui::findCirclesApplicationClass ui;

private slots:
//设置读取图片路径
void on_bthSetPath_clicked();
//读取当前图片
void on_btnReadImg_clicked();

//下一张图片
void on_btnNextImg_clicked();

//设置阈值
void on_btnSetThresholdValue_clicked();

//检测图片
void on_btnToDetectSampleImgs_clicked();

//设置亮度值
void on_btnPixelThreshold_clicked();

//退出
void on_btnExit_clicked();


public:
	//待检测图像名列表
	QStringList imgNameList;
	//用于存储当前显示图像的序号
	int imgNum;
	//存储当前显示图像pixmap
	QPixmap *pixmap;
    //当前图像的宽高
	int imgWidth;
	int imgHeight;
	//存储当前待检测图像的Mat
	Mat drawImg;//三通道
	Mat grayImg;//单通道图像

	//输入的阈值 二值化阈值
	int nThreshold;

	//亮度阈值 将大于此阈值的像素皆赋值为0;
	int nPixelThreshold;

	//统计小圆斑的数量
	int nLittleCircle;

};

#endif // FINDCIRCLESAPPLICATION_H
