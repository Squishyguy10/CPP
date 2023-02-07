#include <bits/stdc++.h>
 
using namespace std;

int main() {
    int input, sum = 1;
    cin >> input;

    for(int i = 2; i <= input; i++) {
        sum *= i;
    }
    cout << sum << endl;

    return 0;
}