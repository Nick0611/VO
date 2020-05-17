#include<opencv2\core.hpp>
#include<opencv2\highgui.hpp>

using namespace cv;

int main()
{
	Mat img = imread("111.jpg");
	namedWindow("noticeable");
	imshow("noticeable", img);
	waitKey(6000);
	return 0;
}