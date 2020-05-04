#include <iostream>
#include <string>
#include "Array.hpp"

int main(void)
{
	srand(time(NULL));
	Array<int> int_arr(3);

	for (size_t i = 0; i < int_arr.size(); i++)
	{
		int_arr[i] = i;
		std::cout << int_arr[i];
	}
	std::cout << std::endl;

	Array<float> float_arr(3);
	for (size_t i = 0; i < float_arr.size(); i++)
	{
		float_arr[i] = static_cast<float>(i);
		std::cout << float_arr[i];
	}
	std::cout << std::endl;

	static std::string charchar = "abcdefghijklmopqrstuvxyz" \
		"ABCDEFGHIJKLMOPQRSTUVXYZ";
	Array<std::string> s(5);
	for (size_t i = 0; i < s.size(); i++)
	{
		s[i] = charchar[rand() % s.size()];
		std::cout << s[i];
	}
	std::cout << std::endl;

	try
	{
		int_arr[18] = 2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	Array<int> empty;
	std::cout << empty.size() << std::endl;
	return (0);
}
