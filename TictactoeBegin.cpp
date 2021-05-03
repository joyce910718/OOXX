#include "PlayerInitialization.h"
#include "TictactoeBegin.h"
#include<iostream>
#include<string>
using namespace std;

TictactoeBegin::TictactoeBegin() {
	array = new char[10];

	for (int i = 1; i <= 9; i++) {
		array[i] = ' ';
	}
}

void TictactoeBegin::print() {
	cout << "\n     |     |     " << endl;
	cout << "  " << array[1] << "  |  " << array[2] << "  |  " << array[3] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << array[4] << "  |  " << array[5] << "  |  " << array[6] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |   " << endl;
	cout << "  " << array[7] << "  |  " << array[8] << "  |  " << array[9] << endl;
	cout << "     |     |   \n\n" << endl;

}

void TictactoeBegin::choiceLayingDownPieces() {

	gameInitialization.print();

	( gameInitialization.getPlayer1_Chessman() == "X" ) ? offensive = gameInitialization.getPlayer1_Name() : offensive = gameInitialization.getPlayer2_Name();
	( gameInitialization.getPlayer1_Chessman() == "O" ) ? defensive = gameInitialization.getPlayer1_Name() : defensive = gameInitialization.getPlayer2_Name();

		while (loop < 9) {

			switch (loop % 2) {
				case 0: cout << offensive << " �п�J���l��m�G"; break;
				case 1: cout << defensive << " �п�J���l��m�G"; break;
			}
			cin >> space;

			if ( array[space] == 'O' || array[space] == 'X' ) {
				cout << "\n                ��J���~\n\n" << endl;
			}else {
						if ( space > 9 || space < 1 ) {
							cout << "\n�A���Ѥl�\���m�w�W�X�d��A�Э��s���\n\n" << endl;
						}else {
							switch ( loop % 2 ) {
								case 0: array[space] = 'X'; break;
								case 1: array[space] = 'O'; break;
							}
						}
		
					print();

						if ((array[1] == array[2] && array[1] == array[3] && array[1] != ' ') ||
							(array[4] == array[5] && array[4] == array[6] && array[4] != ' ') ||
							(array[7] == array[8] && array[7] == array[9] && array[7] != ' ') ||
							(array[1] == array[4] && array[1] == array[7] && array[1] != ' ') ||
							(array[2] == array[5] && array[2] == array[8] && array[2] != ' ') ||
							(array[3] == array[6] && array[3] == array[9] && array[3] != ' ') ||
							(array[1] == array[5] && array[1] == array[9] && array[1] != ' ') ||
							(array[3] == array[5] && array[3] == array[7] && array[3] != ' ')) {

							( loop % 2 == 0 ) ? cout << offensive <<" ���\n" : cout << defensive << " ���\n";
							break;
						}

					loop++;
			}
		}
}