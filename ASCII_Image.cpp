#include "ASCII_Image.hpp"


ASCII_Image::ASCII_Image(std::string path) 
{
	std::string line;
	std::ifstream in;

	in.open(path.c_str());

	if (in.is_open()) 
	{
		while (std::getline(in, line))
		{
			image_ += line + '\n';
		}
	}
	else
	{
		std::cout << "ERROR\n";
	}

	in.close();
}


// methods

ASCII_Image ASCII_Image::Clone()
{
	return *this;
}


void ASCII_Image::Print()
{
	std::cout << image_;
}
