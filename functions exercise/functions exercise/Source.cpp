#include <iostream>
float smlValue(float a, float b)
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
int main()
{
	float a;
	float b;
	smlValue(a, b);
}
//void PrintInteger(int variable)
//
//{
////
////	std::cout << variable << std::endl;
////
////}
////
////int main()
////
////{
////
////	int the_variable = 1;
////
////	PrintInteger(the_variable);
////
////	{
////
////		PrintInteger(the_variable);
////
////		int the_variable = 2;
////
////		PrintInteger(the_variable);
////
////		{
////
////			PrintInteger(the_variable);
////
////			int the_variable = 3;
////
////			PrintInteger(the_variable);
////
////		}
////
////		PrintInteger(the_variable);
////
////	}
////
////	PrintInteger(the_variable);
////
//// /*
////	    1
////		1
////		2
////		2
////		3
////		2
////		1*/
//// 
////
//}