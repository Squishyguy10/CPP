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

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    int mass[n];
    for(int i = 0; i < n; i++) cin >> mass[i];
    int psa[n];
    psa[0] = 0;
    for(int i = 1; i < n; i++) {
        psa[i] = psa[i-1] + mass[i];
    }
    int q; cin >> q;
    while(q--) {
        int a, b;
        cin >> a >> b;
        cout << psa[b] - psa[a] + mass[a] << '\n';
    }

    return 0;
}