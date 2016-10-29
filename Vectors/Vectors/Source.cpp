#include <iostream>
#include <Math.h>
#include <cassert>
using namespace std;

class Vector2
{

private:

	float x, y;

public:
	Vector2(float a, float b)
	{
		x = a;
		y = b;
	}

	Vector2 add(Vector2 &other)
	{

		float a = this->x + other.x;
		float b = this->y + other.y;

		return Vector2(a, b);
	}

	Vector2 subtract(Vector2 &other)
	{
		float a = this->x - other.x;
		float b = this->y - other.y;

		return Vector2(a, b);
	}

	Vector2 ScalarMult(Vector2 &mult)
	{
		float a = this->x * mult.x;
		float b = this->y * mult.y;

		return Vector2(a, b);
	}

	float Magnitude()
	{
		 float a = sqrt(x*x + y*y);
		

		 return a;
	}

	float Normalize()
	{
		float a = x / Magnitude();
		float b = y / Magnitude();
		
		return a, b;
	}

	float DotProduct(Vector2 &other)
	{
		float a = this->x * other.x;
		float b = this->y * other.y;
		float c = a + b;

		return c;
	}

};

int main()
{
	Vector2 A = Vector2(4, 5);
	Vector2 B = Vector2(6, 2);
	Vector2 C = A.add(B);
	Vector2 D = A.subtract(B);
	Vector2 E = A.ScalarMult(B);
	float F = A.Magnitude();
	float G = A.Normalize();
	float H = A.Normalize().DotProduct(B.Normalize());
	
	assert(1 + 1 == 2);


	system("pause");
	return 0;

}