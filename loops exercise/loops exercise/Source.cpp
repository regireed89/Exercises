#include <iostream> 
using namespace std;

int main()
{
	cout << "Modify the for loop to include 0 and include 100 "<<endl;
	{
	cout<<"while"<<endl;
		int x;
		x = 100;
		while (x >= 0)
		{

			cout << x<<" ";
			x -= 2;
		}
		cout<<endl;
	}

	{
	cout<<"for"<<endl;
		for (int x = 100; x >= 0; x-=2)
		{
			cout << x<<" ";
		}
		cout << endl;
	}



	cout << "Modify the for loop to include 0 and not 100" << endl;
	{
		cout << "while"<<endl;
		int x;
		x = 100;

		while (x >  0)
		{
			x -= 1;
			cout << x<<" ";
		}
		x += 1;
		cout << endl;
	}

	{
		cout << "for" << endl;
		int x = 100;
		for (x = 100-1; x >= 0; x-=1)
		{
			
			cout << x<<" ";

		}
		cout<<endl;
	}



	cout << "Modify the for loop to not include 0 and include 100 "<<endl;
	{
	cout << "while" << endl;
		int x;
		x = 100;

		while (x > 0)
		{

			cout << x<<" ";
			x -= 1;
		}
		cout << endl;
	}
	{
	cout<<"for"<<endl;
		for (int x = 100; x > 0; x--)
		{
			cout << x<<" ";
		}
		cout << endl;
	}

	cout << "Modify the for loop to decrement by 2" << endl;
	{
	cout<<"while"<<endl;
		int x;
		x = 100;

		while (x >  0)
		{

			x -= 2;
			cout << x<<" ";
		}
		cout << endl;
	}
	{
		cout<<"for"<<endl;
		for (int x = 100; x >= 0; x-=2)
		{

			cout << x << " ";
		}
		cout << endl;
	}




	/*	{
			int y = 0;

			while (y <= 100)
			{
				y += 1;
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

		}*/
		/*for (int y = 0; y < 100; y++)
		{

			y += 1;
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

		}*/




		//	int z;
		//	int sum = 0;
		//	z = 0;
		//	while (z < 1000)
		//	{
		//		z += 1;
		//		if (z % 3 == 0)
		//		{
		//			cout << z << " is a multiple of 3" << endl;
		//			sum += z;
		// 
		//		}
		// 
		//	 	if (z % 5 == 0)
		//		{
		//			cout << z << " is a multiple of 5" << endl;
		//			sum += z;
		//		}
		//		cout << "sum @ loop:" << z << " is " << sum << endl;
		//
		//
		//		//266333
		//}
	//		int sum = 0;
	//		for (int z = 0; z < 1000; z++)
	//		{
	//			
	//					if (z % 3 == 0)
	//					{
	//						cout << z << " is a multiple of 3" << endl;
	//						sum += z;
	//			 
	//					}
	//			 
	//				 	if (z % 5 == 0)
	//					{
	//						cout << z << " is a multiple of 5" << endl;
	//						sum += z;
	//					}
	//					cout << "sum @ loop:" << z << " is " << sum << endl;
	//
	//
	//		}


	system("pause");

}


