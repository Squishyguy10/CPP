#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pii pair<int, int>
#define pb push_back

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;
        int arr[n][m];

        if(n == 1 || m == 1) {
            cout << -1 << '\n';
        }
        else {
            int curr = 2;
            for(int i = 0; i < n; i++) {
                if(i % 2 == 0) {
                    for(int j = 0; j < m; j++) {
                        if(curr == n*m+1) {
                            cout << 1;
                        }
                        else {
                            cout << curr << " ";
                        }
                        curr++;
                    }
                    cout << '\n';
                }
                else {
                    curr+= m-1;
                    for(int j = 0; j < m; j++) {
                        if(curr-j == n*m+1) {
                            cout << 1 << " ";
                        }
                        else {
                            cout << curr-j << " ";
                        }
                    }
                    cout << '\n';
                    curr++;
                }
            }
        }
    }

    return 0;
}