#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    while(n--) {
        int c, outp = 1; cin >> c;
        
        for(int i = 3; i <= c; i++)
            if(c*c % i == 0)
                outp += 2;

        cout << outp << '\n';
    }

    return 0;
}