#include <iostream>
#include "Header.h"
using namespace std;

struct nodeType
{
	int info;
	nodeType*link;
};

template<typename Type>
class LinkedList
{
protected:
<<<<<<< HEAD
	int count = 0;
	nodeType<Type>*first;
	nodeType<Type>*last;
public:

	bool Add(const&Type);
	LinkedList() {};
	Type front()const;
	int length()const;
	void Print();

};
=======
	int count;
	nodeType<Type> *first;
	nodeType<Type> *last;

public:
	bool Add(const &Type);
	LinkedList() {};
	const Type front();
	const int length();
	void print();
};

template<typename Type>
bool LinkedList<Type>::Add(const Type &temp)
{


	if (count == 0)
	{
		first->info = node;
		last->info = node;
		first->link = nullptr;
		last->link = nullptr;
		count++;
	}
	else 
	{
		nodeType<Type> *node = new nodeType<Type>;
		node = first;
		last->link = node;
		last = node;
		if (count == 1)
		{
			first->link = node;
		}
		last->info = temp;
		last->link = nullptr;
		count++;

	}
	return false;
	
}

template<typename Type>
const Type LinkedList<Type>::front()
{
	return count;
}
>>>>>>> origin/master

template<typename Type>
const int LinkedList<Type>::length()
{
	return count;
}

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
		cout << head->info;//print out member variable 
		head = head->link;//assigning head to a new link each loop
	}

	Add(3);
	Add(6);


	cout << Add << endl;*



	system("pause");
	return 0;

}


