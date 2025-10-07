#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {

    Mat img = imread("C:\\Users\\mehdi\\OneDrive\\Desktop\\ImageProcessing_Learning\\SampleOf_11_Mat\\SampleOf_11_Mat\\images\\Sample.jpg");

    if (img.empty()) {
        cout << "Resim yuklenemedi! Yolda veya OpenCv entegresin de sorun olabilir..." << endl;
        return -1;
    }

	int opt;

	cout << "Renkli formatta goruntulemek icin 1\nGri formatta goruntulemek icin 2\nRGB formatta goruntulemek icin 3\nGoruntuleme Modu: ";
	cin >> opt;

    Mat display;

    switch (opt){
        case 1:
			display = img; // Burada pointer mantýðý eðer display deðiþirse img de deðiþir. Önlemek için clone kullanýlýr.
		    break;
        case 2:
		    cvtColor(img, display, COLOR_BGR2GRAY);
            break;
        case 3:
            cvtColor(img, display, COLOR_BGR2RGB);
			break;
        default:
            cout << "Gecersiz secenek! 1, 2 veya 3 girin." << endl;
            return -1;
    }

    imshow("Goruntu", display);
    waitKey(0);
    return 0;
}
