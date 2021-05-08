#ifndef PlayerInitialization_h
#define PlayerInitialization_h

#include<string>
using namespace std;

class PlayerInitialization {
private:
	int pickAMode;															//此變數功能為：讓玩家選擇遊戲模式
	string Player1_Name, Player2_Name, Player1_Chessman, Player2_Chessman;	//Name：玩家名稱		Chessman：玩家所選擇的棋子

public:
	PlayerInitialization();
	void print_loading();					//此函式功能為：輸出「遊戲加載中」的樣式
	void print();							//此函式功能為：設定使用者的基本資料，並匯出
	string getPlayer1_Chessman() const;		
	string getPlayer2_Chessman() const;
	string getPlayer1_Name() const;
	string getPlayer2_Name() const;
};
#endif
