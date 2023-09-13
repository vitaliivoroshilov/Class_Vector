#include <iostream>
using namespace std;

class Vector
{
public:
	int* arr;
	int N;

	Vector(int _N);
	Vector(const Vector& vec);
	int& operator[] (size_t i);
	int operator* (const Vector& other);
	int operator+ (const Vector& other);
	int operator- (const Vector& other);
	Vector v_mult(Vector& a);
	static void initVector(Vector vec);
	static void testVector(Vector testVector);
};