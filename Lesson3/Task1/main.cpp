#include <iostream>

using namespace std;

int main()
{
    int number, i, sum;
    int massive[10];
    for(i = 0; i < 10; i++){
        cin >> massive[i];
    }
    cout << "Enter number = ";
    cin >> number;
    cout << endl;
    for(i = 0; i < 10; i++ ){
        sum = massive[i]+number;
        cout << sum;
    }
    return 0;
}
