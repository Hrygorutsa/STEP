#pragma once
//#include <iostream>
//#include <ctime>
//using namespace std;

void startGame(char arr[][3]);
void print(char arr[][3]);
void convertPosition(int position);
void player(char arr[][3], char symbol);
void bot(char arr[][3], char symbol);
char checkWinner(char arr[][3]);
bool intelect(char arr[][3], char s,bool flag);
