#pragma once
#include<iostream>

template<typename Type>
struct nodeType
{
	Type info;
	nodeType<Type> *link;
};

template<typename Type>
class linkedListIterator
{
private:
	nodeType<Type> * current;
public:

	linkedListIterator()
	{
		current = NULL;
	}
	linkedListIterator(nodeType<Type> *node)
	{
		current = node;
	}
	Type operator*()
	{
		return current->info;	
	}
	linkedListIterator<Type> operator++()
	{

		
		
	}
	bool operator==(linkedListIterator<Type>& list)const;
	{



	}








};

