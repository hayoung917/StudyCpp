#include <iostream>
#include <cstdio>

int main()
{
	using namespace std; //std 제거할수있음

	int x = 1024;
	double pi = 3.141592;

	std::cout << "Hello World!" << std::endl;
	std::cout << "x is " << x << std::endl;
	std::cout << "pi is " << pi << std::endl;

	std::cout << "abc" << "\t" << "def" << std::endl;
	cout << "ab" << "\t" << "cedf\n";

	int input;

	cin >> input;
	cout << "your input is " << input << endl;


	return 0;


}