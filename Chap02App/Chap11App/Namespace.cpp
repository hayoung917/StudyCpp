#include <stdio.h>

class MyClass
{
public:
	MyClass() { ; }

	void OutTime() { printf("~~~~"); }
};

class OtherClass
{
public:
	void OutTime() { printf("~~"); }
};

namespace A
{
	double value;
	void OutTime() { printf("~~~"); }
}

namespace B
{
	int value;
	void OutTime() { printf("~~~"); }
}

int value;

int main()
{
	int value;

	A::value = 3.14159;
	B::value = 10;

	value = 1;
	::value = 12; //전역변수
	A::value = 12.5;

	printf("%f\n", A::value);
	printf("%d\n", B::value);


	return 0;
}