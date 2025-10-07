#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main() {

	/* Basic Mat creation and initialization */
	Mat goruntu(4, 4, CV_8UC1, Scalar(150));
	cout << "Goruntu dizisinin degerleri"<< endl << goruntu << endl;
	waitKey(0);
	
	return 0;

}
