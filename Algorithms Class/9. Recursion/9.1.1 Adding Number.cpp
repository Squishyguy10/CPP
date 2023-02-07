#include <bits/stdc++.h>
using namespace std;

int monke(int n, int sum) {
    if(n > 100)
        return sum;
    return monke(n + 1, sum + n);
}

int golira(int n) {
    if(n == 0)
        return n;
    return n + golira(n - 1);
}

int main() {
    int num = 101 * 50;
    
    int n = 0;
    for(int i = 1; i <= 100; i++)
        n += i;

    cout << num << '\n';
    cout << n << '\n';
    cout << monke(1, 0) << '\n';
    cout << golira(100) << '\n';
}