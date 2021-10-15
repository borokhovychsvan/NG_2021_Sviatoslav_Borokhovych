#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b ,c ,D ,x1 ,x2 ,x;
    cout << "Ask a =" << endl;
    cin >> a;

    cout << "Ask b =" << endl;
    cin >> b;

    cout << "Ask c =" << endl;
    cin >> c;

    D=pow(b,2)-4*a*c;
    cout << "D =" << D << endl;

    if(D>0){
        x1=(-b+sqrt(D))/2*a;
        x2=(-b-sqrt(D))/2*a;
        cout << "x1 = " << x1 << endl << "x2 = " << x2 << endl;
        }
    if(D=0){
        x=-b/2*a;
        cout << "x = " << x << endl;
        }
    if(D<0) cout << "No roots" << endl;

    return 0;
}
