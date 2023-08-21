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
    string t;
    getline(cin, t);
    while(n--) {
        string s;
        getline(cin, s);
        vector<int> spaces;

        spaces.pb(-1);
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == ' ') {
                spaces.pb(i);
            }
        }
        int end;
        for(int i = s.length(); i >= 0; i--) {
            if(s[i] != ' ') {
                end = i;
                break;
            }
        }
        spaces.pb(s.length());
        
        for(int i = 1; i < spaces.size(); i++) {
            if(spaces[i] - spaces[i-1] == 5) {
                s.replace(spaces[i-1]+1, 4, "****");
            }
        }
        cout << s.substr(0,end) << '\n';
    }

    return 0;
}