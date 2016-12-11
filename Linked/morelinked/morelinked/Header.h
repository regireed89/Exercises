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
	bool operator== (linkedListIterator<Type>& list)const
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

public:
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
		return true;
	}
	void insertFirst(const Type& nodeInfo)
	{
		nodeType<Type> *node = new nodeType<Type>;
		node = nodeInfo;
		if(first == NULL)//acomodate for empty list
		{
			 first = node;
			 last = node;
			 first->link = NULL;
			last->link = NULL;			
		}
		else
		{
			nodeType<Type> *temp;
			temp = first;
			first = node;
			first->link = temp;					
		}
		count++:
	}
	void insertLast(const Type& nodeInfo)
	{
		nodeType<Type> *node = new nodeType<Type>;
		node = nodeInfo;
		if (first == NULL)//acomodate for empty list
		{
			first = node;
			last = node;
			first->link = NULL;
			last->link = NULL;
		}
		else
		{
			nodeType<Type> *temp;
			temp = first;
			first = node;
			temp->link = last;
		}
		count++:
	}

	void deleteNode(const Type& nodeInfo){}

	linkedListIterator<Type> begin()
	{
		current = first;
		return current;
	}
	linkedListIterator<Type> end()
	{
		current = last;
		return last;
	}
	linkedListType()
	{
		first = new linkedListType<Type>;
		last = new linkedListType<Type>;
		count = 0;
	}

	linkedListType(const linkedListType<Type> otherList) {};
};


