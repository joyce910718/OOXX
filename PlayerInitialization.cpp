#include "PlayerInitialization.h"
#include<iostream>
#include<iomanip>
#include<Windows.h>  //使用Sleep( )       需引用 Windows.h 的內建功能設計
#include<cstdlib>	 //使用system( " " )  需引用 cstdlib 的函式庫
using namespace std;

PlayerInitialization::PlayerInitialization() {}

void PlayerInitialization::loading() {
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	for (int i = 0; i <= 100; i++) {

		if (i % 4 == 0)
			cout << setw(90) << "遊戲加載中   " << setw(3) << i << setw(1) << "%";
		else if (i % 4 == 1)
			cout << setw(90) << "遊戲加載中.  " << setw(3) << i << setw(1) << "%";

		else if (i % 4 == 2)
			cout << setw(90) << "遊戲加載中.. " << setw(3) << i << setw(1) << "%";

		else
			cout << setw(90) << "遊戲加載中..." << setw(3) << i << setw(1) << "%";

		Sleep(100);			//讓程式暫停執行100毫秒（相當於0.1秒）
		cout << "\r";		// "\r" 可將游標移至輸出當行的最左邊：用以覆寫執行結果
	}
}

void PlayerInitialization::setPickAMode( int pickAMode ) {
	this->pickAMode = pickAMode;
}

void PlayerInitialization::setPlayer1_Name(){
	if (pickAMode == 1) {	//單人模式
		cout << "\n\n\n" << setw(18) << "\t" << "*******************************************************************************************************************\n\n";
		cout << setw(20) << "\t" << "請玩家輸入姓名：" << endl;
		cout << setw(36) << "\t" << "玩家一遊戲名稱：";			
		getline(cin, Player1_Name,'\n');
	}

	else {					//雙人模式
		cout << "\n\n\n" << setw(18) << "\t" << "*******************************************************************************************************************\n\n";
		cout << setw(20) << "\t" << "請玩家輸入姓名：" << endl;
		cout << setw(36) << "\t" << "玩家一遊戲名稱：";			
		getline(cin, Player1_Name,'\n');
	}
}

void PlayerInitialization::setPlayer2_Name(){
	if (pickAMode == 1)
		Player2_Name = "computer";
	
	else {
		cout << setw(36) << "\t" << "玩家二遊戲名稱：";
		getline(cin, Player2_Name);
		cout << "\n" << endl;
	}
}

void PlayerInitialization::setPlayer1_Chessman(){
	cin >> Player1_Chessman;
}

void PlayerInitialization::setPlayer2_Chessman(){
	Player2_Chessman = (Player1_Chessman == "O") ? "X" : "O";	//判斷玩家2的棋子是 "X" 還是 "O"
}


string PlayerInitialization::getPlayer1_Name() const {
	return Player1_Name;
}

string PlayerInitialization::getPlayer2_Name() const {
	return Player2_Name;
}

string PlayerInitialization::getPlayer1_Chessman() const {
	return Player1_Chessman;
}

string PlayerInitialization::getPlayer2_Chessman() const {
	return Player2_Chessman;
}

int PlayerInitialization::getPickAMode() const {
	return pickAMode;
}

void PlayerInitialization::COUTmodeError() {
	cout << "\n\n\n" << setw(18) << "\t" << "*******************************************************************************************************************\n\n";
	cout << setw(20) << "\t" << "您所輸入的模式不符合遊戲規則，請重新輸入";
	Sleep(200);
}

void PlayerInitialization::COUTnameError() {
	cout << setw(18) << "\t" << "*******************************************************************************************************************\n\n";
	cout << setw(20) << "\t" << "玩家一與玩家二遊戲名稱重複，無辨識度，請重新輸入\n" << endl;
	cout << setw(20) << "\t" << "看完訊息後請按下Enter鍵";
	Sleep(200);
}

void PlayerInitialization::COUTchessmanError() {
	cout << setw(18) << "\t" << "*******************************************************************************************************************\n\n";
	cout << setw(20) << "\t" << Player1_Name << "所輸入的棋子不符合遊戲規則，請重新輸入";
	Sleep(200);
}
