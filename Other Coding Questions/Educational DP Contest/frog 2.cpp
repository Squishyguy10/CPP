#include <bits/stdc++.h> 
using namespace std;
    
#define int long long
    
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;
    cin >> n >> k;
    int arr[n], dp[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        dp[i] = INT_MAX; 
    }
    dp[0] = 0;

    for(int i = 0; i < n-1; i++) {
        for(int j = 1; j <= k; j++) {
            if(j+i == n) {
                break;
            }
            dp[i+j] = min(dp[i+j], dp[i] + abs(arr[i] - arr[i+j]));
        }     
    }
    cout << dp[n-1] << '\n';
    
    return 0;
}