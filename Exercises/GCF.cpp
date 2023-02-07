#include <bits/stdc++.h>
using namespace std;

int gcf(int n, int m) {
    if(m == 0)
        return n;
    return gcf(m, m % n);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;

    cout << gcf(n, m) << '\n';
    cout << __gcd(n, m) << '\n';     // built in euclidean gcd function
   
}