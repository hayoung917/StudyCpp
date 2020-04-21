#include <stdio.h>

class Time{
private:
	int hour, min, sec;

public:
    void SetTime(int h, int m, int s) 
    {
        hour = h;
        min = m;
        sec = s;
    }

    void outTime() {
        printf("현재 시간은 %d:%d:%d입니다.\n", hour, min, sec);
    }
};

int main() {
    Time now;

    now.SetTime(15, 23, 34);
    now.outTime();
}
