#include "Background.h"

 
void Background::print() {
	cout << "歡迎來到遊戲的世界" << endl;
	cout << "此遊戲為井字遊戲" << "\n" << endl;
	cout << "遊戲人數:" << endl;
	cout << "         2人" << "\n" << endl;
	cout << "遊戲說明:" << endl;
	cout << "         兩名玩家輪流在九宮格上畫上自己的棋子，不論橫線、直線、斜線，最先將三子連線的一方獲勝。" << "\n" << endl;
	cout << "落子位置選擇:" << "\n" << endl;
	cout << "          1   |  2  |  3" << endl;
	cout << "         -----|-----|-----" << endl;
	cout << "          4   |  5  |  6" << endl;
	cout << "         -----|-----|-----" << endl;
	cout << "          7   |  8  |  9" << endl;
	cout << "    玩家輸入數字，選擇要落子的位置" << "\n" << endl;
	cout << "棋子選擇:" << endl;
	cout << "        O為:先攻" << endl;
	cout << "        X為:先守" << endl;
}