#include "PlayerInitialization.h"
#include<iostream>
#include<iomanip>
#include<string>
#include<Windows.h>
#include<cstdlib>
using namespace std;

PlayerInitialization::PlayerInitialization(){}

void PlayerInitialization::print_loading() {
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	for (int i = 0; i <= 100; i++) {
		if (i % 3 == 0) 
			cout << setw(90) << "遊戲加載中.  " << setw(3) << i << setw(1) << "%";

		else if (i % 3 == 1)
			cout << setw(90) << "遊戲加載中.. " << setw(3) << i << setw(1) << "%";
	
		else
			cout << setw(90) << "遊戲加載中..." << setw(3) << i << setw(1) << "%";
			
		Sleep(100);
		cout << "\r";
	}
}


void PlayerInitialization::print() {
	system("color E1");
	cout << endl;
	system("pause");
	system("cls");

	print_loading();
	system("cls");

	cout << "\n\n\n" << setw(20) << "\t" << "選擇玩法:" << endl;
	cout << setw(34) << " " << "玩法1: 單人模式 / 人機模式\n";
	cout << setw(34) << " " << "玩法2: 雙人模式\n\n\n";
	cout << setw(20) << "\t" << "請輸入玩法:" << "\n" <<  setw(36) << " " << "( 輸入數字 1 或 2 )" << "\n\n" << setw(42) << " " << "玩法 ";
	cin >> pickAMode;

	if (pickAMode == 1) {
		cout << "\n\n" << setw(20) << "\t" << "請玩家輸入姓名:" << endl;
		cout << setw(36) << "\t" << "玩家一遊戲名稱: ";
		cin.ignore();
		getline(cin, Player1_Name);
		Player2_Name = "computer";
	}

	else {
		cout << "\n\n" << setw(20) << "\t" << "請玩家輸入姓名:" << endl;
		cout << setw(36) << "\t" << "玩家一遊戲名稱: ";
		cin.ignore();
		getline(cin, Player1_Name);
		cout << setw(36) << "\t" << "玩家二遊戲名稱: ";
		getline(cin, Player2_Name);
	}

	cout << "\n\n" << setw(20) << "\t" << Player1_Name << " 請選擇棋子:" << "\n" << setw(41) << " " << "( 輸入大寫英文字母 O 或 X )" << "\n\n" << setw(50) << Player1_Name << setw(8) << " 棋子為: ";
	cin >> Player1_Chessman;
	Player2_Chessman = (Player1_Chessman == "O") ? "X" : "O";
	cout << setw(50) << Player2_Name << setw(8) << " 棋子為: " << Player2_Chessman << "\n\n\n" << endl;
}

string PlayerInitialization::getPlayer1_Chessman() const {
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
