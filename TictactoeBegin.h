#ifndef TictactoeBegin_h
#define TictactoeBegin_h

#include "PlayerInitialization.h"
#include<iostream>
#include<string>
using namespace std;

class TictactoeBegin {

private:
	char *array;
	static int peace;
	int space = 0, loop = 0;
	string offensive, defensive;
	PlayerInitialization gameInitialization;

public:
	TictactoeBegin();
	void print();
	void choiceLayingDownPieces();
	bool Gameover();
};
#endif
