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
    
    int c; cin >> c;

    while(c--) {
        int a, b; cin >> a >> b;
        cout << (a-1)+(b-1) + 1 << '\n';
    }

    
    return 0;
}