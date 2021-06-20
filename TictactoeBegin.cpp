#include "PlayerInitialization.h"
#include "TictactoeBegin.h"
#include <iostream>
#include <iomanip>
using namespace std;

TictactoeBegin::TictactoeBegin() {					//將 array 變數的值初始化為空格字元
	arr = new char[10];

	for (int i = 1; i <= 9; i++)
		arr[i] = ' ';
}

void TictactoeBegin::print() {						//匯出九宮格
	cout << setw(50) << "\t" << "     |     |     " << endl;
	cout << setw(50) << "\t" << "  " << arr[7] << "  |  " << arr[8] << "  |  " << arr[9] << endl;
	cout << setw(50) << "\t" << "_____|_____|_____" << endl;
	cout << setw(50) << "\t" << "     |     |     " << endl;
	cout << setw(50) << "\t" << "  " << arr[4] << "  |  " << arr[5] << "  |  " << arr[6] << endl;
	cout << setw(50) << "\t" << "_____|_____|_____" << endl;
	cout << setw(50) << "\t" << "     |     |   " << endl;
	cout << setw(50) << "\t" << "  " << arr[1] << "  |  " << arr[2] << "  |  " << arr[3] << endl;
	cout << setw(50) << "\t" << "     |     |   \n\n" << endl;
}

void TictactoeBegin::setOffensive() {
	(PlayerInitialization::Player1_Chessman == "X") ? offensive = PlayerInitialization::Player1_Name : offensive = PlayerInitialization::Player2_Name;	//進攻者的玩家名稱設給 變數：offensive;
}

void TictactoeBegin::setDefensive() {
	(PlayerInitialization::Player1_Chessman == "O") ? defensive = PlayerInitialization::Player1_Name : defensive = PlayerInitialization::Player2_Name;	//防守方的玩家名稱設給 變數：defensive
}

string  TictactoeBegin::getOffensive() const {	 //此函式功能為：回傳進攻方的姓名
	return offensive;
}

string  TictactoeBegin::getDefensive() const {	 //此函式功能為：回傳防守方的姓名
	return defensive;
}

void TictactoeBegin::setSpace( int space ) {
	this->space = space;
}

int TictactoeBegin::getSpace() const {
	return space;
}

void TictactoeBegin::setArr(int index , char OX) {		//此函式功能為：將玩家輸入的下棋位子與對應到的棋子，紀錄至陣列中
	arr[index] = OX;
}

char TictactoeBegin::getArr(int index) const {
	return arr[index];
}



bool TictactoeBegin::isSpaceFull(int index) {
	return ( (getArr(index) != ' ' ) ? true : false );
}

bool TictactoeBegin::isGameover() {	//此函式功能為：判斷勝負 
	if ((arr[1] == arr[2] && arr[1] == arr[3] && arr[1] != ' ') ||
		(arr[4] == arr[5] && arr[4] == arr[6] && arr[4] != ' ') ||
		(arr[7] == arr[8] && arr[7] == arr[9] && arr[7] != ' ') ||
		(arr[1] == arr[4] && arr[1] == arr[7] && arr[1] != ' ') ||
		(arr[2] == arr[5] && arr[2] == arr[8] && arr[2] != ' ') ||
		(arr[3] == arr[6] && arr[3] == arr[9] && arr[3] != ' ') ||
		(arr[1] == arr[5] && arr[1] == arr[9] && arr[1] != ' ') ||
		(arr[3] == arr[5] && arr[3] == arr[7] && arr[3] != ' ')) {
		peace = false;
		return true;
	}
		
	else
		return false;
}

bool TictactoeBegin::isPeace() {
	return peace;
}
