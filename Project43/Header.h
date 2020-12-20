#pragma once
#include<iostream>
#include<ctime>
#include<iomanip>
#include<Windows.h>
#include<conio.h>
#include<string>
#include<fstream>

using namespace std;

int const size1 = 24, size2 = 12,sizetemp=6;
char fig[size1][size2];
char MenuTemp[sizetemp][sizetemp];

void MakeArena();
void ShowArena(int Score, int indextemp);
void CleanBeforSwap();
void EndGame(bool &endgame);
void TETRIS();
void CleanRad(int &Score);

