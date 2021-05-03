#include "Background.h"
#include "PlayerInitialization.h"
#include "TictactoeBegin.h"

#include<iostream>
using namespace std;

int main() {
	Background gameBackground;
	
	gameBackground.print();
	

	TictactoeBegin gameStart;
	gameStart.choiceLayingDownPieces();

}