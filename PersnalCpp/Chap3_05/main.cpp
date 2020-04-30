#include <iostream>

using namespace std;

int main()
{
	double d1(100 - 99.99); //0.001
	double d2(10 - 9.99); //0.001

	const double epsilon = 1e-10;

	cout << d1 << endl;
	cout << d2 << endl;

	cout << d1 - d2 << endl;
	cout << abs(d1 - d2) << endl;

	if (d1 == d2)
	{
		cout << "equal" << endl;
	}
	else
	{
		cout << "Not equal" << endl;
		if (d1 > d2)
		{
			cout << "d1 > d2" << endl;
		}
		else
		{
			cout << "d1 < d2" << endl;
		}
	}

	if (abs(d1 - d2) < epsilon)
	{
		cout << "Approximately equal" << endl;
	}
	else
	{
		cout << "Not equal" << endl;
	}

	return 0;
}
