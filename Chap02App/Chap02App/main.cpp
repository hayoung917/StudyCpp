#include <stdio.h>
#include "Time.h"
#include "Date.h"

int main() {
    Time now;
    Date d;
    d.SetDate(2020,04,21);
    d.OutDate();
    printf("Size of Date = %d\n", sizeof(d));

    now.SetTime(15, 54, 20);
    now.outTime();

    printf("Size of Date = %d\n", sizeof(now));
}