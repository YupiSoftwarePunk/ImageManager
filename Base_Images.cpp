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


	// нужно починить вывод аски изображений
	
	if (map_.empty())
	{
		std::cout << "Map пустая\n";
		::exit(-1);
	}

	for (const auto& [key, value] : map_) 
	{
		std::cout << "Key: " << key << " | Value: "
			<< (value ? "ASCII_Image@" + std::to_string(reinterpret_cast<uintptr_t>(value)) : "nullptr")
			<< "\n";
	}
}
