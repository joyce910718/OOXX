#ifndef TictactoeBegin_h
#define TictactoeBegin_h

#include "PlayerInitialization.h"
#include<string>
using namespace std;

class TictactoeBegin : public PlayerInitialization{

private:
	char *array;									//將九宮格的值存入此變數中
	static bool peace;								//此變數功能為：判斷遊戲是否為平局，值為0表示平局、值為1表示已分出勝負
	int space = 0, loop = 0;						//space 功能為：紀錄使用者輸入的下棋位子	  loop 功能為：判斷目前由哪位玩家落子
	string offensive, defensive;					//offensive 功能為：紀錄進攻方的玩家名稱      offensive 功能為：紀錄防守方的玩家名稱

public:
	TictactoeBegin();								//建構子
	void setOffensive();							//此函式功能為：將進攻者的姓名設置給變數 offensive
	void setDefensive();							//此函式功能為：將防守者的姓名設置給變數 defensive
	string getOffensive() const;					//此函式功能為：回傳進攻方的姓名
	string getDefensive() const;					//此函式功能為：回傳防守方的姓名
	bool isSpaceFull();								//此函式功能為：判斷此格是否已有其他棋子
	void print();									//此函式功能為：匯出九宮格
	void choiceLayingDownPieces();					//此函式功能為：玩家選擇落子位置
	bool Gameover();								//此函式功能為：判斷勝負
};
#endif
