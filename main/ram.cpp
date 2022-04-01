#include <iostream>
#include "kbd.h"
#include "gpu.h"

int t[8] = {1,1,1,1,1,1,1,1};

void read()
{
	display(t);
}

void write()
{
	input(t);
}