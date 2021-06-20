#include "Background.h"
#include "PlayerInitialization.h"
#include "TictactoeBegin.h"
#include <cstdlib>							//使用system( " " )  需引用 cstdlib 的函式庫
#include <iostream>
#include <iomanip>
#include <Windows.h>						//使用Sleep( )       需引用 Windows.h 的內建功能設計
using namespace std;


int main() {
	Background gameBackground;
	gameBackground.print();

	TictactoeBegin player;
	int mode;								//紀錄輸入的遊戲模式

	system("pause");						//暫停輸出以便玩家有確實觀看遊戲說明
	system("cls");							//清空畫面資訊
	player.loading();						//遊戲載入中
	system("cls");

	int loop = 0;
	do {									//此迴圈設計遊戲模式
		if (loop != 0) 
			player.COUTmodeError();			//螢幕顯示玩家選擇的模式不符合遊戲規則

		cout << "\n\n\n" << setw(18) << "\t" << "*******************************************************************************************************************\n\n";
		cout << setw(20) << "\t" << "選擇模式：" << endl;
		cout << setw(34) << " " << "模式 1： 單人模式 / 人機模式\n";
		cout << setw(34) << " " << "模式 2： 雙人模式\n\n\n";
		cout << setw(20) << "\t" << "請輸入模式：" << "\n" << setw(36) << " " << "( 輸入數字 1 或 2 )" << "\n\n" << setw(42) << " " << "模式 ";
		cin >> mode;						//玩家選擇遊戲模式
		player.setPickAMode(mode);			//玩家設置遊戲模式

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
	do {									//此迴圈設計玩家遊戲名稱
		if (loop != 0)
			player.COUTnameError();			//螢幕顯示玩家姓名重複
		
		cin.ignore();
		player.setPlayer1_Name();
		player.setPlayer2_Name();
		
		loop++;
	} while (player.getPlayer1_Name() == player.getPlayer2_Name());

	loop = 0;
	do {
		if (loop != 0) 
			player.COUTchessmanError();		//螢幕顯示玩家選擇的棋子與遊戲規則不符

		cout << "\n\n\n" << setw(18) << "\t" << "*******************************************************************************************************************\n\n";
		cout << setw(20) << "\t" << player.getPlayer1_Name() << " 請選擇棋子：" << "\n" << setw(41) << " " << "( 輸入大寫英文字母 O 或 X )" << "\n\n" << setw(50) << player.getPlayer1_Name() << setw(8) << " 棋子為： ";
		player.setPlayer1_Chessman();
		player.setPlayer2_Chessman();
		cout << setw(50) << player.getPlayer2_Name() << setw(8) << " 棋子為： " << player.getPlayer2_Chessman() << "\n\n\n" << endl;

		if ( (player.getPlayer1_Chessman() == "O" && player.getPlayer2_Chessman() == "X") || (player.getPlayer1_Chessman() == "X" && player.getPlayer2_Chessman() == "O") )
			break;

		loop++;
	} while (true);

	int space;																//space 功能為：紀錄使用者輸入的下棋位子
	loop = 0;
	player.setOffensive();													//此函式功能為：將進攻者的姓名設置給變數 offensive
	player.setDefensive();													//此函式功能為：將防守者的姓名設置給變數 defensive

	while (loop < 9) {														//表示尚未填滿九宮格，繼續進行迴圈

		cout << setw(18) << "\t" << "*******************************************************************************************************************\n\n\n";
		switch (loop % 2) {													//判斷判斷目前由哪位玩家落子
			case 0: cout << setw(20) << "\t" << "(進攻方) " << player.getOffensive() << " 請輸入落子位置："; break;
			case 1: cout << setw(20) << "\t" << "(防守方) " << player.getDefensive() << " 請輸入落子位置："; break;
		}

		cin >> space;														//玩家輸入想落子的位置
		player.setSpace( space );											//此函式功能為：設置玩家選擇的落子位置

		if (player.getSpace() > 9 || player.getSpace() < 1) {				//玩家選擇的位置已超出可選擇的範圍，需重新輸入
			cout << "\n" << setw(30) << " " << "                  您的棋子擺放位置已超出範圍，請重新選位\n\n" << endl;
			continue;
		}

		else if ( player.isSpaceFull() ) {								    //玩家選擇的位置已有棋子
			cout << "\n" << setw(30) << " " << "                  此格已有棋子，請重選一格\n\n" << endl;
			continue;
		}

		else {																//遊戲正常進行														
				switch (loop % 2) {											//判斷判斷目前由哪個棋子落子
					case 0: player.PutDown( 'X' ); break;					//將玩家對應到的棋子傳入函式中
					case 1: player.PutDown( 'O' ); break;					//將玩家對應到的棋子傳入函式中
				}

				player.print();												// 匯出九宮格

				if (player.isGameover()) {									//如果已有玩家勝利，則進行 if 內的程式碼，並跳出迴圈
					cout << setw(18) << "\t" << "*******************************************************************************************************************\n\n\n";
					(loop % 2 == 0) ? cout << setw(20) << "\t" << "進攻方： " << player.getOffensive() << " 獲勝\n" : cout << setw(20) << "\t" << "防守方： " << player.getDefensive() << " 獲勝\n";
					break;
				}

				loop++;														// loop +1 換另一位玩家玩家落子
		}
	}

	cout << "\n\n\n" << setw(18) << "\t" << "*******************************************************************************************************************\n\n";
	( player.isPeace() ) ? cout << setw(20) << "\t" << "平手啦呵呵呵\n\n" : cout << endl;

}
