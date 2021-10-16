#include "Header.h"
#include <iostream>
int main() {
	system("color 3");   // set colur to white blue.
	std::string input;
	std::cout << "\tROCK  --  PAPER  --  SCISSORS \n";
	do {
		std::cout << "\n\nSELECT(0 To Quit): ";
		std::cin >> input;
		RPS RockPaperScissors{ input };
		RockPaperScissors.CheckWin();
	} while (input != "0");
}
