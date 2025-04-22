#include "ASCII_Image.hpp"
#include "Base_Images.hpp"

int main()
{
	/*std::string path = "image.txt";

	ASCII_Image ascii(path);

	ASCII_Image ascii2 = ascii.Clone();

	ascii2.Print();


	std::string path2 = "car.txt";
	std::string path3 = "donkey.txt";
	std::string path4 = "guitar.txt";*/

	std::string path2 = "car.txt";
	Base_Images image1(path2);

	image1.Print();

}