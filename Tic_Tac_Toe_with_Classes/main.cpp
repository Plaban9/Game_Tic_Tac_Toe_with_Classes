#include <iostream>
#include <string>
#include "TicTacToe.h"
using std::cout;

int main()
{
	TicTacToe game;

	game.playGame();

	cout << "\nThank You for Playing!!";
	system("PAUSE>null");

	return 0;
}