#pragma once

#include <iostream>
using namespace std;

class Vector
{
public:
	int* arr;
	int N;
	Vector(int _N);
	Vector(const Vector& vec);
	int& operator[](size_t i);
	Vector operator*(const Vector& other);
	Vector operator+(const Vector& other);
	Vector operator-(const Vector& other);
	Vector v_mult(Vector& a);
	void initVector();
	void printVector();
};