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
		std::cout << image.first << "\n"; image.second->Print();
	}


	// ����� �������� ����� ���� �����������
	
	if (map_.empty())
	{
		std::cout << "Map ������\n";
		::exit(-1);
	}

	for (const auto& [filename, image_ptr] : map_)
	{
		std::cout << "Filename: " << filename << "\n";

		if (image_ptr) 
		{
			image_ptr->Printt();
		}
		else
		{
			std::cout << "Invalid image pointer\n";
		}

		std::cout << "\n"; 
	}
}
