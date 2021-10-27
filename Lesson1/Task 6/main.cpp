#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the missing value for the next fragment of the netmask:" << endl;
    cout << "Available values: 255, 254, 252, 248, 240, 224, 192, 128, 000" << endl;
    unsigned int frg;
    do {
        cout << "255.255.255.";
        cin >> frg;
        cout << "Number of addresses in a subnet: ";
        switch (frg) {
        case 255: cout << "1"   << endl << endl; break;
        case 254: cout << "2"   << endl << endl; break;
        case 252: cout << "4"   << endl << endl; break;
        case 248: cout << "8"   << endl << endl; break;
        case 240: cout << "16"  << endl << endl; break;
        case 224: cout << "32"  << endl << endl; break;
        case 192: cout << "64"  << endl << endl; break;
        case 128: cout << "128" << endl << endl; break;
        case 000: cout << "256" << endl << endl; break;
        default: cout << "Invalid value" << endl << endl;
            }
        } while (true);
    return 0;
}
