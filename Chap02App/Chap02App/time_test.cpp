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
        printf("���� �ð��� %d:%d:%d�Դϴ�.\n", hour, min, sec);
    }
};

int main() {
    Time now;

    now.SetTime(15, 23, 34);
    now.outTime();
}
