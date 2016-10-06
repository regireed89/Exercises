#include <iostream>
using namespace std;
// Character Arrays Exercise
int main()
{
	cout << "enter your first and last name" << endl;
	char Name[5][14] = "";
	cin.getline(Name, 14)(Name, 5);
	for (char y = 5; y >= 0; y--)
		for (char x = 14; x >= 0; x--)
			cout << Name[y][x];
	system("pause");
}