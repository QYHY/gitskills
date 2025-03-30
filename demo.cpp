#include<iostream>
#include<opencv2\opencv.hpp>
#include<opencv2\features2d.hpp>

using namespace std;
using namespace cv;

int main()
{
	//auto detector = SIFT::create();
	Ptr<FeatureDetector> sift = cv::SIFT::create();
	//FeatureDetector sift = cv::SIFT::create();
	system("pause");
	return 0;
}