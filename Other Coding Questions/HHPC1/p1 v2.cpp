#include <bits/stdc++.h>
using namespace std;

#define int long long
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
        int l; cin >> l;
        string input; cin >> input;

        vector<pair<char, int>> sub;
        int conseq = 1;
        for(int i = 1; i < l; i++) {
            if(input[i] == input[i-1]) {
                conseq++;
            }
            else {
                sub.pb({input[i-1], conseq});
                conseq = 1;
            }
        }
        sub.pb({input[l-1], conseq});

        int longest = 1;
        for(int i = 0; i < sub.size(); i++) {
            longest = max(longest, sub[i].s + 1);
        }

        for(int i = 1; i < sub.size()-1; i++) {
            if(sub[i].s == 1) {
                if(sub[i-1].f == sub[i+1].f) {
                    longest = max(longest, sub[i-1].s + sub[i+1].s + 1);
                }
            }
        }

        if(longest > l) {
            longest--;
        }

        cout << longest << '\n';
    }



    return 0;
}