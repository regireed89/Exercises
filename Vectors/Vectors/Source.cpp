#include <iostream>
#include <Math.h>
#include <cassert>
using namespace std;

class Vector2
{

private:

	float x, y;

public:
	Vector2() {};
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
class Vector3
{

private:

	float x, y, z;

public:
	Vector3() {};
	Vector3(float a, float b, float c)
	{
		x = a;
		y = b;
		z = c;
	}

	Vector3 add(Vector3 &other)
	{

		float a = this->x + other.x;
		float b = this->y + other.y;
		float c = this->z + other.z;

		return Vector3(a, b, c);
	}

	Vector3 subtract(Vector3 &other)
	{
		float a = this->x - other.x;
		float b = this->y - other.y;
		float c = this->z - other.z;
		return Vector3(a, b, c);
	}

	Vector3 ScalarMult(Vector3 &mult)
	{
		float a = this->x * mult.x;
		float b = this->y * mult.y;
		float c = this->z * mult.z;

		return Vector3(a, b, c);
	}

	float Magnitude()
	{
		float a = sqrt(x*x + y*y + z*z);


		return a;
	}

	float Normalize()
	{
		float a = x / Magnitude();
		float b = y / Magnitude();
		float c = z / Magnitude();

		return a, b, c;
	}

	float DotProduct(Vector3 &other)
	{
		float a = this->x * other.x;
		float b = this->y * other.y;
		float c = this->z * other.z;

		float product = a + b + z;

		return product;
	}

};

class Vector4
{
private:
	float x, y, z, w;
public:
	Vector4(float a, float b, float c, float d) 
	{
		x = a;
		y = b;
		z = c;
		w = d;
	}

	Vector4 add(Vector4 &other)
	{
		float a = this->x + other.x;
		float b = this->y + other.y;
		float c = this->z + other.z;
		float d = this->w + other.w;

		return Vector4(a, b, c, d);
	}
	Vector4 subtract(Vector4 &other)
	{
		float a = this->x - other.x;
		float b = this->y - other.y;
		float c = this->z - other.z;
		float d = this->w - other.w;

		return Vector4(a, b, c, d);
	}

	Vector4 ScalarMult(Vector4 &mult)
	{
		float a = this->x * mult.x;
		float b = this->y * mult.y;
		float c = this->z * mult.z;
		float d = this->w * mult.w;

		return Vector4(a, b, c, d);
	}
	float Magnitude()
	{
		float a = sqrt(x*x + y*y + z*z + w*w);


		return a;
	}

	float Normalize()
	{
		float a = x / Magnitude();
		float b = y / Magnitude();
		float c = z / Magnitude();
		float d = w / Magnitude();

		return a, b, c, d;
	}

	float DotProduct(Vector4 &other)
	{
		float a = this->x * other.x;
		float b = this->y * other.y;
		float c = this->z * other.z;
		float d = this->w * other.w;

		float product = a + b + c + d;

		return product;
	}


};

class Matrix2D
{
public:


};





int main()
{
	Vector2 Vec2A = Vector2(4, 5);
	Vector2 Vec2B = Vector2(6, 2);
	Vector2 Vec2Add = Vec2A.add(Vec2B);
	Vector2 Vec2Sub = Vec2A.subtract(Vec2B);
	Vector2 Vec2Mult = Vec2A.ScalarMult(Vec2B);
	float Vec2AMag = Vec2A.Magnitude();
	float Vec2BMag = Vec2B.Magnitude();
	float Vec2ANorm = Vec2A.Normalize();
	float Vec2BNorm = Vec2B.Normalize();
	float Vec2Dot = Vec2A.DotProduct(Vec2B);
	

	Vector3 Vec3A = Vector3(4, 5, 6);
	Vector3 Vec3B = Vector3(6, 2, 9);
	Vector3 Vec3Add = Vec3A.add(Vec3B);
	Vector3 Vec3Sub = Vec3A.subtract(Vec3B);
	Vector3 Vec3Mult = Vec3A.ScalarMult(Vec3B);
	float Vec3KMag = Vec3A.Magnitude();
	float Vec3LMag = Vec3B.Magnitude();
	float Vec3KNorm = Vec3A.Normalize();
	float Vec3LNorm = Vec3B.Normalize();
	float Vec3Dot = Vec3A.DotProduct(Vec3B);


	


	system("pause");
	return 0;

}