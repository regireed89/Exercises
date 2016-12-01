#include <iostream>
#include <Math.h>
#include <cassert>
#include<stdio.h>
using namespace std;
class Vector2
{
public:

	float x, y;
	Vector2() {};//default constructor
	Vector2(float a, float b)//constuctor takes two float arguments
	{
		x = a;
		y = b;
	}

	Vector2 add(Vector2 &other)//function to add two vectors together
	{

		float a = this->x + other.x;
		float b = this->y + other.y;

		return Vector2(a, b);
	}

	Vector2 subtract(Vector2 &other)//function to subtract one vector from another
	{
		float a = this->x - other.x;
		float b = this->y - other.y;

		return Vector2(a, b);
	}

	Vector2 ScalarMult(Vector2 &mult)//function to multiply 2d vectors
	{
		float a = this->x * mult.x;
		float b = this->y * mult.y;

		return Vector2(a, b);
	}

	float Magnitude()//function to find the magnitude of a 2d vector
	{
		float a = sqrt(x*x + y*y);


		return a;
	}

	Vector2 Normalize()//function to normalize a vector
	{
		Vector2 vec = Vector2(x / Magnitude(), y / Magnitude());

		return vec;
	}

	float DotProduct(Vector2 &other)//function to find the dotproduct of two 2d vectors
	{
		float a = this->x * other.x;
		float b = this->y * other.y;
		float c = a + b;

		return c;
	}

	void Print()//prints out the vector
	{
		cout << "2D Vector" << endl;
		cout << "x=" << x << "y=" << y << endl;
		cout << "____" << endl;
	}

};
class Vector3
{

private:



public:
	float x, y, z;
	Vector3() {};//default constructor
	Vector3(float a, float b, float c)//constructor takes three float arguments
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

