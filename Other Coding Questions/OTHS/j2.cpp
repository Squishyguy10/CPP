#include <bits/stdc++.h> 
using namespace std;
    
#define int long long
    
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    int sum = 0;
    int m = 0;
    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        sum += a;
        m = max(a, m);
    }
    cout << (sum-m)/(n-1) << '\n';
    
    return 0;
}