#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string s;
    cin >> n >> s;
    
    int pos = 0;
    for(int i = n-1; i >= 0; i--) {
        if(s[i] == 'Y') {
            pos = i;
            break;
        }
    }

    if(pos+1 > n-pos-1) {
        cout << "YES" << '\n';
        return 0;
    }
    else {
        cout << "NO" << '\n';
        return 0;
    }
}