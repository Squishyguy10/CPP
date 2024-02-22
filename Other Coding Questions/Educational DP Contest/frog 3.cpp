#include <bits/stdc++.h> 
using namespace std;
    
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, c;
    cin >> n >> c;
    int arr[n], dp[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        dp[i] = LLONG_MAX; 
    }
    dp[0] = 0;
    dp[n-1] = (arr[n-1] - arr[0])*(arr[n-1] - arr[0]) + c;

    for(int i = 0; i < n; i++) {
        dp[n-1] = min(dp[n-1], dp[i] + (arr[n-1] - arr[i])*(arr[n-1] - arr[i]) + c);
        if(dp[i]+2*c < dp[n-1]) {
            for(int j = i+1; j < n-1; j++) {
                dp[j] = min(dp[j], dp[i] + (arr[j] - arr[i])*(arr[j] - arr[i]) + c);
            }
        }
    }
    cout << dp[n-1] << '\n';
    
    return 0;
}