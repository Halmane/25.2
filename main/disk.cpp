#include <fstream>
#include "ram.h"

void load()
{
	std::ifstream load("data.txt");
	for (int i = 0; i < 8; i++)
	{
		load >> t[i];
	}
}

void save()
{
	std::ofstream save("data.txt");
	for (int i = 0; i < 8; i++)
	{
		save << t[i] << " ";
	}
}