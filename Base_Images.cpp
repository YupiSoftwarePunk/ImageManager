#include "Base_Images.hpp"


Base_Images::Base_Images(std::string file_path)
{
	for (int i = 0; i < storage_.size(); i++)
	{
		map_[storage_[i]] = new ASCII_Image(storage_[i]);
	}
}



Base_Images Base_Images::BaseClone()
{
	return *this;
}

void Base_Images::Print()
{
	for (const auto& image : map_)
	{
		std::cout << image.first << "\n";image.second->Print();
	}

	/*for (const ASCII_Image* i : map_)
	{

	}*/


	// нужно дописать запись аски изображений в мапу и её вывод
	map_.insert(std::make_pair(name, ASCII_Image));
}
