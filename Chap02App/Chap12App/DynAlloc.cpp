#include <iostream>

using namespace std;

int main()
{
	auto_ptr<double> rate(new double);

	*rate = 3.141592;
	cout << *rate << endl;

	//delete rate;

	return 0;
}