#ifndef TictactoeBegin_h
#define TictactoeBegin_h

#include "PlayerInitialization.h"
#include<iostream>
#include<string>
using namespace std;

class TictactoeBegin {

private:
	char *array;									//將九宮格的值存入此變數中
	static bool peace;								//此變數功能為：判斷遊戲是否為平局，值為0表示平局、值為1表示已分出勝負
	int space = 0, loop = 0;						//space 功能為：紀錄使用者輸入的下棋位子	  loop 功能為：判斷目前由哪位玩家落子
	string offensive, defensive;					//offensive 功能為：紀錄進攻方的玩家名稱      offensive 功能為：紀錄防守方的玩家名稱
	PlayerInitialization gameInitialization;		//gameInitialization 功能為：呼叫 PlayerInitialization類別，用以讀取當中的玩家資料

public:
	TictactoeBegin();								//建構子
	void print();									//此函式功能為：匯出九宮格
	void choiceLayingDownPieces();					//此函式功能為：玩家選擇落子位置
	bool Gameover();								//此函式功能為：判斷勝負
};
#endif
