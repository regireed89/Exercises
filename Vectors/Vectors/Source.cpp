#include <iostream>
#include <Math.h>
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

	Vector2 add(Vector2 other)
	{
		
		float a = this->x + other.x;
		float b = this->y + other.y;
		
		return Vector2(a, b);
	}

	Vector2 subtract(Vector2 other) 
	{
		float a = x - other.x;
		float b = y - other.y;

		return Vector2(a, b);
	}

	Vector2 ScalarMult(Vector2 mult)
	{
		float a = x * mult.x;
		float b = y * mult.y;

		return Vector2(a, b);
	}

	Vector2 Magnitude(Vector2 A)
	{
		float a = sqrt(x * A.x);
		float b = sqrt(x * A.x);

		return Vector2(a, b);
	}

	Vector2 Normal(Vector2 A)
	{

	}

	Vector2 DotProduct(Vector2 A)
	{

	}

};

int main()
{
	Vector2 A = Vector2(4.5, 8.2);
	Vector2 B = Vector2(6.3, 2.4);
	Vector2 C = A.add(B);
	Vector2 D = A.subtract(B);
	Vector2 E = A.ScalarMult(B);
	Vector2 F = A.Magnitude(B);
	Vector2 G = A.Normal(B);
	Vector2 H = A.DotProduct(B);


	system("pause");
	return 0;

}