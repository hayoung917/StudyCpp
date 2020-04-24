#include <stdio.h>

class Time
{
private:
	int hour, min, sec;

public:
	Time() {}
	Time(int h, int m, int s) : hour(h), min(m), sec(s) { ; }

	void OutTime()
	{
		printf("%d:%d:%d\n", hour, min, sec);
	}

	const Time operator ++() const
	{
		Time t = *this;
		t.sec++;
		t.min += t.sec / 60;
		t.sec %= 60;
		t.hour += t.min / 60;
		t.min %= 60;

		return (t);
	}
	const Time operator++(int dummy)
	{
		Time t = *this;
		++* this;
		return t;
	}
};

int main()
{
	Time t1(1, 1, 1);
	Time t2;

	t2 = ++t1;
	t1.OutTime();
	t2.OutTime();

	t2 = t1++;
	t1.OutTime();
	t2.OutTime();
}