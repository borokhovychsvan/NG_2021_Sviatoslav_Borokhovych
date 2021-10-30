#include <iostream>

using namespace std;

int main()
{
   int cash[10] = {500,1000,2000,5000,300,200,700,2440,990,4500};
   int pincodes[10] = {1001,4862,6248,5195,3575,5285,1951,7335,6454,8193};
   unsigned int pincode, number, addmoney, withdrawmoney,balance;

   do{cout << " Available pincodes : 1001,4862,6248,5195,3575,5285,1951,7335,6454,8193" << endl;
   cout << "Bank account: ";
   cin >> pincode;

     for(int i = 0; i < 10; i++){
        if(pincode==pincodes[i]){
            cout << "Your money = " << cash[i] << endl;
            cout << "Whay I can do?" << endl;
            cout << "1 - Add money " << endl;
            cout << "2 - Withdraw money " << endl;
            cin >> number;
            switch(number){
            case 1: cout << " How many money you wanna add? = "<< endl;
                    cin >> addmoney;
                    balance=cash[i]+addmoney;
                    cout << " Operation was successfully completed " << endl << "Your money = " << balance << endl;
                    break;
            case 2: cout << " How many money you wanna withdraw? = "<< endl;
                    cin >> withdrawmoney;
                    balance=cash[i]-withdrawmoney;
                    cout << " Operation was successfully completed " << endl << "Your money = " << balance << endl;
                    break;

            }

        }

     }

    }while(true);
}
