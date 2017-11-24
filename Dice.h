#pragma once
#include <random>
/*This class uses random-number gen, to roll dice. Dice go from d4 to d20

*/



class Dice
{
public:
	Dice();
	~Dice();

	int rollD4();
	int rollD6();
	int rollD8();
	int rollD10();
	int rollD12();
	int rollD20();
	int rollD100();

	int rollD4(int num);
	int rollD6(int num);
	int rollD8(int num);
	int rollD10(int num);
	int rollD12(int num);
	int rollD20(int num);
	int rollD100(int num);

private:
};

