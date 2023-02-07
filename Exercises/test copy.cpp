#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pii pair<int, int>
#define psi pair<string, int>
#define pis pair<int, string>

bool compare(pis a, pis b) {
    if(a.f == b.f) {
        return a.s < b.s;
    }
    return a.f > b.f;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    pis arr[n];

    for(int i = 0; i < n; i++) {
        int r, z, d;
        cin >> arr[i].s;
        cin >> r >> z >> d;
        arr[i].f = 2*r + 3*z + d;
    }

    sort(arr, arr+n, compare);

    if(n >= 2) {
        cout << arr[0].s << '\n';
        cout << arr[1].s << '\n';
    }
    else if(n == 1) {
        cout << arr[0].s << '\n';
    }
    
    return 0;
}