#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M;
    cin >> N >> M;
    int squares = N * M;

    if(N % 2 == 0 || M % 2 == 0) {
        cout << squares/2 << " " << squares/2 << '\n';
    }
    else {
        int x = max(N, M);
        int y = min(N, M);
        cout << squares - (x/2 * y) << " " << x/2 * y << '\n';
    }

    return 0;
}