#include <bits/stdc++.h>
using namespace std;

int recursion(int n) {
    cout << n << '\n';

    if(n == 0)
        return 0;
    
    recursion(n-1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    int n; cin >> n;
    recursion(n);
}