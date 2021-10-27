#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    float x1 ,x2 ,x ,a ,b ,c ,D;
    cout << "Ask a =" ;
    cin >> a;

    cout << "Ask b =" ;
    cin >> b;

    cout << "Ask c =" ;
    cin >> c;

    D=pow(b,2)-(4*a*c);
    cout << "D =" << D << endl;

    if(D>0){
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        cout << "x1 = " << x1 << endl << "x2 = " << x2 << endl;
        }
    if(D==0){
        x=-b/(2*a);
        cout << "x = " << x << endl;
    }else cout << "No roots ";


    return 0;
}
