#include <iostream>

using namespace std;

int main()
{
    int Size;
    cout << "Enter Size = ";
    cin >> Size;
    for (int y = 1; y <= Size; y++) {
        for (int x = 1; x <= Size; x++) {
            if ((y < Size && y > 1) && (x < Size && x > 1))
            cout << " ";
            else cout << "*";
        }
        cout << endl;
    }
    return 0;
}
