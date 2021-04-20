#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int digit1, digit2, digit3, digit4;
    cin >> digit1 >> digit2 >> digit3 >> digit4;

    if((digit1==8 || digit1==9) && (digit2==digit3) && (digit4==8 || digit4==9)) {
        cout << "ignore" << endl;
    } else {
        cout << "answer" << endl;
    }
    return 0;
}