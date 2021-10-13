#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float m; // mass of ship (in tons)
    float result; // answer to the task
    int L; // amount of fuel
    cout << " Mass of ship :" ;
    cin >> m;
    L=(ceil(m/3))-2;
    cout << " L = " << L << endl;
    result=300*L;
    cout << " amount of fuel :" << result << endl;
    return 0;
}
