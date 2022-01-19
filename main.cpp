#include "provided/code/tgaimage.h"
#include "line.h"

const TGAColor white = TGAColor(255, 255, 255, 255);
const TGAColor red   = TGAColor(255, 0,   0,   255);

int main(int argc, char** argv) {
	TGAImage image(100, 100, TGAImage::RGB);
	optLine(0, 50, 100, 00, image, red, diagonalDis(13, 20, 80, 40));
	//line(20, 13, 40, 80, image, red); 
	//line(80, 40, 13, 100, image, red);

	image.flip_vertically(); // i want to have the origin at the left bottom corner of the image
	image.write_tga_file("output.tga");
	return 0;
}