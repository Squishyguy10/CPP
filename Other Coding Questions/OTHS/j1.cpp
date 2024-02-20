#include <bits/stdc++.h> 
using namespace std;
    
#define int long long
    
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b;
    cin >> a >> b;

    if(a == 0 || b == 0) {
        cout << 0 << '\n';
    }
    else {
        cout << a + b << '\n';
    }
    
    return 0;
}