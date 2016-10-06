#include <iostream>
using namespace std;

int main()
{
	//1. Look at the following definitions and initializations:
	char c = 'T', d = 'S';

	char *p1 = &c;

	char *p2 = &d;

	char *p3;

//	If the address of c is 6940, the address of d is 9772, and the address of e is 2224.
//	What will be printed when the following statements are executed sequentially ?

	p3 = &d;

	cout << "*p3 = " << *p3 << endl; // *p3 = S

	p3 = p1;

	cout << "*p3 = " << *p3; // *p3 = T

	cout << ", p3 = " << p3 << endl; // , p3 = T

	*p1 = *p2;

	cout << "*p1 = " << *p1; // p1 = S

	cout << ", p1 = " << p1 << endl; // , p1 = S

	system("pause");




//	2. Consider the following statements :

	int *p;

	int i;

	int k;

	i = 42;

	k = i;

	p = &i;


//	3. After these statements, which of the following statements will change the value of i to 75 ?

//	A.k = 75;

//	B. *k = 75;

//	C.p = 75;

//  D. *p = 75;  CORRECT

//	E.Two or more of the answers will change i to 75.



//  4. Explain the error

//	char c = 'A';
//	double *p = &c;

//   pointer must be the same variable type as what is being referenced



//  5. 
	

		char blocks[3] = { 'A','B','C' };
		char *ptr = &blocks[0];  
		char temp;  


		temp = blocks[0]; //A
		temp = *(blocks + 2); //C
		temp = *(ptr + 1); //B
		temp = *ptr; //A


		ptr = blocks + 1;
		temp = *ptr;
		temp = *(ptr + 1);


		ptr = blocks;
		temp = *++ptr;
		temp = ++*ptr;
		temp = *ptr++;
		temp = *ptr;

		return 0;

	

}