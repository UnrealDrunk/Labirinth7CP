#pragma once
class Vector2
{
public:
	int x;
	int y;
	Vector2();
	Vector2(int new_x, int new_y);
	friend
		Vector2 operator + (Vector2 v1, Vector2 v2);
	friend
		Vector2 operator - (Vector2 v1, Vector2 v2);
	friend
		const bool operator == (const Vector2 v1, const Vector2 v2);
};

