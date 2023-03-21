#include <bits/stdc++.h>

using namespace std;

int fibonacci(int input) {
    int n = 1;
    int m = -1;

    for(int i = 0; i <= input; i++) {
        n += m;
        m = n - m;
    }
    return n;
}


int fibonacci2(int input) {
    if(input == 1 || input == 2)
        return 1;
    return fibonacci2(input - 1) + fibonacci2(input - 2);
}

int main() {
    int input;
    cin >> input;
    int result = fibonacci(input);
    cout << result << endl;

    // cin >> input;
    // int result = fibonacci2(input);
    // cout << result << endl;
    
    return 0;
}