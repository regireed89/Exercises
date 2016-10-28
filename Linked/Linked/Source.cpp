#include <iostream>
using namespace std;


struct nodeType
{
	int info;
	nodeType*link;

};


int main()
{

	nodeType*head;//pointer of type nodeType
	nodeType a, b, c;
	a.info = 0;
	b.info = 2;
	c.info = 4;
	
	
	                   
	head = new nodeType;//allocate memory for head pointer

	head = &c;
	c.link = &b;
	b.link = &a;
	a.link = nullptr;
	
	while (head != nullptr)//continue until head is equal to nullptr
	{
		cout << head->info ;//print out member variable 
		head = head->link;//assigning head to a new link each loop
	}

	system("pause");
}