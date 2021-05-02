#ifndef TictactoeBegin_h
#define TictactoeBegin_h

#include<iostream>
using namespace std;

class TictactoeBegin {

private:
	char *array;
	int loop = 0, space = 0;

public:
	TictactoeBegin();
	void print();
	void choiceLayingDownPieces();
};
#endif

