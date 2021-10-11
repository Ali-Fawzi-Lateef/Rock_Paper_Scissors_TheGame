#include "Header.h"
#include <iostream>
#include <random> //for random number.
#include <cassert> //for random number.
void RPS::SetValue(int x) { //set the value to choiec.
	choiec = x;
}
int Player , Computer;
RPS::RPS(std::string selection) //checking the selection ,to set it to choiec.
{
	if (selection == "rock" || selection == "ROCK") {
		SetValue(1);
	}
	else if (selection == "paper" || selection == "PAPER") {
		SetValue(2);
	}
	else if (selection == "scissors" || selection == "SCISSORS") {
		SetValue(3);
	}
	else if (selection == "0") {
		SetValue(0);
	}
	else
		SetValue(7);
}
int RPS::GenerateNum() { 
	std::random_device dev; //that one is better then the normal rand and srand functions
	std::mt19937 rng(dev());
	std::uniform_int_distribution<std::mt19937::result_type> dist6(1, 3); // distribution in range [1, 3]
	return dist6(rng);
}
void RPS::CheckWin() {
	int x = GenerateNum();
	if (choiec == 1 && x == 2) { // check which one would win
		std::cout << "Computer :PAPER.\n";
		std::cout << "PAPER cover's the ROCK, Computer won!";
		Computer++;
	}
	else if (choiec == 1 && x == 3) {
		std::cout << "Computer :SCISSORS.\n";
		std::cout << "ROCK DESTROY THE SCISSORS, Player won!";
		Player++;
	}
	else if (choiec == 2 && x == 1) {
		std::cout << "Computer :ROCK.\n";
		std::cout << "PAPER cover's the ROCK, Player won!";
		Player++;
	}
	else if (choiec == 2 && x == 3) {
		std::cout << "Computer :SCISSORS.\n";
		std::cout << "SCISSORS Cut's the PAPER, Computer won!";
		Computer++;
	}
	else if (choiec == 3 && x == 1) {
		std::cout << "Computer :ROCK.\n";
		std::cout << "ROCK DESTROY THE SCISSORS, Computer won!";
		Computer++;
	}
	else if (choiec == 3 && x == 2) {
		std::cout << "Computer :PAPER.\n";
		std::cout << "SCISSORS Cut's the PAPER, Player won!";
		Player++;
	}
	else if (choiec == 1 && x == 1) {
		std::cout << "Computer :ROCK.\n";
		std::cout << "NoBody Won!!";
	}
	else if (choiec == 2 && x == 2) {
		std::cout << "Computer :PAPER.\n";
		std::cout << "NoBody Won!!";
	}
	else if (choiec == 3 && x == 3) {
		std::cout << "Computer :SCISSORS.\n";
		std::cout << "NoBody Won!!";
	}
	else if (choiec == 0) {
		std::cout << "Bye Bye\a\n";
		Result();
	}
	else
		std::cout << "Invalid selection please try again ^_^";
	
}
void RPS::Result() { //result
	std::cout << "Player " << Player << " : "<< Computer << " Computer";
	if (Player > Computer)
	{
		std::cout << "\nPlayer Won the whole game " << Player;
	}
	else if (Player < Computer)
	{
		std::cout <<
			"\nComputer Won the whole game " << Computer;
	}
	else
		std::cout << "\nLiterally nobody won this time LOL :)";
}
