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

bool seen[1000005];

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    int a[n], psa[n];
    
    vector<vector<int>> list(1000005);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(i > 0) {
            psa[i] = psa[i-1] + a[i];
        }
        else {
            psa[0] = a[i];
        }
        
        seen[a[i]] = true;
        list[a[i]].pb(i);
    }

    for(int num = 1; num <= k; num++) {
        int x; cin >> x;
        if(!seen[num]) {
            cout << psa[n-1] << '\n';
        }
        else {
            int sum = psa[n-1];
            int carry = x+1;
            int start = list[num].size()-1;
            for(int i = list[num].size()-1; i >= 0; i--) {
                if(i > 0 && list[num][i] - list[num][i-1] <= x) {
                    carry += x+1;
                }
                else {
                    if(list[num][start]-carry < 0) {
                        sum -= (psa[list[num][start]] - 0);
                    }
                    else {
                        sum -= (psa[list[num][start]] - psa[list[num][start]-carry]);
                    }
                    start = i-1;
                }
            }
            cout << sum << '\n';
        }
    }
    return 0;
}