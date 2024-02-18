#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    while(n--) {
        int c, outp = 1, num = 1;
        cin >> c;
        while(c % 2 == 0) {
            c /= 2;
            num+=2;
        }
        outp *= num;
        for(int i = 3; i <= sqrt(c); i+= 2) {
            num = 1;
            while(c % i == 0) {
                c /= i;
                num+=2;
            }
            outp *= num;
        }
        if(c > 2) outp *= (num+1);
        cout << outp << '\n';
    }
    return 0;
}