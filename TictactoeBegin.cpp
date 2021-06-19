#include "PlayerInitialization.h"
#include "TictactoeBegin.h"
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

bool TictactoeBegin::peace = false;

TictactoeBegin::TictactoeBegin() {					//將 array 變數的值初始化為空格字元
	array = new char[10];

	for (int i = 1; i <= 9; i++)
		array[i] = ' ';
}

void TictactoeBegin::print() {						//匯出九宮格
	cout << "\n\n" << setw(34) << " " << "     |     |     " << endl;
	cout		   << setw(34) << " " << "  " << array[7] << "  |  " << array[8] << "  |  " << array[9] << endl;
	cout		   << setw(34) << " " << "_____|_____|_____" << endl;
	cout		   << setw(34) << " " << "     |     |     " << endl;
	cout		   << setw(34) << " " << "  " << array[4] << "  |  " << array[5] << "  |  " << array[6] << endl;
	cout		   << setw(34) << " " << "_____|_____|_____" << endl;
	cout		   << setw(34) << " " << "     |     |   " << endl;
	cout		   << setw(34) << " " << "  " << array[1] << "  |  " << array[2] << "  |  " << array[3] << endl;
	cout		   << setw(34) << " " << "     |     |   \n\n" << endl;

}

void TictactoeBegin::choiceLayingDownPieces() {

	(getPlayer1_Chessman() == "X") ? offensive = getPlayer1_Name() : offensive = getPlayer2_Name();	//進攻者的玩家名稱設給 變數：offensive
	(getPlayer1_Chessman() == "O") ? defensive = getPlayer1_Name() : defensive = getPlayer2_Name();	//防守方的玩家名稱設給 變數：defensive

	while (loop < 9) {			//表示尚未填滿九宮格，繼續進行迴圈

		cout << setw(18) << "\t" << "*******************************************************************************************************************\n\n\n";
		switch (loop % 2) {		//判斷判斷目前由哪位玩家落子
		case 0: cout << setw(20) << "\t" << "(進攻方) " << offensive << " 請輸入落子位置："; break;
		case 1: cout << setw(20) << "\t" << "(防守方) " << defensive << " 請輸入落子位置："; break;
		}
		cin >> space;

		if (array[space] == 'O' || array[space] == 'X')		//玩家選擇的位置已有棋子
			cout << "\n" << setw(30) << " " << "                  此格已有棋子，請重選一格\n\n" << endl;
		else {		//玩家選擇的位置是空的
			if (space > 9 || space < 1)		//玩家選擇的位置是空的，但已超出可選擇的範圍，需重新輸入
				cout << "\n" << setw(30) << " " << "                  你的棋子擺放位置已超出範圍，請重新選位\n\n" << endl;
			else {	//遊戲正常進行
				switch (loop % 2) { //判斷判斷目前由哪個棋子落子
				case 0: array[space] = 'X'; break;
				case 1: array[space] = 'O'; break;
				}

				print();	// 匯出九宮格
				loop++;		// loop +1 換另一位玩家玩家落子
			}

			if (Gameover()) {	//如果已有玩家勝利，則進行 if 內的程式碼，並跳出迴圈
				cout << setw(18) << "\t" << "*******************************************************************************************************************\n\n\n";
				((loop - 1) % 2 == 0) ? cout << setw(20) << "\t" << "進攻方： " << offensive << " 獲勝\n" : cout << setw(20) << "\t" << "防守方： " << defensive << " 獲勝\n";
				break;
			}
		}
	}
	cout << "\n\n\n" << setw(18) << "\t" << "*******************************************************************************************************************\n\n";
	(peace == 0) ? cout << setw(20) << "\t" << "平手啦呵呵呵\n\n" : cout << endl;
}

bool TictactoeBegin::Gameover() {	//此函式功能為：判斷勝負 
	if ((array[1] == array[2] && array[1] == array[3] && array[1] != ' ') ||
		(array[4] == array[5] && array[4] == array[6] && array[4] != ' ') ||
		(array[7] == array[8] && array[7] == array[9] && array[7] != ' ') ||
		(array[1] == array[4] && array[1] == array[7] && array[1] != ' ') ||
		(array[2] == array[5] && array[2] == array[8] && array[2] != ' ') ||
		(array[3] == array[6] && array[3] == array[9] && array[3] != ' ') ||
		(array[1] == array[5] && array[1] == array[9] && array[1] != ' ') ||
		(array[3] == array[5] && array[3] == array[7] && array[3] != ' ')) {

		peace = true;
		return true;
	}
	else
		return false;
}
