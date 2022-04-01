#include <iostream>
#include "ram.h"


void computer()
{
	int sum = 0;
	for (int i = 0; i < 8; i++)
	{
		sum += t[i];
	}
	std::cout << sum << std::endl;
}