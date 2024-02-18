#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long
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

    while(n--) {
        int c; cin >> c;

        int outp = 1;
        for(int a = c+1; a < 6*c*c; a++) {
            for(int b = 2*a; b < 6*c*c; b+= a) {
                if(a*b == c*(a+b)) {
                    outp += 2;
                }
            }
        }
        cout << outp << '\n';
    }

    return 0;
}