	void Print()
	{
		cout << "3D Vector" << endl;
		cout << "x=" << x << "y=" << y << "z=" << z << endl;
		cout << "____" << endl;
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
	void Print()
	{
		cout << "4D Vector" << endl;
		cout << "x=" << x << "y=" << y << "z=" << z << "w=" << w << endl;
		cout << "____" << endl;
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


	Vector2 Vec2xMat2(const Vector2 &vec)
	{
		float a = m_data[0] * vec.x + m_data[1] * vec.y;
		float b = m_data[2] * vec.x + m_data[3] * vec.y;

		return Vector2(a, b);
	}


	void PirntMatrix2()
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


	Vector3 Vec3xMat3(const Vector3 &vec)
	{
		float a = m_data[0] * vec.x + m_data[1] * vec.y + m_data[2] * vec.z;
		float b = m_data[3] * vec.x + m_data[4] * vec.y + m_data[5] * vec.z;
		float c = m_data[6] * vec.x + m_data[7] * vec.y + m_data[8] * vec.z;
		
		return Vector3(a, b, c);
	}

	

	Matrix3 RotateSetX(float a)
	{
		Matrix3 MAT = Matrix3(m_data[0] * 1, m_data[1] * 0, m_data[2] * 0,
			m_data[3] * 0, m_data[4] * cos(a), m_data[5] * -sin(a),
			m_data[6] * 0, m_data[7] * sin(a), m_data[8] * cos(a));

		return MAT;
	}

	Matrix3 RotateSetY(float a)
	{
		Matrix3 MAT = Matrix3(m_data[0] * cos(a), m_data[1] * 0, m_data[2] * sin(a),
			m_data[3] * 0, m_data[4] * 1, m_data[5] * 0,
			m_data[6] * -sin(a), m_data[7] * 0, m_data[8] * cos(a));

		return MAT;
	}
	Matrix3 RotateSetZ(float a)
	{
		Matrix3 MAT = Matrix3(m_data[0] * cos(a), m_data[1] * -sin(a), m_data[2] * 0,
			m_data[3] * sin(a), m_data[4] * cos(a), m_data[5] * 0,
			m_data[6] * 0, m_data[7] * 0, m_data[8] * 1);

		return MAT;
	}



		
	
	void PrintMatrix3()
	{
		cout << "3D Matrix" << endl;
		cout << m_data[0] << " " << m_data[1] << " " << m_data[2] << "\n" << m_data[3] << " " << m_data[4] << " " << m_data[5] << "\n" << m_data[6] << " " << m_data[7] << " " << m_data[8] << endl;
		cout << "______" << endl;
	}


};
class Matrix4
{
private:
	int* m_data;
public:
	Matrix4() {};
	Matrix4(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p)
	{
		m_data = new int[16];
		m_data[0] = a;
		m_data[1] = b;
		m_data[2] = c;
		m_data[3] = d;
		m_data[4] = e;
		m_data[5] = f;
		m_data[6] = g;
		m_data[7] = h;
		m_data[8] = i;
		m_data[9] = j;
		m_data[10] = k;
		m_data[11] = l;
		m_data[12] = m;
		m_data[13] = n;
		m_data[14] = o;
		m_data[15] = p;
	}


	Matrix4 Multiply(Matrix4 &other)
	{
		Matrix4 Mat = Matrix4(m_data[0] * other.m_data[0] + m_data[1] * other.m_data[4] + m_data[2] * other.m_data[8] + m_data[3] * other.m_data[12],
			m_data[0] * other.m_data[1] + m_data[1] * other.m_data[5] + m_data[2] * other.m_data[9] + m_data[3] * other.m_data[13],
			m_data[0] * other.m_data[2] + m_data[1] * other.m_data[6] + m_data[2] * other.m_data[10] + m_data[3] * other.m_data[14],
			m_data[0] * other.m_data[3] + m_data[1] * other.m_data[7] + m_data[2] * other.m_data[11] + m_data[3] * other.m_data[15],
			m_data[4] * other.m_data[0] + m_data[5] * other.m_data[4] + m_data[6] * other.m_data[8] + m_data[7] * other.m_data[12],
			m_data[4] * other.m_data[1] + m_data[5] * other.m_data[5] + m_data[6] * other.m_data[9] + m_data[7] * other.m_data[13],
			m_data[4] * other.m_data[2] + m_data[5] * other.m_data[6] + m_data[6] * other.m_data[10] + m_data[7] * other.m_data[14],
			m_data[4] * other.m_data[3] + m_data[5] * other.m_data[7] + m_data[6] * other.m_data[11] + m_data[7] * other.m_data[15],
			m_data[8] * other.m_data[0] + m_data[9] * other.m_data[4] + m_data[10] * other.m_data[8] + m_data[11] * other.m_data[12],
			m_data[8] * other.m_data[1] + m_data[9] * other.m_data[5] + m_data[10] * other.m_data[9] + m_data[11] * other.m_data[13],
			m_data[8] * other.m_data[2] + m_data[9] * other.m_data[6] + m_data[10] * other.m_data[10] + m_data[11] * other.m_data[14],
			m_data[8] * other.m_data[3] + m_data[9] * other.m_data[7] + m_data[10] * other.m_data[11] + m_data[11] * other.m_data[15],
			m_data[12] * other.m_data[0] + m_data[13] * other.m_data[4] + m_data[14] * other.m_data[8] + m_data[15] * other.m_data[12],
			m_data[12] * other.m_data[1] + m_data[13] * other.m_data[5] + m_data[14] * other.m_data[9] + m_data[15] * other.m_data[13],
			m_data[12] * other.m_data[2] + m_data[13] * other.m_data[6] + m_data[14] * other.m_data[10] + m_data[15] * other.m_data[14],
			m_data[12] * other.m_data[3] + m_data[13] * other.m_data[7] + m_data[14] * other.m_data[11] + m_data[15] * other.m_data[15]);

		return Mat;
	}


	Vector4 Vec4xMat4(const Vector4 &vec)
	{
		float a = m_data[0] * vec.x + m_data[1] * vec.y + m_data[2] * vec.z + m_data[3] * vec.w;
		float b = m_data[4] * vec.x + m_data[5] * vec.y + m_data[6] * vec.z + m_data[6] * vec.w;
		float c = m_data[8] * vec.x + m_data[9] * vec.y + m_data[10] * vec.z + m_data[11] * vec.w;
		float d = m_data[12] * vec.x + m_data[13] * vec.y + m_data[14] * vec.z + m_data[15] * vec.w;
		return Vector4(a, b, c, d);

	}
	Matrix4 RotateSetX(float a)
	{
		Matrix4 MAT = Matrix4(m_data[0] * 1, m_data[1] * 0, m_data[2] * 0, m_data[3] * 0,
			m_data[4] * 0, m_data[5] * cos(a), m_data[6] * -sin(a), m_data[7] * 0,
			m_data[8] * 0, m_data[9] * sin(a), m_data[10] * cos(a), m_data[11] * 0,
			m_data[12] * 0, m_data[13] * 0, m_data[14] * 0, m_data[15] * 1);

		return MAT;
	}
	Matrix4 RotateSetY(float a)
	{
		Matrix4 MAT = Matrix4(m_data[0] * cos(a), m_data[1] * 0, m_data[2] * sin(a), m_data[3] * 0,
			m_data[4] * 0, m_data[5] * 1, m_data[6] * 0, m_data[7] * 0,
			m_data[8] * -sin(a), m_data[9] * 0, m_data[10] * cos(a), m_data[11] * 0,
			m_data[12] * 0, m_data[13] * 0, m_data[14] * 0, m_data[15] * 1);

		return MAT;
	}
	Matrix4 RotateSetZ(float a)
	{
		Matrix4 MAT = Matrix4(m_data[0] * cos(a), m_data[1] * -sin(a), m_data[2] * 0, m_data[3] * 0,
			m_data[4] * sin(a), m_data[5] * cos(a), m_data[6] * 0, m_data[7] * 0,
			m_data[8] * 0, m_data[9] * 0, m_data[10] * 1, m_data[11] * 0,
			m_data[12] * 0, m_data[13] * 0, m_data[14] * 0, m_data[15] * 1);

		return MAT;
	}


	void PrintMatrix4()
	{
		cout << "4D Matrix" << endl;
		cout << m_data[0] << " " << m_data[1] << " " << m_data[2] << " " << m_data[3] << "\n" << m_data[4] << " " << m_data[5] << " " << m_data[6] << " " << m_data[7] << "\n" << m_data[8] << " " << m_data[9] << " " << m_data[10] << " " << m_data[11] << "\n" << m_data[12] << " " << m_data[13] << " " << m_data[14] << " " << m_data[15] << endl;
		cout << "___________" << endl;
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
	cout << "||||||||||||||||||||||||||||||||||||||||" << endl;
	cout << "2D Vectors" << endl;
	cout << "first 2d vector" << endl;
	Vec2A.Print();
	cout << "second 2d vector" << endl;
	Vec2B.Print();
	cout << "both 2d vectors added together" << endl;
	Vec2Add.Print();
	cout << "second 2d vector subtracted from first 2d vector" << endl;
	Vec2Sub.Print();
	cout << "both 2d vectors multiplied" << endl;
	Vec2Mult.Print();
	cout << "magnitude of first 2d vector" << endl;
	cout << Vec2AMag << endl;
	cout << "magnitude of second 2d vector" << endl;
	cout << Vec2BMag << endl;
	cout << "first 2d vector normalized" << endl;
	Vec2ANorm.Print();
	cout << "second 2d vector normalized" << endl;
	Vec2BNorm.Print();
	cout << "the dot product of both vectors" << endl;
	cout << Vec2Dot << endl;


	Vector3 Vec3A = Vector3(4, 5, 6);
	Vector3 Vec3B = Vector3(6, 2, 9);
	Vector3 Vec3Add = Vec3A.add(Vec3B);
	Vector3 Vec3Sub = Vec3A.subtract(Vec3B);
	Vector3 Vec3Mult = Vec3A.ScalarMult(Vec3B);
	float Vec3AMag = Vec3A.Magnitude();
	float Vec3BMag = Vec3B.Magnitude();
	Vector3 Vec3ANorm = Vec3A.Normalize();
	Vector3 Vec3BNorm = Vec3B.Normalize();
	float Vec3Dot = Vec3ANorm.DotProduct(Vec3BNorm);
	Vector3 Vec3Cross = Vec3A.crossProduct(Vec3B);
	cout << "||||||||||||||||||||||||||||||||||||||||" << endl;
	cout << "3D Vectors" << endl;
	cout << "first 3d vector" << endl;
	Vec3A.Print();
	cout << "second 3d vector" << endl;
	Vec3B.Print();
	cout << "both 3d vectors added together" << endl;
	Vec3Add.Print();
	cout << "second 3d vector subtracted from first 2d vector" << endl;
	Vec3Sub.Print();
	cout << "both 3d vectors multiplied" << endl;
	Vec3Mult.Print();
	cout << "magnitude of first 3d vector" << endl;
	cout << Vec3AMag << endl;
	cout << "magnitude of second 3d vector" << endl;
	cout << Vec3BMag << endl;
	cout << "first 3d vector normalized" << endl;
	Vec3ANorm.Print();
	cout << "second 3d vector normalized" << endl;
	Vec3BNorm.Print();
	cout << "the dot product of both vectors" << endl;
	cout << Vec3Dot << endl;
	cout << "the cross product of both vectors" << endl;
	Vec3Cross.Print();


	Vector4 Vec4A = Vector4(4, 5, 6, 7);
	Vector4 Vec4B = Vector4(6, 2, 9, 3);
	Vector4 Vec4Add = Vec4A.add(Vec4B);
	Vector4 Vec4Sub = Vec4A.subtract(Vec4B);
	Vector4 Vec4Mult = Vec4A.ScalarMult(Vec4B);
	float Vec4AMag = Vec4A.Magnitude();
	float Vec4BMag = Vec4B.Magnitude();
	Vector4 Vec4ANorm = Vec4A.Normalize();
	Vector4 Vec4BNorm = Vec4B.Normalize();
	float Vec4Dot = Vec4ANorm.DotProduct(Vec4BNorm);
	cout << "||||||||||||||||||||||||||||||||||||||||" << endl;
	cout << "4D Vectors" << endl;
	cout << "first 4d vector" << endl;
	Vec4A.Print();
	cout << "second 4d vector" << endl;
	Vec4B.Print();
	cout << "both 4d vectors added together" << endl;
	Vec4Add.Print();
	cout << "second 4d vector subtracted from first 2d vector" << endl;
	Vec4Sub.Print();
	cout << "both 4d vectors multiplied" << endl;
	Vec4Mult.Print();
	cout << "magnitude of first 4d vector" << endl;
	cout << Vec4AMag << endl;
	cout << "magnitude of second 4d vector" << endl;
	cout << Vec4BMag << endl;
	cout << "first 4d vector normalized" << endl;
	Vec4ANorm.Print();
	cout << "second 4d vector normalized" << endl;
	Vec4BNorm.Print();
	cout << "the dot product of both vectors" << endl;
	cout << Vec4Dot << endl;


	Matrix2 MatA2 = Matrix2(4, 3, 2, 1);
	Matrix2 MatB2 = Matrix2(1, 2, 3, 4);
	Vector2 Vec2 = Vector2(8, 5);
	Matrix2 Mat2Mult = MatA2.Multiply(MatB2);
	Vector2 VecxMat = MatA2.Vec2xMat2(Vec2);
	cout << "||||||||||||||||||||||||||||||||||||||||" << endl;
	cout << "2D Matrix" << endl;
	cout << "first 2d matrix" << endl;
	MatA2.PirntMatrix2();
	cout << "second 2d matrix" << endl;
	MatB2.PirntMatrix2();
	cout << "multiplying the two above 2d matricies together" << endl;
	Mat2Mult.PirntMatrix2();



	
	Matrix3 MatA3 = Matrix3(1, 0, 0, 0, 1, 0, 0, 0, 1);
	Matrix3 MatB3 = Matrix3(9, 8, 7, 6, 5, 4, 3, 2, 1);
	Vector3 Vec3 = Vector3(3, 7, 0);
	Matrix3 Mat3Mult = MatA3.Multiply(MatB3);
	Vector3 Vec3xMat = MatA3.Vec3xMat3(Vec3);
	cout << "||||||||||||||||||||||||||||||||||||||||" << endl;
	cout << "3D Matrix" << endl;
	cout << "first 3d matrix" << endl;
	MatA3.PrintMatrix3();
	cout << "second 3d matrix" << endl;
	MatB3.PrintMatrix3();
	cout << "multiplying the two above 3d matricies together" << endl;
	Mat3Mult.PrintMatrix3();
	Matrix3 rotX = MatA3.RotateSetX(90);
	rotX.PrintMatrix3();
	Matrix3 rotY = MatA3.RotateSetY(90);
	rotY.PrintMatrix3();
	Matrix3 rotZ = MatA3.RotateSetZ(90);
	rotY.PrintMatrix3();



	Matrix4 MatA4 = Matrix4(1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1);
	Matrix4 MatB4 = Matrix4(16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1);
	Vector4 Vec4 = Vector4(3, 7, 0, 5);
	Matrix4 Mat4Mult = MatA4.Multiply(MatB4);
	Vector4 Vec4xMat = MatA4.Vec4xMat4(Vec4);
	cout << "||||||||||||||||||||||||||||||||||||||||" << endl;
	cout << "4D Matrix" << endl;
	cout << "first 4d matrix" << endl;
	MatA4.PrintMatrix4();
	cout << "second 4d matrix" << endl;
	MatB4.PrintMatrix4();
	cout << "multiplying the two above 4d matricies together" << endl;
	Mat4Mult.PrintMatrix4();
	Matrix4 m = MatA4.RotateSetX(90);
	m.PrintMatrix4();
	Matrix4 e = MatA4.RotateSetY(90);
	e.PrintMatrix4();
	Matrix4 p = MatA4.RotateSetZ(90);
	p.PrintMatrix4();
	system("pause");
	return 0;

}