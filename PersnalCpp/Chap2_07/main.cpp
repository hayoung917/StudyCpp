#include <iostream>
#include <limits>

int main()
{
	using namespace std;

	char c1(65);

	//cin >> c1;
	//cout << c1 << " " << static_cast<int>(c1) << endl;

	//cin >> c1;
	//cout << c1 << " " << static_cast<int>(c1) << endl;

	//cin >> c1;
	//cout << c1 << " " << static_cast<int>(c1) << endl;

	//cin >> c1;
	//cout << c1 << " " << static_cast<int>(c1) << endl;

	cout << sizeof(c1) << endl;
	cout << (int)numeric_limits<char>::max() << endl;
	cout << (int)numeric_limits<char>::min() << endl;

	return 0;
}