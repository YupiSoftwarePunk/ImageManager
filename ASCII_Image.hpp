#pragma once

#include <iostream>
#include <fstream>
#include <string>

class ASCII_Image
{
public:

	// constructors
	ASCII_Image() : ASCII_Image("") {}
	ASCII_Image(std::string file_path);

	// destructor
	virtual ~ASCII_Image() {}


	// methods
	ASCII_Image Clone();
	void Print();

	void Printt();

private:
	std::string image_;
};

