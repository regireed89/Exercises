#include <iostream>
#include <Math.h>
#include <cassert>
#include<stdio.h>
using namespace std;
class Vector2
{
public:

	float x, y;
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

	Vector2 Normalize()
	{
		Vector2 vec = Vector2(x / Magnitude(), y / Magnitude());

		return vec;
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

	

public:
	float x, y, z;
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

	Vector3 Normalize()
	{
		Vector3 vec = Vector3(x / Magnitude(), y / Magnitude(), z / Magnitude());

		return vec;
	}

	float DotProduct(Vector3 &other)
	{
		float a = this->x * other.x;
		float b = this->y * other.y;
		float c = this->z * other.z;

		float product = a + b + z;

		return product;
	}

	Vector3 crossProduct(Vector3 &other)
	{
		Vector3 vec = Vector3(y * other.z - z * other.y, x * other.z - z * other.z, x * other.y - y * other.x);

		return vec;
	}





};
class Vector4
{
private:
	
public:
	float x, y, z, w;
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

	Vector4 Normalize()
	{
		Vector4 vec = Vector4(x / Magnitude(), y / Magnitude(), z / Magnitude(), w / Magnitude());

		return vec;
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
class Matrix2
{
private:
	int * m_data;
public:

	Matrix2() {};
	Matrix2(int a, int b, int c, int d)
	{
		m_data = new int[4];
		m_data[0] = a;
		m_data[1] = b;
		m_data[2] = c;
		m_data[3] = d;
	};
	Matrix2 Multiply(Matrix2 &other)
	{
		Matrix2 Mat = Matrix2(m_data[0] * other.m_data[0] + m_data[1] * other.m_data[2],
			m_data[0] * other.m_data[1] + m_data[1] * other.m_data[3],
			m_data[2] * other.m_data[0] + m_data[3] * other.m_data[2],
			m_data[2] * other.m_data[1] + m_data[3] * other.m_data[3]);

		return Mat;
	}
	Vector2 VecxMat(const Vector2 &vec)
	{
		float a = m_data[0] * vec.x + m_data[1] * vec.y;
		float b = m_data[2] * vec.x + m_data[3] * vec.y;

		return Vector2(a, b);
	}



	void PirntStuff()
	{
		cout << "2D Matrix" << endl;
		cout << m_data[0] << " " << m_data[1] << "\n" << m_data[2] << " " << m_data[3] << endl;
		cout << "___" << endl;
	}

};
class Matrix3
{
private:
	int*m_data;
public:
	Matrix3() {};
	Matrix3(int a, int b, int c, int d, int e, int f, int g, int h, int i)
	{
		m_data = new int[9];
		m_data[0] = a;
		m_data[1] = b;
		m_data[2] = c;
		m_data[3] = d;
		m_data[4] = e;
		m_data[5] = f;
		m_data[6] = g;
		m_data[7] = h;
		m_data[8] = i;
	}
	Matrix3 Multiply(Matrix3 &other)
	{
		Matrix3 Mat = Matrix3(m_data[0] * other.m_data[0] + m_data[1] * other.m_data[3] + m_data[2] * other.m_data[6],
			m_data[0] * other.m_data[1] + m_data[1] * other.m_data[4] + m_data[2] * other.m_data[7],
			m_data[0] * other.m_data[2] + m_data[1] * other.m_data[5] + m_data[2] * other.m_data[8],
			m_data[3] * other.m_data[0] + m_data[4] * other.m_data[3] + m_data[5] * other.m_data[6],
			m_data[3] * other.m_data[1] + m_data[4] * other.m_data[4] + m_data[5] * other.m_data[7],
			m_data[3] * other.m_data[2] + m_data[4] * other.m_data[5] + m_data[5] * other.m_data[8],
			m_data[6] * other.m_data[0] + m_data[7] * other.m_data[3] + m_data[8] * other.m_data[6],
			m_data[6] * other.m_data[1] + m_data[7] * other.m_data[4] + m_data[8] * other.m_data[7],
			m_data[6] * other.m_data[2] + m_data[7] * other.m_data[5] + m_data[8] * other.m_data[8]);

		return Mat;
	}



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
	Vector2 Vec2ANorm = Vec2A.Normalize();
	Vector2 Vec2BNorm = Vec2B.Normalize();
	float Vec2Dot = Vec2ANorm.DotProduct(Vec2BNorm);


	Vector3 Vec3A = Vector3(4, 5, 6);
	Vector3 Vec3B = Vector3(6, 2, 9);
	Vector3 Vec3Add = Vec3A.add(Vec3B);
	Vector3 Vec3Sub = Vec3A.subtract(Vec3B);
	Vector3 Vec3Mult = Vec3A.ScalarMult(Vec3B);
	float Vec3KMag = Vec3A.Magnitude();
	float Vec3LMag = Vec3B.Magnitude();
	Vector3 Vec3ANorm = Vec3A.Normalize();
	Vector3 Vec3BNorm = Vec3B.Normalize();
	float Vec3Dot = Vec3ANorm.DotProduct(Vec3BNorm);
	Vector3 Vec3Cross = Vec3A.crossProduct(Vec3B);


	Vector4 Vec4A = Vector4(4, 5, 6, 7);
	Vector4 Vec4B = Vector4(6, 2, 9, 3);
	Vector4 Vec4Add = Vec4A.add(Vec4B);
	Vector4 Vec4Sub = Vec4A.subtract(Vec4B);
	Vector4 Vec4Mult = Vec4A.ScalarMult(Vec4B);
	float Vec4KMag = Vec4A.Magnitude();
	float Vec4LMag = Vec4B.Magnitude();
	Vector4 Vec4ANorm = Vec4A.Normalize();
	Vector4 Vec4BNorm = Vec4B.Normalize();
	float Vec4Dot = Vec4ANorm.DotProduct(Vec4BNorm);


	Matrix2 MatA2 = Matrix2(4, 3, 2, 1);
	Matrix2 MatB2 = Matrix2(1, 2, 3, 4);
	Vector2 Vec2 = Vector2(8, 5);
	Matrix2 Mat2Mult = MatA2.Multiply(MatB2);
	Vector2 VecxMat = MatA2.VecxMat(Vec2);
	cout << "first matrix" << endl;
	MatA2.PirntStuff();
	cout << "second matrix" << endl;
	MatB2.PirntStuff();
	cout << "multiplying the two above matricies together" << endl;
	Mat2Mult.PirntStuff();


	Matrix3 MatA3 = Matrix3(1, 2, 3, 4, 5, 6, 7, 8, 9);
	Matrix3 MatB3 = Matrix3(9, 8, 7, 6, 5, 4, 3, 2, 1);
	Vector3 Vec3 = Vector3(3, 7, 0);
	Matrix3 Mat3Mult = MatA3.Multiply(MatB3);


	


	system("pause");
	return 0;

}