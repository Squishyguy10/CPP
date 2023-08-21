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
    
    int cases; cin >> cases;
    
    for(int c = 1; c <= cases; c++) {
        unordered_map<char, char> mp;

        for(int i = 0; i < 26; i++) {
            char n; cin >> n;
            mp['A'+i] = n;
        }

        int codes; cin >> codes;
        unordered_set<string> count;

        for(int i = 0; i < codes; i++) {
            string s; cin >> s;
            string ans = "";

            for(int j = 0; j < s.length(); j++) {
                ans += mp[s[j]];
            }
            count.insert(ans);
        }

        string outp = "NO";
        if(count.size() != codes) {
            outp = "YES";
        }
        cout << "Case #" << c << ": " << outp << '\n';
    }

    return 0;
}