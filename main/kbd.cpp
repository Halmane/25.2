#include <iostream>

void input(int t[8])
{
	for (int i = 0; i < 8; i++)
	{
		std::cout << "Enter number #" << i << ":";
		std::cin >> t[i];
	}
}