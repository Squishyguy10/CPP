#include <bits/stdc++.h>
 
using namespace std;

int main() {
    int quarter = 0, dime = 0, nickel = 0, penny = 0;
    int cents;
    cin >> cents;

    while(cents > 0) {
        if(cents >= 25) {
            quarter++;
            cents-= 25;
        } else if(cents >= 10) {
            dime++;
            cents-= 10;
        } else if(cents >= 5) {
            nickel++;
            cents-= 5;
        } else if(cents >= 1) {
            penny++;
            cents--;
        }
    }
    cout << "Quarters: " << quarter << endl;
    cout << "Dimes: " << dime << endl;
    cout << "Nickels: " << nickel << endl;
    cout << "Pennies: " << penny << endl;

    return 0;
}