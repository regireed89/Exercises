#include <iostream>
#include <cstdlib>

//void PrintInteger(int variable)
//{
//	std::cout << variable << std::endl;
//}
//int main()
//{
//	int the_variable = 1;
//	PrintInteger(the_variable);
//	{
//		PrintInteger(the_variable);
//		int the_variable = 2;
//		PrintInteger(the_variable);
//		{
//			PrintInteger(the_variable);
//			int the_variable = 3;
//			PrintInteger(the_variable);
//		}
//		PrintInteger(the_variable);
//	}
//	PrintInteger(the_variable);
//	    1
//		1
//		2
//		2
//		3
//		2
//		1
//}

//#2
float smlValue(float a, float b)
{
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
	

	float result = number / 2;

	return result;
}

//#5
void CoinFlip()
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
		std::cout << "COIN WAS HEADS" << std::endl;
	}
	if (f == 2)
	{
		std::cout << "COIN WAS TAILS" << std::endl;
	}
	char w = (x == f) ? printf("YOU WIN") : printf("YOU LOSE ");
	std::cout << w;

system("pause");
system("cls");
}
//#6
//int sum(int x, int y)
//{
//	int result;
//	result = x + y;
//	//no return value
//}

//int sum(int n)
//{
//	if (0 == n)
//		return 0;
//	else
//		n = n + n;//adding n to its self then assigning the sum to its self	
//}

//int main()
//{
//	double x = 13.6;
//	std::cout << "square of 13.6 = " << square(x) << std::endl; //calling function before function definition
//	//passing in a double when function takes in a float
//}
//int square(int x) 
//{
//	return x * x; 
//}

//7
int SumTo(int N)
{
	int y = 0;
	for (int i = 1; i <= N; i++)
	{
		y += i;
	}
		std::cout << y;
	
	return y;
	system("pause");
}


int main()
{
	
	//smlValue(10, 15);

	//Half(16.721f);
	//CoinFlip();
	SumTo(15);
	
}