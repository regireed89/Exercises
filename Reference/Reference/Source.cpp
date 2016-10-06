#include <iostream>
using namespace std;


int main()
{
	int pickle = 9000;
	int &Ref = pickle;

	cout << pickle << endl;
	cout << Ref << endl;

	pickle = 34;

	cout << pickle << endl;
	cout << Ref << endl;
	system("pause");





}