#include <bits/stdc++.h>
using namespace std;

int gcf(int n, int m) {
    if(m == 1)
        return n;
    else if(m == 0)
        return 0;
    return gcf(m, m % n);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x, m; cin >> x >> m;

    if(__gcd(x, m) != 1) {
        
    }

    int output = gcf(x, m);
    if(output == 0)
        cout << "No such integer exists." << '\n';
    else
        cout << output << '\n';
}