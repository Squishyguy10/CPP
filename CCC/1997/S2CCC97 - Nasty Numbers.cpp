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

    int n; cin >> n;

    while(n--) {
        int a; cin >> a;
        unordered_set<int> diff;
        unordered_set<int> sum;

        for(int i = 1; i <= sqrt(a); i++) {
            if(a % i == 0) {
                int x = a/i;

                sum.insert(i+x);
                if(x >= i) {
                    diff.insert(x-i);
                }
                else {
                    diff.insert(i-x);
                }
            }
        }
        int dsize = diff.size();
        diff.insert(sum.begin(), sum.end());

        if(diff.size() != (dsize + sum.size())) {
            cout << a << " is nasty" << '\n';
        }
        else {
            cout << a << " is not nasty" << '\n';
        }
    }

    return 0;
}