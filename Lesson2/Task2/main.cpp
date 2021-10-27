#include <iostream>

using namespace std;

int main()
{
    int number;
    int n1, n2, HashCode, first;
    cout << "Enter number: ";
    cin >> number;
    first = number % 10;
    for (long int i = number; i >= 1; i /= 10) {
        n1 = i % 10;
        n2 = i/10 % 10;
        if (n1 == n2)
            HashCode += n1;
    }
    if (n1 == n2) {
       HashCode += n1;
    }
    cout << "Hash of your number is: " << HashCode << endl;
    return 0;
}
