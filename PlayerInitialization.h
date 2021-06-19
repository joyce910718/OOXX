#ifndef PlayerInitialization_h
#define PlayerInitialization_h

#include<sstream>
#include<string>
using namespace std;

class PlayerInitialization {
protected:
	int pickAMode;															//此變數功能為：讓玩家選擇遊戲模式
	string Player1_Name, Player2_Name, Player1_Chessman, Player2_Chessman;	//Name：玩家名稱		Chessman：玩家所選擇的棋子

public:
	PlayerInitialization();
	void loading();						    //此函式功能為：輸出「遊戲加載中」的樣式
	void print();							//此函式功能為：輸出資料
	void setPickAMode();					//此函式功能為：令使用者選擇遊戲模式
	void setPlayer1_Name();					//此函式功能為：設置一號玩家的姓名
	void setPlayer2_Name();					//此函式功能為：設置二號玩家的姓名
	void setPlayer1_Chessman();				//此函式功能為：令一號玩家選擇棋子
	void setPlayer2_Chessman();				//此函式功能為：令二號玩家選擇棋子
	string getPlayer1_Name() const;			//此函式功能為：回傳玩家一的姓名
	string getPlayer2_Name() const;			//此函式功能為：回傳玩家二的姓名
	string getPlayer1_Chessman() const;		//此函式功能為：回傳玩家一的棋子
	string getPlayer2_Chessman() const;		//此函式功能為：回傳玩家二的棋子
	int getPickAMode() const;				//此函式功能為：回傳遊戲模式
	
};
#endif
