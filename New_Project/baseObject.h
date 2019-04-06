#pragma once
#include"Vector2.h"
#include<Windows.h>
#include<iostream>
class baseObject
{

public:
	int id;
	Vector2 coord;
	std::string name;
	baseObject();
	baseObject(int step);
	baseObject(Vector2 coord_new);
	void Draw(char c);
};

