//#include <opencv2\opencv.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include<opencv2/highgui/highgui.hpp>
using namespace cv;

int main() {

	/*Mat img = imread("1.jpg");
	imshow("【载入的图片】", img);
	waitKey(6000);*/

	/*Mat srcImage = imread("1.jpg");
	imshow("【原图】腐蚀操作", srcImage);

	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	Mat dstImage;

	erode(srcImage, dstImage, element);
	imshow("【效果图】腐蚀操作", dstImage);
	waitKey(0);
	return 0;*/

	/*Mat srcImage = imread("1.jpg");
	imshow("均值滤波【原图】", srcImage);

	Mat dstImage;
	blur(srcImage, dstImage, Size(7, 7));
	imshow("均值滤波【效果图】", dstImage);
	waitKey(0);*/

	Mat srcImage = imread("1.jpg");
	imshow("【原始图】Canny边缘检测", srcImage);
	Mat dstImage, edge, grayImage;
	dstImage.create(srcImage.size(), srcImage.type());

	cvtColor(srcImage, grayImage, COLOR_BGR2GRAY);

	blur(grayImage, edge, Size(3, 3));
	Canny(edge, edge, 3, 9, 3);

	imshow("【效果图】Canny边缘检测", edge);

	waitKey(0);

	return 0;
	
}