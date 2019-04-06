#pragma once
#include"baseObject.h"
#include"StaticObject.h"
#include<ctime>
#include<fstream>

using namespace std;



class GameManager
{
private:
	int level = 1;
	int Arr[24][24];

public:
	GameManager();
	string checkStage();
	void readFile();
	void printLab();
	void createLevel();
	~GameManager();
};

