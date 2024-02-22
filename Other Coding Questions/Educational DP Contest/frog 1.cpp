#include <bits/stdc++.h> 
using namespace std;
    
#define int long long
    
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    int arr[n], dp[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        dp[i] = INT_MAX; 
    }
    dp[0] = 0;

    for(int i = 0; i < n-1; i++) {
        dp[i+1] = min(dp[i+1], dp[i] + abs(arr[i] - arr[i+1]));
        if(i+2 < n) {
            dp[i+2] = min(dp[i+2], dp[i] + abs(arr[i] - arr[i+2]));
        }
    }
    cout << dp[n-1] << '\n';
    
    return 0;
}