#ifndef HEADER
#define HEADER
#include <string>
class RPS // stands for "Rock Paper Scissors"
{
	int choiec;
public:
	RPS(std::string selection); //constructor takes the user input
	void SetValue(int x); // seting the input value to choiec
	int GenerateNum(); // generating a random number as a computer selection
	void CheckWin(); // checking who won
	void Result(); // printing the final result
};
#endif 

