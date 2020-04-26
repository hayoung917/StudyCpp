#include <iostream>

using namespace std;

void doSomthing(int x)
{
	x = 123;
	cout << x << endl;
}

int main()
{
	int x = 0;

	cout << x << endl;
	doSomthing(x);
	cout << x << endl;

	return 0;
}