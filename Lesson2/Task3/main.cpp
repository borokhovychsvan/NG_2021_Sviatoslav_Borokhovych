#include <iostream>

using namespace std;

int main()
{
   int Size, i=0, j=0;
   cout << " Enter Size = ";
   cin >> Size;
   cout << endl;

   i=Size;
   while(i){
    cout << endl;
    if (i==1 || i==Size) {
        j=Size;
        while (j--) {cout << "*";}
    } else {
        cout << "*";
        j=Size-2;
        while(j--)
        cout << " ";
        cout << "*";
    }
     i--;
    }
   return 0;
}
