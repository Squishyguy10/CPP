#include <bits/stdc++.h>
using namespace std;

#define int long long

// it is 1 indexed

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    int arr[n+1];
    int ans[n+1];
    int odd[n+1];
    int even[n];
    
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        odd[i] = 0;
        ans[i] = INT_MAX;
    }
    ans[1] = 0;

    for(int k = 1; k < n; k++) {
        even[k] = abs(arr[k] - arr[k+1]);
        ans[2] = min(ans[2], even[k]);
    }

    for(int i = 3; i <= n; i++) {
        int sum = ans[i-2];
        int end = i/2;
        if(i % 2 == 1) {
            for(int j = end+1; j <= n-end; j++) {
                odd[j] += abs(arr[j-end] - arr[j+end]);
                ans[i] = min(ans[i], odd[j]);
            }
        }
        else {
            for(int j = end; j <= n-end; j++) {
                even[j] += abs(arr[j-end+1] - arr[j+end]);
                ans[i] = min(ans[i], even[j]);
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }
    cout << '\n';

    return 0;
}