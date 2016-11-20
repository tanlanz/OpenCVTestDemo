//#include <opencv2\opencv.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include<opencv2/highgui/highgui.hpp>
using namespace cv;

int main() {

	/*Mat img = imread("1.jpg");
	imshow("�������ͼƬ��", img);
	waitKey(6000);*/

	/*Mat srcImage = imread("1.jpg");
	imshow("��ԭͼ����ʴ����", srcImage);

	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	Mat dstImage;

	erode(srcImage, dstImage, element);
	imshow("��Ч��ͼ����ʴ����", dstImage);
	waitKey(0);
	return 0;*/

	/*Mat srcImage = imread("1.jpg");
	imshow("��ֵ�˲���ԭͼ��", srcImage);

	Mat dstImage;
	blur(srcImage, dstImage, Size(7, 7));
	imshow("��ֵ�˲���Ч��ͼ��", dstImage);
	waitKey(0);*/

	Mat srcImage = imread("1.jpg");
	imshow("��ԭʼͼ��Canny��Ե���", srcImage);
	Mat dstImage, edge, grayImage;
	dstImage.create(srcImage.size(), srcImage.type());

	cvtColor(srcImage, grayImage, COLOR_BGR2GRAY);

	blur(grayImage, edge, Size(3, 3));
	Canny(edge, edge, 3, 9, 3);

	imshow("��Ч��ͼ��Canny��Ե���", edge);

	waitKey(0);

	return 0;
	
}