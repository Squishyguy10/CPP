#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int temp, level;
    cin >> temp;
    temp = temp * 5 - 400;

    cout << temp << endl;
    if(temp < 100) {
        cout << 1 << endl;
    } else  if(temp == 100) {
        cout << 0 << endl;
    } else {
        cout << -1 << endl;
    }
    
    return 0;
}