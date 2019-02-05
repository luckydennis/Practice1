// isUnique.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#define UNIQ_CHAR 128;

bool isUnique(std::string const& str)
{
	if (str.length() > 128)
		return false;
	bool set_char[128] = { false };
	for (int i = 0; i < str.length(); i++)
	{
		int val = str[i];

		if (set_char[val])
			return false;
		else
			set_char[val] = true;
		
	}
	return true;
}
int main()
{
    std::cout << "isUnique?\n"; 
	std::cout << isUnique("Denis");
	std::cin.get();
}

