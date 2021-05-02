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
		   cout << "�п�J���l��m�G";
		cin >> space;

		if ( array[space] == 'O' || array[space] == 'X' )
		{
			cout << "\n                ��J���~\n\n" << endl;
		}
		else {


			if ( space > 9 || space < 1 ) {
				cout << "\n�A���Ѥl�\���m�w�W�X�d��A�Э��s���\n\n" << endl;
			}

			else {
				switch ( loop % 2 ) {
				case 0: array[space] = 'X'; break;
				case 1: array[space] = 'O'; break;
				}
			}
		
		print();
		loop++;

		if ((array[1] == array[2] && array[1] == array[3] && array[1] == 'O') ||
			(array[4] == array[5] && array[4] == array[6] && array[4] == 'O') ||
			(array[7] == array[8] && array[7] == array[9] && array[7] == 'O') ||
			(array[1] == array[4] && array[1] == array[7] && array[1] == 'O') ||
			(array[2] == array[5] && array[2] == array[8] && array[2] == 'O') ||
			(array[3] == array[6] && array[3] == array[9] && array[3] == 'O') ||
			(array[1] == array[5] && array[1] == array[9] && array[1] == 'O') ||
			(array[3] == array[5] && array[3] == array[7] && array[3] == 'O')) {
			cout << "��J O ���H���\n";
			break;
		}
		if ((array[1] == array[2] && array[1] == array[3] && array[1] == 'X') ||
			(array[4] == array[5] && array[4] == array[6] && array[4] == 'X') ||
			(array[7] == array[8] && array[7] == array[9] && array[7] == 'X') ||
			(array[1] == array[4] && array[1] == array[7] && array[1] == 'X') ||
			(array[2] == array[5] && array[2] == array[8] && array[2] == 'X') ||
			(array[3] == array[6] && array[3] == array[9] && array[3] == 'X') ||
			(array[1] == array[5] && array[1] == array[9] && array[1] == 'X') ||
			(array[3] == array[5] && array[3] == array[7] && array[3] == 'X')) {
			cout << "��J X ���H���\n";
			break;
		}
	}
}
}