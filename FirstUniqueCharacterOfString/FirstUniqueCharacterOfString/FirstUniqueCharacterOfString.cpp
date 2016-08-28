// FirstUniqueCharacterOfString.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"FirstUniqueCharacterOfString.h"

int main()
{
	std::string str;
	std::cin >> str;
	FirstUniqueCharOfString FUCS;
	int index = FUCS.firstUniqChar(str);
	if (index == -1)
		std::cout << "None Unique Char" << '\n';
	else std::cout << "Unique Char Is " << str[index] << '\n';
	exit(0);
    return 0;
}

