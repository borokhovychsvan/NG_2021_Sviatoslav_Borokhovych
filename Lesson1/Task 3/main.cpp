#include <iostream>

using namespace std;

int main()
{
    int a = 50;
    int b = 20;
    b = a + b;
    a = b - a;
    b = b - a;
    cout <<"a = " << a << ", b = " << b ;
    return 0;
}
