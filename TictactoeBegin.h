#ifndef TictactoeBegin_h
#define TictactoeBegin_h

#include "PlayerInitialization.h"
#include<iostream>
#include<string>
using namespace std;

class TictactoeBegin {

private:
	char *array;
	int loop = 0, space = 0, peace = 0;
	string offensive, defensive;
	PlayerInitialization gameInitialization;

public:
	TictactoeBegin();
	void print();
	void choiceLayingDownPieces();
};
#endif
