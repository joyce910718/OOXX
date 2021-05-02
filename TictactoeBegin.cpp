#include "TictactoeBegin.h"

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
	while (loop < 9) {
		cout << "請輸入落子位置：";
		cin >> space;

		if (space > 9 || space < 1) {
			cout << "\n你的棋子擺放位置已超出範圍，請重新選位\n\n" << endl;
		}

		else {
			switch (loop % 2) {
			case 0: array[space] = 'X'; break;
			case 1: array[space] = 'O'; break;
			}
		}
		print();
		loop++;
	}
}