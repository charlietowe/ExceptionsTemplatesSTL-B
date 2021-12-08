// Charlie Towe
// December 8th, 2021
// CIS 1202 501

#include<iostream>
using namespace std;


template <typename T>
T half(T number)
{
	T
		newValue;

	newValue = number / 2;

	if (newValue * 2 != number)
	{
		static_cast<double>(number);
		newValue = round(number / 2);
		newValue++;
	}

	return newValue;
}

int main()
{
	double
		a = 7.0;

	float
		b = 5.0f;

	int
		c = 3;

	cout << half(a) << endl
		<< half(b) << endl
		<< half(c) << endl;
}