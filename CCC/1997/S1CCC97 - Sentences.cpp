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
        int a, b, c;
        cin >> a >> b >> c;
        string sub[a], verb[b], obj[c];
        string s;
        getline(cin, s);
        
        for(int i = 0; i < a; i++) {
            getline(cin, sub[i]);
        }
        for(int i = 0; i < b; i++) {
            getline(cin, verb[i]);
        }
        for(int i = 0; i < c; i++) {
            getline(cin, obj[i]);
        }

        for(int i = 0; i < a; i++) {
            for(int j = 0; j < b; j++) {
                for(int k = 0; k < c; k++) {
                    cout << sub[i] << " " << verb[j] << " " << obj[k] << "." << '\n';
                }
            }
        }
    }

    
    return 0;
}