#ifndef HEADER
#define HEADER
#include <string>
class RPS // stands for "Rock Paper Scissors"
{
	int choiec;
public:
	RPS(std::string selection); //constructor takes the user input.
	void SetValue(int x); //function for seting the input value to choiec.
	int GenerateNum();
	void ChechWin();
	void Result();
};
#endif //  HEADER

