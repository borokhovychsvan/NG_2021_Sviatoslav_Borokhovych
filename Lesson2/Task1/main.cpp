#include <iostream>

using namespace std;

int main()
{
    int number,
    Sum = 0;
    cout << "Please, enter number = ";
    cin >> number;

    while(number!=0)
    {
        Sum+=number%10;
        number /= 10;
    }
    cout << "Sum = " << Sum << endl;

    return 0;
}
