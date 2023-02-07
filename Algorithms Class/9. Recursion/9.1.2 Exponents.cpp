#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long int

ull exponent(int n, int exp) {
    if(exp == 1)
        return n;
    
    return n * exponent(n, exp-1);
}

ull exponent2(int n, int exp) {
    ull product = n;
    for(int i = 1; i < exp; i++)
        product *= n;

    return product;
}

int main() {
    int n, exp;
    cin >> n >> exp;

    cout << exponent2(n, exp) << '\n';
    cout << exponent(n, exp) << '\n';
}