// #include "opencv2/opencv.hpp"
// #include "opencv2/highgui.hpp"

#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

using namespace cv;

int main()
{
    Mat img = imread("D:\\histogram.png");
    cv::imshow("image",img);
    cv::waitKey();
    return 0;
}


