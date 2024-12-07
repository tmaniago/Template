//Tamis Amor Maniago
//CIS 1202 Templates
//December 7, 2024

#include <iostream>
#include <cmath>

using namespace std;

//Template for floating-point types
template <typename T>
T half(T number) {
	return number / 2;
}

//Specialized template for integer types
template <>
int half<int>(int number) {
	return round(static_cast<float>(number) / 2);
}

int main()
{
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;

	return 0;
}