#include <iostream>

using namespace std;

int main()
{
    int number,Sum = 0;
    cout << "Please, enter number = ";
    cin >> number;

    for(int i = number; i > 0 ; i/=10 )
    {
        Sum+=number%10;
    }
    cout << "Sum = " << Sum << endl;

    return 0;
}
