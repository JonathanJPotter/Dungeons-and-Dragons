#include "stdafx.h"
#include "Dice.h"
#include <random>


std::random_device rand_dev;
std::mt19937 gen(rand_dev());
std::uniform_int_distribution<int> d4(1, 4);
std::uniform_int_distribution<int> d6(1, 6);
std::uniform_int_distribution<int> d8(1, 8);
std::uniform_int_distribution<int> d10(1, 10);
std::uniform_int_distribution<int> d12(1, 12);
std::uniform_int_distribution<int> d20(1, 20);
std::uniform_int_distribution<int> d100(1, 100);

Dice::Dice()
{

}

Dice::~Dice()
{
}

int Dice::rollD4()
{
	return d4(gen);
}

int Dice::rollD6()
{
	return d6(gen);
}

int Dice::rollD8()
{
	return d8(gen);
}

int Dice::rollD10()
{
	return d10(gen);
}

int Dice::rollD12()
{
	return d12(gen);
}

int Dice::rollD20()
{
	return d20(gen);
}

int Dice::rollD100()
{
	return d100(gen);
}

int Dice::rollD4(int num)
{
	int ret = 0;
	if (num < 1)
	{
		num = 1;
	}
	for (int i = 0; i < num; i++)
	{
		ret += d4(gen);
	}
	return ret;
}

int Dice::rollD6(int num)
{
	int ret = 0;
	if (num < 1)
	{
		num = 1;
	}
	for (int i = 0; i < num; i++)
	{
		ret += d6(gen);
	}
	return ret;
}

int Dice::rollD8(int num)
{
	int ret = 0;
	if (num < 1)
	{
		num = 1;
	}
	for (int i = 0; i < num; i++)
	{
		ret += d8(gen);
	}
	return ret;
}

int Dice::rollD10(int num)
{
	int ret = 0;
	if (num < 1)
	{
		num = 1;
	}
	for (int i = 0; i < num; i++)
	{
		ret += d10(gen);
	}
	return ret;
}

int Dice::rollD12(int num)
{
	int ret = 0;
	if (num < 1)
	{
		num = 1;
	}
	for (int i = 0; i < num; i++)
	{
		ret += d12(gen);
	}
	return ret;
}

int Dice::rollD20(int num)
{
	int ret = 0;
	if (num < 1)
	{
		num = 1;
	}
	for (int i = 0; i < num; i++)
	{
		ret += d20(gen);
	}
	return ret;
}

int Dice::rollD100(int num)
{
	int ret = 0;
	if (num < 1)
	{
		num = 1;
	}
	for (int i = 0; i < num; i++)
	{
		ret += d100(gen);
	}
	return ret;
}

