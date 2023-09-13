#include <iostream>
using namespace std;

#include "Vector.h"

int main()
{
	Vector vector(3);

	Vector::initVector(vector);
	Vector::testVector(vector);

	return 0;
}