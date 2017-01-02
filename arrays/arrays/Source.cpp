#include <iostream>
using namespace std;
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
	//	std::cout << values[2] << "";
	//	system("pause"); WILL DISPLAY 10
	//B)
	//	int values[] = { 2, 6, 10, 14 };
	//	std::cout << ++values[0] << "";
	//	system("pause"); WILL DISPLAY 3
	//C)
	//	int values[] = { 2, 6, 10, 14 };
	//	std::cout << values[1]++ << "";
	//	system("pause"); WILL DISPLAY 6*/
	//	D)
	//	int values[] = { 2, 6, 10, 14 };
	//	std::cout << values[++x] << "";
	//	system("pause"); WILL DISPLAY 14
	//	
	//	E)
	//	/*int values[] = { 2, 6, 10, 14 };
	//	for (int x = 0; x < 1; x++)
	//		std::cout << values[4] << "";
	//	system("pause"); WILL DISPLAY 85899460*/

		//3
	/*{
		int data[10];
		int i;
		for (i = 0; i < 10; i++)
		{
			for (int x = 10; x > 0; x--)
			{
				data[i] = x;
				i++;
			}
		}
		system("pause");
	}*/





	//4
	//int jesus[5] = { 2, 3, 4, 5, 6 };
	//for (int x = 4; x >= 0; x--)
	//	std::cout << jesus[x] << "";
	//system("pause");

	//5

	/*int pickle[10] = { 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };
	int large = pickle[0];
	int	small = pickle[0];
	for (int x = 0; x < 10; x++)
	{
		if (pickle[x] > large)
			large = pickle[x];
		else if (pickle[x] < small)
			small = pickle[x];
	}
			std::cout << large <<" "<< small;
	system("pause");*/

	//6




	/*	int orange[3][3] = { {1, 2, 3},

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
	   system("pause");*/



	   //7
	{
		int row = 0;
		int column = 0;
		int count = 0;
		int r = 0;
		int c = 0;
		int test[29][5];

		for (int i = 0; i < 29; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				row += test[i][j];
				count++;
				if (count == 5)
				{
					r++;
					cout << "sum of row " << r << " is " << row << endl;
					count = 0;
					row = 0;
				}
			}
		}

		for (int j = 0; j < 5; j++)
		{
			for (int i = 0; i < 29; i++)
			{
				column += test[i][j];
				count++;
				if (count == 29)
				{
					c++;
					cout << "sum of column " << c << " is " << column << endl;
					count = 0;
					column = 0;
				}
			}
		}
		system("pause");
	}


	//8
	int health[5] = { 100, 100, 100, 100, 100, };
	int x = 0;

	int inputNum = 0;
	while (inputNum < 5)

	{
		std::cout << "enter a number ('0'-'4') \n";
		std::cin >> x;
		inputNum++;

		if (x == 0)
		{
			if (health[0] <= 20)
			{
				health[0] = 0;
				std::cout << "dead" << "\n";
			}
			else
			{
				health[0] -= 40;
				std::cout << health[0] << "\n";
			}
		}
		else if (x == 1)
		{
			if (health[1] <= 20)
			{
				health[1] = 0;
				std::cout << "dead" << "\n";
			}
			else
			{
				health[1] -= 40;
				std::cout << health[1] << "\n";
			}
		}
		else if (x == 2)
		{
			if (health[2] <= 20)
			{
				health[2] = 0;
				std::cout << "dead" << "\n";
			}
			else
			{
				health[2] -= 40;
				std::cout << health[2] << "\n";
			}
		}
		else if (x == 3)
		{
			if (health[3] <= 20)
			{
				health[3] = 0;
				std::cout << "dead" << "\n";
			}
			else
			{
				health[3] -= 40;
				std::cout << health[3] << "\n";
			}
		}
		else if (x == 4)
		{
			if (health[4] <= 20)
			{
				health[4] = 0;
				std::cout << "dead" << "\n";
			}
			else
			{
				health[4] -= 40;
				std::cout << health[4] << "\n";
			}
		}
		else
		{
			std::cout << "ERROR" << "\n";
		}


	}

	std::cout << "player 1 has " << health[0] << " health" << endl;

	std::cout << "player 2 has " << health[1] << " health" << endl;

	std::cout << "player 3 has " << health[2] << " health" << endl;

	std::cout << "player 4 has " << health[3] << " health" << endl;

	std::cout << "player 5 has " << health[4] << " health" << endl;





	//9

	int dragon[3][7] = { {1234567},
	{1234567},
	{1234567} };

	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < 29; i++)
		{
			column += dragon[i][j];
			count++;
			if (count == 29)
			{
				c++;
				cout << "sum of column " << c << " is " << column << endl;
				count = 0;
				column = 0;
			}
		}
	}





	system("pause");




}