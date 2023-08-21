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
        int sum = 0;
        for(int i = 1; i <= sqrt(a); i++) {
            if(a % i == 0) {
                int x = a/i;
                sum += i;
                if(x != i && x != a) {
                    sum += x;
                }
            }
        }

        if(sum > a) {
            cout << a << " is an abundant number." << '\n';
        }
        else if(sum == a) {
            cout << a << " is a perfect number." << '\n';
        }
        else {
            cout << a << " is a deficient number." << '\n';
        }
    }

    return 0;
}