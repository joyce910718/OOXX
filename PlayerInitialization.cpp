#include "PlayerInitialization.h"
#include<iostream>
#include<iomanip>
#include<string>
#include<Windows.h>  //使用Sleep( )       需引用 Windows.h 的內建功能設計
#include<cstdlib>	 //使用system( " " )  需引用 cstdlib 的函式庫
using namespace std;

PlayerInitialization::PlayerInitialization(){}

void PlayerInitialization::print_loading() {
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

void PlayerInitialization::print() {
	system("color E1");		//設定執行後的背景色與字體色   背景色為 E：淡黃色   字體色 1 為：藍色
	cout << "\n\n";
	system("pause");		//暫停輸出以便玩家有確實觀看遊戲說明
	system("cls");			//清空視窗上的輸出資訊

	print_loading();
	system("cls");

	int i = 0;
	do {
		if (i != 0) {
			cout << "\n\n\n" << setw(18) << "\t" << "*******************************************************************************************************************\n\n";
			cout << setw(20) << "\t" << "所輸入的模式不符合遊戲規則，請重新輸入";
			Sleep(200);
		}

		cout << "\n\n\n" << setw(18) << "\t" << "*******************************************************************************************************************\n\n";
		cout << setw(20) << "\t" << "選擇模式：" << endl;
		cout << setw(34) << " " << "模式 1： 單人模式 / 人機模式\n";
		cout << setw(34) << " " << "模式 2： 雙人模式\n\n\n";
		cout << setw(20) << "\t" << "請輸入模式：" << "\n" << setw(36) << " " << "( 輸入數字 1 或 2 )" << "\n\n" << setw(42) << " " << "模式 ";
		cin >> pickAMode;

		i++;
	} while ( pickAMode != 1 && pickAMode != 2 );
	
	i = 0;
	do {
		if (i != 0) {
			cout << setw(18) << "\t" << "*******************************************************************************************************************\n\n";
			cout << setw(20) << "\t" << "玩家一與玩家二遊戲名稱重複，無辨識度，請重新輸入";
			Sleep(200);
		}

		if (pickAMode == 1) {	//單人模式
			cout << "\n\n\n" << setw(18) << "\t" << "*******************************************************************************************************************\n\n";
			cout << setw(20) << "\t" << "請玩家輸入姓名：" << endl;
			cout << setw(36) << "\t" << "玩家一遊戲名稱：";
			cin.ignore();
			getline(cin, Player1_Name);
			Player2_Name = "computer";
		}

		else {					//雙人模式
			cout << "\n\n\n" << setw(18) << "\t" << "*******************************************************************************************************************\n\n";
			cout << setw(20) << "\t" << "請玩家輸入姓名：" << endl;
			cout << setw(36) << "\t" << "玩家一遊戲名稱：";
			cin.ignore();
			getline(cin, Player1_Name);
			cout << setw(36) << "\t" << "玩家二遊戲名稱：";
			getline(cin, Player2_Name);
			cout << "\n\n";
		}

		i++;
	} while ( Player1_Name == Player2_Name );
	
	i = 0;
	do {
		if (i != 0) {
			cout << setw(18) << "\t" << "*******************************************************************************************************************\n\n";
			cout << setw(20) << "\t" << Player1_Name << "所輸入的棋子不符合遊戲規則，請重新輸入";
			Sleep(200);
		}

		cout << setw(18) << "\t" << "*******************************************************************************************************************\n\n";
		cout << setw(20) << "\t" << Player1_Name << " 請選擇棋子：" << "\n" << setw(41) << " " << "( 輸入大寫英文字母 O 或 X )" << "\n\n" << setw(50) << Player1_Name << setw(8) << " 棋子為： ";
		cin >> Player1_Chessman;
		Player2_Chessman = (Player1_Chessman == "O") ? "X" : "O";	//判斷玩家2的棋子是 "X" 還是 "O"
		cout << setw(50) << Player2_Name << setw(8) << " 棋子為： " << Player2_Chessman << "\n\n\n" << endl;

		i++;
	} while ( Player1_Chessman != "O" && Player1_Chessman != "X" );
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
