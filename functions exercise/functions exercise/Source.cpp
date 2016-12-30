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
//int SumTo(int N)
//{
//	int y = 0;
//	for (int i = 1; i <= N; i++)
//	{
//		y += i;
//	}
//		std::cout << y;
//	
//	return y;
//	system("pause");
//}

//8
//int SumArray(int mine[], int a)
//{
//	int y = 0;
//	for (int i = 0; i < a; i++)
//	{
//		mine[i];
//		for (int j = mine[i]; j <= mine[i]; j++)
//		{
//			y += j;
//		}
//	}
//	std::cout << y;
//
//	return y;
//	system("pause");
//}

//9
int MinInArray(int a[], int b)
{
	int small = a[0];
	for (int i = 0; i < b; i++)
	{
		if (a[i] < small)
		{
			small = a[i];
		}
	}
	std::cout << small;
	return small;
}

//10
int MultiplyByIndex(int firstarr[], int a, int secondarr[])
{
	int i;
	for (i = 0; i < a; i++)
	{
		firstarr[i];
		secondarr[i];
		for (int j = firstarr[i]; j <= firstarr[i]; j++)
		{
			int y = j*i;
			secondarr[i] = y;
		}
		std::cout << secondarr[i];
	}
	return secondarr[i];
}
	
//11
int num11(int input1[], int input2[], int x, int output[])
{
	int i;
	for (i = 0; i < x; i++)
	{
		input1[i];
		input2[i];
		for (int j = input1[i]; j <= input1[i]; j++)
		{
			for (int q = input2[i]; q <= input2[i]; q++)
			{
				int y = j + q;
				output[i] = y;
			}
		}
		std::cout << output[i];
	}
	return output[i];

}

//12
int num12(int input1[], int a)
{
	int i;
	for (i = 0; i < a; i++)
	{
		input1[i];
		for (int j = input1[i]; j <= input1[i]; j++)
		{
			int y = j + input1[i];
			input1[i] = y;
		}
		std::cout << input1[i];
	}
	return input1[i];
}

int main()
{

	//smlValue(10, 15);

	//Half(16.721f);
	//CoinFlip();
	//SumTo(15);
	//int ded[5] = { 7,3,2,4,9 };
	//SumArray(ded, 5);
	//int bud[7] = { 10,15,7,4,13,19,8};
	//MinInArray(bud, 7);
	//int first[7] = { 10,15,7,4,13,19,8 };
	//int second[7] = {};
	//MultiplyByIndex(first, 7, second);
	//int input1[5] = { 1,2,3,4,5 };
	//int input2[5] = { 6,7,8,8,9 };
	//int output[5] = {};
	//num11(input1, input2, 5, output);
	int i[4] = { 3,2,4,7 };
	num12(i, 4);

	system("pause");
}