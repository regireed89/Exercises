#include <iostream>
using namespace std;

class Vector2
{

private:
	
	float x, y;

public:
	Vector2(float a, float b) : x(a), y(b) {}

	void add(Vector2 A)
	{
		x += A.x;
		y += A.y;
	}
	void subtract(Vector2 A) 
	{
		x -= A.x;
		y -= A.y;
	}
	void ScalarMult(float mult)
	{
		x *= mult;
		y *= mult;
	}
};











int main()
{
	
	int add(7);



}