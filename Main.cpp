#include "Header.h"
#include <iostream>
int main() {
	system("color 3");
	std::string input;
	std::cout << "\tROCK  --  PAPER  --  SCISSORS \n";
	do {
		std::cout << "\n\nSELECT(0 To Quit): ";
		std::cin >> input;
		RPS RockPaperScissors{ input };
		RockPaperScissors.ChechWin();
	} while (input != "0");
}