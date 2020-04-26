#include <iostream>
 
using namespace std;

int addTwoNumber(int num_a, int num_b)
{
    int sum = num_a + num_b;

    return sum;
}

int main()
{
    int a, b = 0;
    

    cout << "2개 정수 입력 ";
    cin >> a;
    cin >> b;

    cout << addTwoNumber(a, b);
    


    return 0;
}