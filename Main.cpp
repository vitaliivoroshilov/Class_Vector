#include <iostream>
using namespace std;

#include "Vector.h"

int main()
{
	Vector vector1(3);
	vector1.initVector();

	Vector vector2(3);
	vector2.initVector();

	Vector vector = vector1 + vector2;
	vector.printVector();

	vector = vector1 - vector2;
	vector.printVector();

	vector = vector1 * vector2;
	vector.printVector();

	return 0;
}