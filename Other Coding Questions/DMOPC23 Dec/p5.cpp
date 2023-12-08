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

int findsum(vector<int> a, vector<int> b, int n) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += abs(a[i]-b[i]);
    }
    return sum;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    for(int l = 0; l <= q; l++) {
        if(l > 0) {
            int u, v;
            cin >> u >> v;

            int temp = a[u-1];
            a[u-1] = b[v-1];
            b[v-1] = temp;
        }
        cout << findsum(a, b, n) << '\n';
        
    }

    return 0;
}