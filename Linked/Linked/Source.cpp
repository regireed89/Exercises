#include <iostream>
using namespace std;

template<typename Type>
class Node
{
protected:
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


int main()
{

}