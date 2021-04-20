#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    // cout << "First digit is " << (digit/10000)%10 << endl;
    // cout << "Second digit is " << (digit/1000)%10 << endl;
    // cout << "Third digit is " << (digit/100)%10 << endl;
    // cout << "Fourth digit is " << (digit/10)%10 << endl;
    // cout << "Fifth digit is " << digit%10 << endl;
    
    int digit, i;
    cin >> digit;
    
    // string digit2 = to_string(digit);
    // i = pow(10, digit2.length()-1);
    // cout << i << endl;

    // while(i > 0) {
    //     cout << (digit/i) % 10 << endl;
    //     i/= 10;
    // }

    while(digit > 0) {
        cout << digit % 10 << endl;
        digit/= 10;
    }

    return 0;
}