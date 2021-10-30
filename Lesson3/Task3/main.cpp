#include <iostream>
#include <random>
using namespace std;

int main()
{
    int sum1, sum2;
    int massive1[4] = {};
    int massive2[4] = {};

    for(int i = 0; i < 4; i++){
        massive1[i] = rand();
        cout << " " << massive1[i];
        sum1 +=massive1[i];
    }
    cout << endl;
    for(int i = 0; i < 4; i++){
        massive2[i] = rand();
        cout << " " << massive2[i];
        sum2 +=massive2[i];

    }
    cout << endl;
    cout << " Sum1 = " << sum1 << endl;
    cout << " Sum2 = " << sum2 << endl;
    cout << "Result = " << sum1+sum2 << endl;



    return 0;
}
