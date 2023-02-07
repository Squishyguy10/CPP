#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if(n == 2)
        return n;
        
    return n * factorial(n-1);
}

int factorial2(int n) {
    for(int i = n-1; i > 1; i--)
        n *= i;
    
    return n;
}

int main() {
    int n; cin >> n;

    cout << factorial(n) << '\n';
    cout << factorial2(n) << '\n';
}