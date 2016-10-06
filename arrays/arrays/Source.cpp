#include <iostream>
int main()
{



	//1
	//int numbers[10] = { 0, 0, 1, 0, 0, 1, 0, 0, 1, 1 };
	//for (int x = 0; x < 10; x++)
	//	std::cout << numbers[x] << " ";
	//system("pause");  //VALID

	//	int matrix[5] = { 1, 2, 3, 4, 5, 6, 7, };
	//for (int y = 0; y < 5; y++)
	//	std::cout << martix[y] << "";
	//system("pause"); INALID.TO MANY VALUES.

	///*double radii[10] = (3.2, 4.7};
	//for (int z = 0; z < 10; z++)
	//std::cout << radii[z] << "";
	//system("pause"); INVALID.

	//int table[7] = { 2, , , 27, ,45, 39 };
	//for (int r = 0; r < 7; r++)
	//std::cout << table[r] << "";
	//system("pause"); INVALID. MISSING VALUES.*/

	///*char codes[] = { 'A', 'X', '1', '2', 's' };
	//for (int q = 0; q < 5; q++)
	//std::cout << codes[q] << "";
	//system("pause"); VALID*/

	///*int blanks[];
	//for (int h = 0; h < 0; h++)
	//std::cout << blanks[h] << ""; INVALID. NO INTERGER OR ELEMENTS*/

	//int collection[-20];
	//for (int k = 0; k < -20; k++)
	//	std::cout << collection[k] << "";
	//system("pause"); INVALID. WONT ACCEPT NEGATIVES AS AN INTERGER.

	///*int hours[3] = 8, 12, 16;
	//for (int w = 0; w < 3; w++)
	//std::cout << hours[w] << "";
	//system("pause"); INVALID. NO SCOPE OPERATORS.*/
	//2
	//	/*A)
	//	int values[] = { 2, 6, 10, 14 };
	//	for (int f = 0; f < 1; f++)
	//	std::cout << values[2] << "";
	//	system("pause"); WILL DISPLAY 10
	//B)
	//	int values[] = { 2, 6, 10, 14 };
	//	for (int f = 0; f < 1; f++)
	//	std::cout << ++values[0] << "";
	//	system("pause"); WILL DISPLAY 3
	//C)
	//	int values[] = { 2, 6, 10, 14 };
	//	for (int f = 0; f < 1; f++)
	//	std::cout << values[1]++ << "";
	//	system("pause"); WILL DISPLAY 6*/
	//	/* D)
	//		int values[] = { 2, 6, 10, 14 };
	//		for (int x = 2; x < 3; x++)
	//			std::cout << values[++x] << "";
	//			system("pause"); WILL DISPLAY 14
	//	*/
	//	/*int values[] = { 2, 6, 10, 14 };
	//	for (int x = 0; x < 1; x++)
	//		std::cout << values[4] << "";
	//	system("pause"); WILL DISPLAY 85899460*/

	//	3
	//	/*int data[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	//	for (int x = 0; x < 11; x++)
	//		std::cout << data[x] << "";
	//		system("pause");
	//*/

	//4
	///*int jesus[5] = { 2, 3, 4, 5, 6 };
	//for (int x = 4; x >= 0; x--)
	//	std::cout << jesus[x] << "";
	//system("pause");*/

	//5

	///*int pickle[10] = { 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };
	//for (int x = 9; x < 19; x++)
	//
	//	for (int y = 0; x <= 10; x++)
	//
	//		std::cout << pickle[x] << pickle[y] << "";
	//system("pause");*/

	//6



	
		int orange[3][3] = { {1, 2, 3}, 

		                    {4, 5, 6}, 

						    {7, 8, 9}};
		
		for (int t = 0; t < 3; t++)
		{
			for (int v = 0; v < 3; v++)
			{
				std::cout << orange[t][v] << " ";
			}
			std::cout << std::endl;
		}
       system("pause");
	


	/*7

	int days[29][5];*/


//int health[5] = { 100, 100, 100, 100, 100, };
//	int x = 0;
//	
//	int inputNum = 0;
//	while (inputNum < 5)
//
//	{
//		std::cout << "enter a number ('0'-'4') \n";
//		std::cin >> x;
//		inputNum++;
//		
//		if (x == 0)
//		{		
//			if (health[0] <= 20)
//			{
//				health[0] = 0;
//				std::cout << "dead" << "\n";				
//			}
//			else
//			{
//				health[0] -= 40;
//				std::cout << health[0] << "\n";
//			}
//		}
//		else if (x == 1)
//		{
//			if (health[1] <= 20)
//			{
//				health[1] = 0;
//				std::cout << "dead" << "\n";
//			}
//			else
//			{
//				health[1] -= 40;
//				std::cout << health[1] << "\n";
//			}
//		}
//		else if (x == 2)
//		{
//			if (health[2] <= 20)
//			{
//				health[2] = 0;
//				std::cout << "dead" << "\n";
//			}
//			else
//			{
//				health[2] -= 40;
//				std::cout << health[2] << "\n";
//			}
//		}
//		else if (x == 3)
//		{
//			if (health[3] <= 20)
//			{
//				health[3] = 0;
//				std::cout << "dead" << "\n";
//			}
//			else
//			{
//				health[3] -= 40;
//				std::cout << health[3] << "\n";
//			}
//		}
//		else if (x == 4)
//		{
//			if (health[4] <= 20)
//			{
//				health[4] = 0;
//				std::cout << "dead" << "\n";
//			}
//			else
//			{
//				health[4] -= 40;
//				std::cout << health[4] << "\n";
//			}
//		}
//		else
//		{
//			std::cout << "ERROR" << "\n";
//		}
//		
//		
//	}
//	
//	std::cout <<  health[0], "health";
//
//	std::cout <<  health[1], "health";
//
//	std::cout <<  health[2], "health";
//
//	std::cout <<  health[3], "health";
//
//	std::cout <<  health[4], "health";
//




//9

//int Eat[3][7] = {}




system("pause");
	



}