#include "PlayerInitialization.h"
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

void PlayerInitialization::print() {
	cout << "\n" << "��ܪ��k:" << endl;
	cout << setw(10) << " " << "���k1: ��H�Ҧ� / �H���Ҧ�" << endl;
	cout << setw(10) << " " << "���k2: ���H�Ҧ�" << "\n" << endl;
	cout << "�п�J���k:" << "\n" << setw(12) << " " << "( ��J�Ʀr 1 �� 2 )" << "\n\n" << setw(17) << " " << "���k";
	cin >> pickAMode;

	if (pickAMode == 1) {
		cout << "\n" << "�Ъ��a��J�m�W:" << endl;
		cout << setw(16) << " " << "���a�@�C���W��: ";
		cin >> Player1_Name;
		Player2_Name = "computer";
	}

	else {
		cout << "\n" << "�Ъ��a��J�m�W:" << endl;
		cout << setw(16) << " " << "���a�@�C���W��: ";
		cin >> Player1_Name;
		cout << setw(16) << " " << "���a�G�C���W��: ";
		cin >> Player2_Name;
	}

	cout << "\n" << Player1_Name << " �п�ܴѤl:" << "\n" << setw(14) << " " << "( ��J�j�g�^��r�� O �� X )" << "\n\n" << setw(25) << Player1_Name << setw(8) << " �Ѥl��: ";
	cin >> Player1_Chessman;
	(Player1_Chessman == "O") ? Player2_Chessman = "X" : Player2_Chessman = "O";
	cout << setw(25) << Player2_Name << setw(8) << " �Ѥl��: " << Player2_Chessman << "\n\n\n" << endl;

}