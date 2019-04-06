// New_Project.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include"baseObject.h"
#include"StaticObject.h"
#include "GameManager.h"


using namespace std;

int main()
{

	GameManager Gm;
	Gm.createLevel();

}

