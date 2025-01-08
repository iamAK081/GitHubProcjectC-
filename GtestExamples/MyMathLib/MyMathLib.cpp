#include "iostream"
#include "../MyMathLib/MyMathLib.h"
#include <stdexcept>
#include "math.h"
using namespace std;
double square_root(double num)
{
	if (num < 0)
	{
		throw std::runtime_error("Invalid number");
	}

	return sqrt(num);
}