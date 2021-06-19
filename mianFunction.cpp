#include "Background.h"
#include "PlayerInitialization.h"
#include "TictactoeBegin.h"
#include <cstdlib>	 //使用system( " " )  需引用 cstdlib 的函式庫
#include <iostream>
#include <iomanip>
#include <Windows.h>  //使用Sleep( )       需引用 Windows.h 的內建功能設計
using namespace std;


int main() {
	Background gameBackground;
	gameBackground.print();

	TictactoeBegin player;
	int mode;							//紀錄輸入的遊戲模式

	system("pause");					//暫停輸出以便玩家有確實觀看遊戲說明
	system("cls");						//清空畫面資訊
	player.loading();					//遊戲載入中
	system("cls");

	int loop = 0;
	do {								//此迴圈設計遊戲模式
		if (loop != 0) 
			player.COUTmodeError();		//玩家選擇的模式不符合遊戲規則

		cout << "\n\n\n" << setw(18) << "\t" << "*******************************************************************************************************************\n\n";
		cout << setw(20) << "\t" << "選擇模式：" << endl;
		cout << setw(34) << " " << "模式 1： 單人模式 / 人機模式\n";
		cout << setw(34) << " " << "模式 2： 雙人模式\n\n\n";
		cout << setw(20) << "\t" << "請輸入模式：" << "\n" << setw(36) << " " << "( 輸入數字 1 或 2 )" << "\n\n" << setw(42) << " " << "模式 ";
		cin >> mode;
		player.setPickAMode(mode);			//玩家選擇遊戲模式

		if (player.getPickAMode() == 1) {
			cout << "\n\n " << setw(24) << " " << "此模式尚未開發，系統將自動為您轉至雙人模式";
			mode = 2;
			player.setPickAMode(mode);
			break;
		}

		if (player.getPickAMode() == 2)
			break;

		loop++;
	} while (true);

	loop = 0;
	do {								//此迴圈設計玩家遊戲名稱
		if (loop != 0)
			player.COUTnameError();		//玩家姓名重複
		
		cin.ignore();
		player.setPlayer1_Name();
		player.setPlayer2_Name();
		
		loop++;
	} while (player.getPlayer1_Name() == player.getPlayer2_Name());

	loop = 0;
	do {
		if (loop != 0) 
			player.COUTchessmanError();

		cout << "\n\n\n" << setw(18) << "\t" << "*******************************************************************************************************************\n\n";
		cout << setw(20) << "\t" << player.getPlayer1_Name() << " 請選擇棋子：" << "\n" << setw(41) << " " << "( 輸入大寫英文字母 O 或 X )" << "\n\n" << setw(50) << player.getPlayer1_Name() << setw(8) << " 棋子為： ";
		player.setPlayer1_Chessman();
		player.setPlayer2_Chessman();
		cout << setw(50) << player.getPlayer2_Name() << setw(8) << " 棋子為： " << player.getPlayer2_Chessman() << "\n\n\n" << endl;

		if ( (player.getPlayer1_Chessman() == "O" && player.getPlayer2_Chessman() == "X") || (player.getPlayer1_Chessman() == "X" && player.getPlayer2_Chessman() == "O") )
			break;

		loop++;
	} while (true);

	player.choiceLayingDownPieces();

}
