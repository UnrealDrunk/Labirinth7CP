#include "pch.h"
#include "Vector2.h"


Vector2::Vector2()
{
	x = 0;
	y = 0;
}

Vector2::Vector2(int new_x, int new_y)
{
	x = new_x;
	y = new_y;

}


Vector2 operator+(Vector2 v1, Vector2 v2)
{
	return Vector2(v1.x + v2.x, v1.y + v2.y);
}


const bool operator == (const Vector2 v1, const Vector2 v2)
{
	if ((v1.x == v2.x) && (v1.x == v2.y))
	{
		return true;
	}

	else
	{
		return false;
	}

}
