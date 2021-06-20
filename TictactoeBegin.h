#ifndef TictactoeBegin_h
#define TictactoeBegin_h

#include "PlayerInitialization.h"
#include<string>
using namespace std;

class TictactoeBegin : public PlayerInitialization{

private:
	char *arr;										//將九宮格的值存入此陣列中
	bool peace = true;								//此變數功能為：判斷遊戲是否為平局，值為0表示平局、值為1表示已分出勝負
	int space = 0;									//space 功能為：紀錄使用者輸入的下棋位子
	string offensive, defensive;					//offensive 功能為：紀錄進攻方的玩家名稱      offensive 功能為：紀錄防守方的玩家名稱

public:
	TictactoeBegin();								//建構子
	void setOffensive();							//此函式功能為：將進攻者的姓名設置給變數 offensive
	string getOffensive() const;					//此函式功能為：回傳進攻方的姓名
	void setDefensive();							//此函式功能為：將防守者的姓名設置給變數 defensive
	string getDefensive() const;					//此函式功能為：回傳防守方的姓名
	void setSpace( int );							//此函式功能為：設置玩家選擇的落子位置
	int getSpace() const;							//此函式功能為：回傳玩家所選擇的九宮格位置
	bool isSpaceFull();								//此函式功能為：判斷此格是否已有其他棋子
	void print();									//此函式功能為：匯出九宮格
	void PutDown(char);								//此函式功能為：將玩家輸入的落子位子與對應到的棋子，紀錄至陣列中
	bool isGameover();								//此函式功能為：判斷勝負
	bool isPeace();									//此函式功能為：回傳是否為平局
};
#endif
