#include <iostream>
#include <cstdlib>

//void PrintInteger(int variable)
//
//{
//
//	std::cout << variable << std::endl;
//
//}
//
//int main()
//
//{
//
//	int the_variable = 1;
//
//	PrintInteger(the_variable);
//
//	{
//
//		PrintInteger(the_variable);
//
//		int the_variable = 2;
//
//		PrintInteger(the_variable);
//
//		{
//
//			PrintInteger(the_variable);
//
//			int the_variable = 3;
//
//			PrintInteger(the_variable);
//
//		}
//
//		PrintInteger(the_variable);
//
//	}
//
//	PrintInteger(the_variable);
//
// /*
//	    1
//		1
//		2
//		2
//		3
//		2
//		1*/
// 
//
//}

//#2
float smlValue(float a, float b,)
{

	std::cin >> a >> b;

	if (a < b)
	{
		return a;
	}
	else

	{
		return b;
	}


	system("pause");
}
//#3
// Funciton Overloads

//#4
float Half(float number)
{
	number = 16.721f;

	float result = number / 2;

	return result;
}

//#5
int CoinFlip()
{
	std::cout << "WELCOME TO COIN FLIP" << std::endl;
	std::cout << "please choose 1 for heads or 2 for tails" << std::endl;
	int x;
	std::cin >> x;

	if (x == 1)
	{
		std::cout << "YOU CHOOSE HEADS" << std::endl;
	}
	if (x == 2)
	{
		std::cout << "YOU CHOOSE TAILS" << std::endl;
	}

	int f;
	f = rand() % 2 + 1;

	if (f == 1)
	{
		std::cout << "COIN WAS TAILS" << std::endl;
	}
	if (f == 2)
	{
		std::cout << "COIN WAS HEADS" << std::endl;
	}
	char w = (x == f) ? printf("YOU WIN") : printf("YOU LOSE");
	std::cout << w;

system("pause");
system("cls");
}
//#6
int sum(int x, int y)
{
	int result;
	result = x + y;
}

int main()
{
	float a;
	float b;
	smlValue(a, b);

	Half(number);
	CoinFlip();
}