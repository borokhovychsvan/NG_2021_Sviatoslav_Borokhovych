#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int mass; // mass of ship (in tons)
    int result; // answer to the task
    int amountFuel; // amount of fuel
    cout << " Mass of ship :" ;
    cin >> mass;
    amountFuel=(ceil(mass/3))-2;
    cout << " amount of fuel = " << amountFuel << endl;
    result=300*amountFuel;
    cout << " Fuel needed :" << result << endl;
    return 0;
}
