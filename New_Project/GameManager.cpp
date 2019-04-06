#include "pch.h"
#include "GameManager.h"
#include<fstream>
#include<iostream>
#include"Wall.h"
#include"Floor.h"
#include<string>

using namespace std;


GameManager::GameManager()
{
}

string GameManager::checkStage()
{
	string path;
	if (level == 1)
		path = "Matrix.txt";
	else if (level == 2)
		path = "Matrix2.txt";
	else if (level == 3)
		path = "Matrix3.txt";
	else if (level == 4)
		path = "Matrix3.txt";
	return path;

}
baseObject Lab[24][24];

void GameManager::readFile()
{
	
	int rows = 24; int cols = 24;
	//Заполнение матрицы значениями из файла

	string path = checkStage();
	ifstream fin;
	fin.open(path);
	if (!fin.is_open())
	{
		 cout << "Error! File was not opened" << endl;
	}
	else {

		for (int i = 0; i < rows; i++)
			for (int j = 0; j < cols; j++)
				fin >> Arr[i][j];

	}
	fin.close();
}

void GameManager::printLab()
{
	
	for (int x = 0; x < 24; x++) //переключение по строкам
	{
		for (int y = 0; y < 24; y++)// переключение по столбцам
		{
			if (Arr[x][y] == 1)
				Lab[x][y] = Wall();
			else
				Lab[x][y] = Floor();

		}
		cout << endl;



	}



}




void GameManager::createLevel()
{
	readFile();
	printLab();
}


GameManager::~GameManager()
{
}
