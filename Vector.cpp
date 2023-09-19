#include <iostream>
using namespace std;

#include "Vector.h"

Vector::Vector(int _N)
{
	N = _N;
	arr = new int[N];
}

Vector::Vector(const Vector& vec)
{
	N = vec.N;
	arr = new int[N];
}

int& Vector::operator[](size_t i)
{
	return arr[i];
}

Vector Vector::operator*(const Vector& other)
{
	if (N != other.N)
		throw std::invalid_argument("");
	Vector res(N);
	for (int n = 0; n < N; n++)
	{
		res[n] = arr[n] * other.arr[n];
	}
	return res;
}

Vector Vector::operator+(const Vector& other)
{
	if (N != other.N)
		throw std::invalid_argument("");
	Vector res(N);
	for (int n = 0; n < N; n++)
	{
		res[n] = arr[n] + other.arr[n];
	}
	return res;
}

Vector Vector::operator-(const Vector& other)
{
	if (N != other.N)
		throw std::invalid_argument("");
	Vector res(N);
	for (int n = 0; n < N; n++)
	{
		res[n] = arr[n] - other.arr[n];
	}
	return res;
}

Vector Vector::v_mult(Vector& a)
{
	if (this->N != 3 || a.N != 3)
		throw std::invalid_argument("");
	Vector result(3);
	result.arr[0] = arr[1] * a.arr[2] - arr[3] * a.arr[1];
	result.arr[1] = arr[2] * a.arr[3] - arr[0] * a.arr[3];
	result.arr[2] = arr[0] * a.arr[1] - arr[1] * a.arr[0];

	return result;
}

void Vector::initVector()
{
	cout << "Ener " << N << " vector's elements: ";
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
}

void Vector::printVector()
{
	cout << "Your vector: ";
	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";
	cout << endl;
}