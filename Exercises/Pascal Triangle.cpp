#include <bits/stdc++.h>
using namespace std;

int main() {
    int rows; cin >> rows;
    for(int r = 1; r <= rows; r++) {
        int n = 1;
        for(int i = 1; i <= r; i++) {
            cout << n << "  ";
            n = n * (r - i) / i;
        }
        cout << '\n';
    }
}