#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int distance, clubs;
    cin >> distance >> clubs;
    int arr[clubs];
    int dp[distance+1];

    for(int i = 0; i < clubs; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i <= distance; i++) {
        dp[i] = 5281;
    }
    dp[0] = 0;

    for(int d = 0; d <= distance; d++) {
        for(int c = 0; c < clubs; c++) {
            if(dp[d] != 5281 && d + arr[c] <= distance) {
                dp[d + arr[c]] = min(dp[d]+1, dp[d + arr[c]]);
            }
        }
    }

    if(dp[distance] != 5281) {
        cout << "Roberta wins in " << dp[distance] << " strokes." << '\n';
    }
    else {
        cout << "Roberta acknowledges defeat." << '\n';
    }



    return 0;
}