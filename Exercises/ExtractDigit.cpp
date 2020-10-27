#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int digit;
    cin >> digit;

    cout << "First digit is " << (digit/10000)%10 << endl;
    cout << "Second digit is " << (digit/1000)%10 << endl;
    cout << "Third digit is " << (digit/100)%10 << endl;
    cout << "Fourth digit is " << (digit/10)%10 << endl;
    cout << "Fifth digit is " << digit%10 << endl;
    return 0;
}