#include <iostream>
using namespace std;

int main()
{

	/*int x;
	x = 100;

	while (x == 100)
		
		x -= 2;
		cout << x;*/



		/*int y;

		for (y = 0; y <= 100; y++)
		{
			if (y % 3 == 0)
			{
				cout << "Fizz";
			}
			else if (y % 5 == 0)
			{
				cout << "Buzz";
			}
			else if (y % 3 == 0 && y % 5 == 0)
			{
				cout << "FizzBuzz";
			}
			else
			{
				cout << y;
			}

			std::cout << std::endl;
		}
*/

	int z;
	int sum=0;
 
	for (z = 0; z < 1000; z++)
	{
		if (z % 3 == 0)
		{
			cout << z << " is a multiple of 3" << endl;
			sum += z;

		}

		if (z % 5 == 0)
		{
			cout << z << " is a multiple of 5" << endl;
			sum += z;
		}
		cout << "sum @ loop:" << z << " is " << sum << endl;;
		
			
		//266333
			
		

		
	}
		system("pause");
	
}


