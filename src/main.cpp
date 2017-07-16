#include <stdlib.h>
#include <stdio.h>

#include <opencv2/opencv.hpp>

int main(int argc, char**)
{
	printf("test call opencv\n");
	
	cv::Mat src = cv::imread("lena.jpg", 1);
	cv::imshow("src", src);
	cv::waitKey(0);

	return 0;
}


