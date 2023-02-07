#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long int

ull fib1(int n) {
    ull sum = 1;
    ull old_sum = -1;

    for(int i = 0; i <= n; i++) {
        sum += old_sum;
        old_sum = sum - old_sum;
    }
    return sum;
}

ull fib2(int n) {
    if(n == 1 || n == 2)
        return 1;

    return fib2(n-1) + fib2(n-2);
}

int main() {
    int n; cin >> n;

    cout << fib1(n) << '\n';
    cout << fib2(n) << '\n';
} 