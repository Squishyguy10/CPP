#include <bits/stdc++.h> 
using namespace std;
    
#define int long long
    
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, s, t;
    cin >> n >> s >> t;
    int arr[n], psa[n+1];
    psa[0] = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        psa[i+1] = psa[i] + arr[i];
    }
    if(s*t >= n) {
        cout << psa[n] << '\n';
        return 0;
    }

    int most = 0;
    for(int i = 0; i <= t; i++) {
        most = max(most, psa[i*s] + psa[n] - psa[n-s*(t-i)]);
    }
    cout << most << '\n';

    
    return 0;
}