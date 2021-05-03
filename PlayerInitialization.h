#ifndef PlayerInitialization_h
#define PlayerInitialization_h

#include<string>
using namespace std;

class PlayerInitialization {
private:
	int pickAMode;
	string Player1_Name, Player2_Name, Player1_Chessman, Player2_Chessman;

public:
	PlayerInitialization();
	void print();
	string getPlayer1_Chessman() const;
	string getPlayer2_Chessman() const;
	string getPlayer1_Name() const;
	string getPlayer2_Name() const;
};
#endif