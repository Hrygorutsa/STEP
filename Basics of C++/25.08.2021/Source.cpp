#include <iostream>
#include <ctime>
using namespace std;
#include "Header.h";

int main()
{
	//int arr[][]=
	//{

		/*{1,2,5,8},
		{2,5},
		{1,8,9}*/
		//}
	srand(unsigned(time(0)));
	char cell[3][3]{};
	char player_ = 'X';
	char bot_ = '0';
	bool flag = true;

	while (true) {
		startGame(cell);
		print(cell);
		char check;
		for (size_t i = 0; i < 9; i++)
		{
			if (i % 2 == 0) {
				player(cell, player_);
				flag = false;
			}
			else
			{
				bot(cell, bot_);
				flag = true;
			}
			if (i >= 4) {
				check = checkWinner(cell);
				if (check != ' ')break;
			}
		}
		if (check == ' ')cout << "Draw !!!" << endl;
		else cout << check << "'s wins!!!" << endl;

		
		char y, n,b;
		cout << "Wanna play again Y/N " << endl;
		cin >> b;
		if (b=='y') {
			startGame(cell);
		}
		else if (b == 'n') { cout << "Bye-Bye" << endl; return 0; }
	}
}
