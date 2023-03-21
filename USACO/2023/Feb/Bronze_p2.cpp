#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pii pair<int, int

const int MN = 25;
char paint[25][25];
char stamp1[25][25], stamp2[25][25], stamp3[25][25], stamp4[25][25]; 

bool mukbang(int n, int k, char ans[25][25], int x, int y) {
    for(; x < n-k; x++) {
        for(; y < n-k; y++) {
            mukbang(n, k, ans, x, y);
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(paint[i][j] != ans[i][j]) {
                return false;
            }
        }
    }
    return true;
}


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int cases;
    cin >> cases;

    while(cases--) {
        int n; cin >> n;
        char ans[25][25];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> paint[i][j];
                ans[i][j] = '.';
            }
        }

        int k; cin >> k;
        for(int i = 0; i < k; i++) {
            for(int j = 0; j < k; j++) {
                cin >> stamp1[i][j];
                stamp2[k-i-1][k-j-1] = stamp1[i][j];
                stamp3[k-i-1][j] = stamp1[i][j];
                stamp4[i][k-j-1] = stamp1[i][j];
            }
        }

        if(mukbang(n, k, ans, 0, 0)) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
    
    return 0;
}