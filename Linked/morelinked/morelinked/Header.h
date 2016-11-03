#pragma once
#include<iostream>
#include<cassert>

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

		current = current->link;

	}
	bool operator==(linkedListIterator<Type>& list)const;
	{
		if (current == current)
		{
			return true;
		}
		else
		{
			return false;
		}

	}

	bool operator!=(linkedListIterator<Type>& list)const
	{
		if (current != current)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

};


template<typename Type>
class linkedListType
{
protected:
	int count;
	nodeType<Type> *first;
	nodeType<Type> *last;
	nodeType<Type> *node;
public:
	const linkedListType<Type>& operator=(const linkedListType<Type>&otherList) {};

	void initializeList()
	{
		first = new linkedListType<Type>;
		last = new linkedListType<Type>;
		count = 0;
	}

	bool isEmptyList()
	{
		if (first == NULL)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	void print()
	{
		while (first != nullptr)
		{
			cout << first->info;

		}
	}

	int length()const
	{
		return count;
	}

	void destroyList()
	{
		first;
		last = NULL;
		count = 0;
	}

	Type front()const
	{
		assert(count != 0);
		return first->info;
	}

	Type back()const
	{
		assert(count != 0);
		return last->info;
	}

	bool search(const Type& nodeInfo)
	{

	}

	void insertFirst(const Type& nodeInfo)
	{
			first->info = node;
			last->info = node;		
			last->link = nullptr;
			count++;
	}

};


