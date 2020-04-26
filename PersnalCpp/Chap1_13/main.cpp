#include <iostream>

namespace Myspace1
{
	namespace InnerSpace
	{
		int my_function()
		{
			return 0;
		}
	}
	int doSomething(int a, int b)
	{
		return a + b;
	}
}

namespace Myspace2
{
	int doSomething(int a, int b)
	{
		return a * b;
	}
}

using namespace std;

int main()
{
	using namespace Myspace1::InnerSpace;

	my_function();

	//cout << Myspace1::doSomething(3, 4) << endl;
	//cout << doSomething(3, 4) << endl;

	return 0;
}