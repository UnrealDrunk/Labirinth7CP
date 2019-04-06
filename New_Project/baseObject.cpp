#include "pch.h"
#include "baseObject.h"
#include <iostream>



baseObject::baseObject()
{
}

baseObject::baseObject(int step)
{
	id = step;
	std::cout << "Created baseObject " << id << std::endl;
}

baseObject::baseObject(Vector2 coord_new)
{
	coord = coord_new;
}


void baseObject::Draw(char c)
{
	HANDLE hstd = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD crd = { coord.x, coord.y };

	SetConsoleCursorPosition(hstd, crd);
	std::cout << c;
}
