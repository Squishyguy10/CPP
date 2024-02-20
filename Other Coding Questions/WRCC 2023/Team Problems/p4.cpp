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
    
    int t, n;
    cin >> t >> n;
    n %= 26;
    string filler;
    getline(cin, filler);

    while(t--) {
        string s;
        getline(cin, s);

        for(int i = 0; i < s.length(); i++) {
            if(s[i] != ' ') {
                s[i] -= n;
                if(s[i] < 'a') {
                    s[i] += 26;
                }
            }
            cout << s[i];
        }
        cout << endl;
    }    
    
    return 0;
}