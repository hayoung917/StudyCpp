#include <stdio.h>

template <typename T>
void Swap(T& a, T& b)
{
	T t;
	t = a; a = b; b = t;
}

template <typename T>
T add(T& a, T& b)
{
	return a + b;
}

//void Swap(double& a, double& b)
//{
//	double t;
//	t = a; a = b; b = t;
//}

int main()
{
	int a = 3, b = 4;
	double c = 1.2, d = 3.4;
	char e = 'A', f = 'B';

	Swap(a, b);
	Swap(c, d);
	Swap(e, f);

	printf("a = %d,  b = %d\n", a, b);
	printf("c = %f, d = %f\n", c, d);
	printf("e = %c, f = %c\n", e, f);

	printf("a + b = %d\n", add(a, b));
	printf("c + d = %f\n", add(c, d));
	printf("e + f = %c\n", add(e, f));
}