#include "PlayerInitialization.h"
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

PlayerInitialization::PlayerInitialization(){}

void PlayerInitialization::print() {
	cout << "\n" << "選擇玩法:" << endl;
	cout << setw(10) << " " << "玩法1: 單人模式 / 人機模式" << endl;
	cout << setw(10) << " " << "玩法2: 雙人模式" << "\n" << endl;
	cout << "請輸入玩法:" << "\n" << setw(12) << " " << "( 輸入數字 1 或 2 )" << "\n\n" << setw(17) << " " << "玩法";
	cin >> pickAMode;

	if (pickAMode == 1) {
		cout << "\n" << "請玩家輸入姓名:" << endl;
		cout << setw(16) << " " << "玩家一遊戲名稱: ";
		cin.ignore();
		getline(cin, Player1_Name);
		Player2_Name = "computer";
	}

	else {
		cout << "\n" << "請玩家輸入姓名:" << endl;
		cout << setw(16) << " " << "玩家一遊戲名稱: ";
		cin.ignore();
		getline(cin, Player1_Name);
		cout << setw(16) << " " << "玩家二遊戲名稱: ";
		getline(cin, Player2_Name);
	}

	cout << "\n" << Player1_Name << " 請選擇棋子:" << "\n" << setw(14) << " " << "( 輸入大寫英文字母 O 或 X )" << "\n\n" << setw(25) << Player1_Name << setw(8) << " 棋子為: ";
	cin >> Player1_Chessman;
	Player2_Chessman = (Player1_Chessman == "O") ?  "X" : "O";
	cout << setw(25) << Player2_Name << setw(8) << " 棋子為: " << Player2_Chessman << "\n\n\n" << endl;
}

string PlayerInitialization::getPlayer1_Chessman() const{
	return Player1_Chessman;
}

string PlayerInitialization::getPlayer2_Chessman() const {
	return Player2_Chessman;
}

string PlayerInitialization::getPlayer1_Name() const {
	return Player1_Name;
}

string PlayerInitialization::getPlayer2_Name() const {
	return Player2_Name;
}
