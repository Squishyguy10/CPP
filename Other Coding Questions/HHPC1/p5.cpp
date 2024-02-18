#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    while(n--) {
        int c; cin >> c;
        int outp = 1;
        int a = c+2;
        if(c % 2 == 1) {
            a++;
        }

        for(; a <= c*(c+1); a+=c) {
            if(c*c % (a-c) == 0) {
                outp++;
            }
        }
        cout << outp << '\n';
    }

    return 0;
}