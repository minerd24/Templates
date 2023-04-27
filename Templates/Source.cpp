// Evan Wall
// CIS 1202
// 4/27/2023

#include <iomanip>
#include <iostream>

using namespace std;

int half(int number)
{
	if (1 % number != 0)
	{
		return (number / 2) + 1;
	}
	else
		return number / 2;
}

template <typename h>
h half(h number)
{
	return round(static_cast<float>(number / 2));
}



int main()
{
	double c = 5.0;
	float v = 9.0f;
	int d = 3;

	cout << half(c) << endl;
	cout << half(v) << endl;
	cout << half(d) << endl;
}