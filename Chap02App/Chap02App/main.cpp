#include <stdio.h>

class Human {
public:
    char name[12];
    int age;

    void intro() {
        printf("�̸� %s, ���� %d\n", name, age);
    }
};

int main() {
    Human h = { "���Ͽ�",28 };
    Human H[10] = { {"�谡��",25},{"���Ͽ�",28},{"������"},25 };
    h.intro();
    H[0].intro();

    return 0;
}