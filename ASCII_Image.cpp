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

void ASCII_Image::Printt()
{
	std::ifstream file(image_);

	if (!file.is_open())
	{
		std::cout << "ERROR\tCan't open file";
		return;
	}

	std::string line;
	while (std::getline(file, line))
	{
		std::cout << line << "\n";
	}

	file.close();
}
