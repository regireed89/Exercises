#include<iostream>
#include "Header.h"
using namespace std;


int main()
{

	linkedListType<int>*yaboy = new linkedListType<int>;


	yaboy->insertFirst(34);
	yaboy->insertFirst(45);
	yaboy->print();

}