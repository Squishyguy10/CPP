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
    int cmax = 0;
    while(c--) {
        int a, b;
        cin >> a >> b;
        cmax = max(cmax, a*b);
    }

    int n; cin >> n;
    int nmax = 0;
    while(n--) {
        int a, b;
        cin >> a >> b;
        nmax = max(nmax, a*b);
    }

    if(cmax > nmax) {
        cout << "Casper" << '\n';
    }
    else if(nmax > cmax) {
        cout << "Natalie" << '\n';
    }
    else {
        cout << "Tie" << '\n';
    }

    return 0;
}