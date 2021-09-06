#ifndef HEADER
#define HEADER
#include <string>
class RPS // stands for "Rock Paper Scissors"
{
	int choiec;
public:
	RPS(std::string selection);
	void SetValue(int x);
	int GenerateNum();
	void ChechWin();
	void Result();
};
#endif //  HEADER

