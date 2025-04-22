#pragma once
#include <iostream>
#include <string>
#include <filesystem>
#include <vector>
#include "ASCII_Image.hpp"
#include <map>

class Base_Images
{
public:
	Base_Images() : Base_Images("") {}
	Base_Images(std::string file_path);   // "./Prototype"

	Base_Images BaseClone();
	void Print();


private:

	std::vector<std::string> storage_{ "car.txt", "donkey.txt", "guitar.txt" };
	std::map<std::string, ASCII_Image*> map_;
};

