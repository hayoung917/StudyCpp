#include <stdio.h>

class Human {
public:
    char name[12];
    int age;

    void intro() {
        printf("이름 %s, 나이 %d\n", name, age);
    }
};

int main() {
    Human h = { "이하영",28 };
    Human H[10] = { {"김가람",25},{"이하영",28},{"여예지"},25 };
    h.intro();
    H[0].intro();

    return 0;
}