#include "findcirclesapplication.h"

findCirclesApplication::findCirclesApplication(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//初始化
	imgNum = 0;

	//小圆斑的数量 初始化为0
	nLittleCircle = 0;

	//阈值 二值化阈值 设默认值
	nThreshold = 135;
	stringstream sThreshold;
	sThreshold << nThreshold;
	ui.editThresholdValue->setText(sThreshold.str().c_str());  
	//将大于此阈值的像素皆赋值为0 设默认值
	nPixelThreshold = 160;
	stringstream sPixelThreshold;
	sPixelThreshold << nPixelThreshold;
	ui.editPixelThreshold->setText(sPixelThreshold.str().c_str());


}

findCirclesApplication::~findCirclesApplication()
{

}

void findCirclesApplication::on_bthSetPath_clicked()
{
	//设置图像的上一级目录
	QString imgPath = QFileDialog::getExistingDirectory(this, GBK::ToUnicode("设置图像打开路径"), "D:/ImgFiles/", QFileDialog::Option::ShowDirsOnly);
	QDir dir(imgPath);
	QStringList nameFilters;
	nameFilters << "*.jpg";
	dir.setNameFilters(nameFilters);
	dir.setSorting(QDir::Name);

	//获取路径中图像名列表
	imgNameList = dir.entryList();
	QString tem = imgPath;
	tem = tem + "/";
	for (int i = 0; i < imgNameList.size();i++)
	{
		imgNameList[i].prepend(tem);
	}
	std::stringstream str;
	str << imgNameList.size();
	ui.editTotalNum->setText(str.str().c_str());

	ui.btnReadImg->setEnabled(true);
}

void findCirclesApplication::on_btnReadImg_clicked()
{
	pixmap = new QPixmap(imgNameList[imgNum]);
	ui.ImgLabel ->setPixmap(*pixmap);
	imgWidth = pixmap->width();
	imgHeight = pixmap->height();

	drawImg = cv::imread(imgNameList[imgNum].toStdString(), CV_LOAD_IMAGE_COLOR);
	cvtColor(drawImg, grayImg, CV_BGR2GRAY);

	stringstream PicNum;
	int PicNumber = imgNum + 1;
	PicNum << PicNumber;
	ui.editImgNum->setText(PicNum.str().c_str());

	ui.btnNextImg->setEnabled(true);
	ui.btnToDetectSampleImgs->setEnabled(true);

}

void findCirclesApplication::on_btnNextImg_clicked()
{
	//清空显示结果的lineEdit内容
	ui.editResult->clear();

	imgNum++;
	pixmap = new QPixmap(imgNameList[imgNum]);
	ui.ImgLabel->setPixmap(*pixmap);
	imgWidth = pixmap->width();
	imgHeight = pixmap->height();

	drawImg = cv::imread(imgNameList[imgNum].toStdString(), CV_LOAD_IMAGE_COLOR);
	cvtColor(drawImg, grayImg, CV_BGR2GRAY);

	stringstream NextImg;
	int imgNumber = imgNum + 1;
	NextImg << imgNumber;
	ui.editImgNum->setText(NextImg.str().c_str());

	imgNum++;
	//判断图片是否结束
	if (imgNum==imgNameList.size())
	{
		ui.btnNextImg->setEnabled(false);
	}
	imgNum--;
}

void findCirclesApplication::on_btnSetThresholdValue_clicked()
{
	QString mString = ui.editThresholdValue->text();
	nThreshold = mString.toInt();
}

void findCirclesApplication::on_btnPixelThreshold_clicked()
{
	QString mString = ui.editPixelThreshold->text();
	nPixelThreshold = mString.toInt();
}



void findCirclesApplication::on_btnToDetectSampleImgs_clicked()
{
	//对待测图片进行备份到一个Mat中
	Mat img;
	grayImg.copyTo(img);
	//将图中较亮的部分先全部赋值为0 也就是大圆斑的地方全部重新赋值为0
	for (size_t i = 0; i < img.rows; i++)
	{
		for (size_t j = 0; j < img.cols; j++)
		{
			int value = img.at<uchar>(i, j);
			if (value>=nPixelThreshold)
			{
				img.at<uchar>(i, j) = 0;
			}
		}
	}
	//二值化 之后将稍大的像素值赋值为255 也就是小圆斑处亮的地方
	Mat img_threshold;
	threshold(img, img_threshold,nThreshold, 255, CV_THRESH_BINARY);
	//imwrite("./PicsDetected/1/img_threshold.bmp", img_threshold);

	//对新的图片进行轮廓检测
	vector<vector<cv::Point>> contoursOrigin;
	vector<cv::Vec4i> hierarchy;
	findContours(img_threshold, contoursOrigin, hierarchy, CV_RETR_LIST, CV_CHAIN_APPROX_NONE);

	if (!contoursOrigin.size())
	{
		return;
	}
	else
	{
		//如果检测出的轮廓大于1处，均判为小圆斑
		for (int i = 0; i < contoursOrigin.size(); i++)
		{
			if (contoursOrigin[i].size() >= 1&&contoursOrigin[i].size()<=5)
			{
				nLittleCircle++;
			}
			else
			{
				continue;
			}
		}
	}

	//在显示结果的lineEdit中显示检测结果

	stringstream result;
	result << nLittleCircle;
	ui.editResult->setText(result.str().c_str());

	nLittleCircle = 0;
    

}

void findCirclesApplication::on_btnExit_clicked()
{

	exit(0);

}