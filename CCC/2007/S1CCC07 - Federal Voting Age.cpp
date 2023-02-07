#include <bits/stdc++.h>
using namespace std;

#define int long long
#define first f
#define second s
#define pair<int, int> pii


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int cases; cin >> cases;
    while(cases--) {
        int y, m, d;
        cin >> y >> m >> d;

        if(2007 - y > 18) {
            cout << "Yes" << '\n';
            continue;
        }
        else if(2007 - y < 18) {
            cout << "No" << '\n';
            continue;
        }

        if(m == 1) {
            cout << "Yes" << '\n';
            continue;
        }
        else if(m > 2) {
            cout << "No" << '\n';
            continue;
        }
        
        if(d <= 27) {
            cout << "Yes" << '\n';
            continue;
        }
        else {
            cout << "No" << '\n';
            continue;
        }
    }
    return 0;
}