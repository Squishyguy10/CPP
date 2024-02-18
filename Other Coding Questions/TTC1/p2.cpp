#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pii pair<int, int>
#define psi pair<string, int>
#define pis pair<int, string>
#define pss pair<string, string>
#define pb push_back

bool seen[1000001];

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, totalSum = 0;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        totalSum += a[i];
        seen[a[i]] = true;
    }
    for(int num = 1; num <= k; num++) {
        int x; cin >> x;
        if(!seen[num]) {
            cout << totalSum << '\n';
        }
        else {
            int skip = 0, sum = totalSum;
            for(int i = n-1; i >= 0; i--) {
                if(skip == 0) {
                    if(a[i] == num) {
                        skip += x;
                    }
                    else {
                        sum -= a[i];
                    }
                }
                else {
                    if(a[i] == num) {
                        skip += x;
                    }
                    else {
                        skip--;
                    }
                }
            }
            cout << sum << '\n';
        }
    }
    return 0;
}