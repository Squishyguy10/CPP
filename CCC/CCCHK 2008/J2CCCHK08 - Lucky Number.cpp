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
        string s; cin >> s;
        int a = 0;
        for(int i = 0; i < s.length(); i++) {
            a += s[i] - '0';
        }

        while(a >= 10) {
            int b = 0;
            for(; a > 0; a/=10) {
                b += a%10;
            }
            a = b;
        }
        cout << a << '\n';
    }



    return 0;
}