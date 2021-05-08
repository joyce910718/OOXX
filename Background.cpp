#include "Background.h"

#include<iomanip>
#include<iostream>
#include<cstdlib>
using namespace std;

Background::Background() {}
void Background::print() {
	system("color E1");
	cout << "\n.............................................................................................................................................................................................\n\n";
	cout << setw(80) << "\t" << "歡迎來到遊戲的世界" << endl;
	cout << setw(80) << "\t" << " 此遊戲為井字遊戲" << "\n\n\n";
	cout << setw(20) << "\t" << "遊戲人數：" << endl;
	cout << setw(20) << "\t" << "          2人" << "\n\n\n";
	cout << setw(20) << "\t" << "遊戲說明：" << endl;
	cout << setw(20) << "\t" << "          兩名玩家輪流在九宮格上畫上自己的棋子，不論橫線、直線、斜線，最先將三子連線的一方獲勝。" << "\n\n\n\n";
	cout << setw(20) << "\t" << "落子位置選擇：" << "\n\n";
	cout << setw(20) << "\t" << "                           |     |     " << endl;
	cout << setw(20) << "\t" << "                        7  |  8  |  9  " << endl;
	cout << setw(20) << "\t" << "                      _____|_____|_____" << endl;
	cout << setw(20) << "\t" << "                           |     |     " << endl;
	cout << setw(20) << "\t" << "                        4  |  5  |  6  " << endl;
	cout << setw(20) << "\t" << "                      _____|_____|_____" << endl;
	cout << setw(20) << "\t" << "                           |     |     " << endl;
	cout << setw(20) << "\t" << "                        1  |  2  |  3  " << endl;
	cout << setw(20) << "\t" << "                           |     |     " << endl;
	cout << "\n" << setw(20) << "\t" << "                （ 此設計配合鍵盤上的數字位置 ）\n";
	cout << "\n" << setw(20) << "\t" << "                 玩家輸入數字，選擇要落子的位置\n\n\n";
	cout << setw(20) << "\t" << "棋子選擇：" << endl;
	cout << setw(20) << "\t" << "          X為： 先攻" << endl;
	cout << setw(20) << "\t" << "          O為： 先守" << endl;
}
