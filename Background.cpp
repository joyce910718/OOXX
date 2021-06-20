#include "Background.h"

#include<iomanip>
#include<iostream>
#include<cstdlib>
using namespace std;

Background::Background() {
	Array = new char[10];

	for (int i = 1; i <= 9; i++)
		Array[i] = static_cast<char>(i + 48);
}

void Background::setArray( int index ) {
	Array[index] = '-';
}

char Background::getArray(int index) const {
	return Array[index];
}

void Background::Nine_Square_Division() {
	cout << setw(50) << "\t" << "     |     |     " << endl;
	cout << setw(50) << "\t" << "  " << Array[7] << "  |  " << Array[8] << "  |  " << Array[9] << endl;
	cout << setw(50) << "\t" << "_____|_____|_____" << endl;
	cout << setw(50) << "\t" << "     |     |     " << endl;
	cout << setw(50) << "\t" << "  " << Array[4] << "  |  " << Array[5] << "  |  " << Array[6] << endl;
	cout << setw(50) << "\t" << "_____|_____|_____" << endl;
	cout << setw(50) << "\t" << "     |     |   " << endl;
	cout << setw(50) << "\t" << "  " << Array[1] << "  |  " << Array[2] << "  |  " << Array[3] << endl;
	cout << setw(50) << "\t" << "     |     |   \n\n" << endl;
	cout << "\n" << setw(30) << "\t" << "                （ 此設計配合鍵盤上的數字位置 ）\n";
	cout << "\n" << setw(30) << "\t" << "                 玩家輸入數字，選擇要落子的位置\n\n\n\n";
}

void Background::print() {
	system("color E1");					//設定執行後的背景色與字體色   背景色為 E：淡黃色   字體色 1 為：藍色
	cout << "\n\n";
	cout << "\n.............................................................................................................................................................................................\n\n";
	cout << setw(80) << "\t" << "歡迎來到遊戲的世界" << endl;
	cout << setw(80) << "\t" << " 此遊戲為井字遊戲\n\n\n";
	cout << setw(20) << "\t" << "遊戲人數：" << endl;
	cout << setw(20) << "\t" << "          2人\n\n\n";
	cout << setw(18) << "\t" << "*******************************************************************************************************************\n\n";
	cout << setw(20) << "\t" << "遊戲說明：" << endl;
	cout << setw(20) << "\t" << "          兩名玩家輪流在九宮格上畫上自己的棋子，不論橫線、直線、斜線，最先將三子連線的一方獲勝。\n\n\n\n";
	cout << setw(18) << "\t" << "*******************************************************************************************************************\n\n";
	cout << setw(20) << "\t" << "落子位置選擇：\n\n";
	Nine_Square_Division();
	cout << "\n" << setw(18) << "\t" << "*******************************************************************************************************************\n\n";
	cout << setw(20) << "\t" << "棋子選擇：" << endl;
	cout << setw(20) << "\t" << "          X為： 先攻" << endl;
	cout << setw(20) << "\t" << "          O為： 先守" << endl;
}
