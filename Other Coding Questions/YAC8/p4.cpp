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


int operate(vector<int> &colours, int curr) {
    if(curr != -1) {
        for(int i = 0; i < colours.size(); i++) {

        }
    }
    
    if(colours.size() == 1) {
        return colours[0];
    }
    for(int i = 0; i < colours.size(); i++) {
        colours.erase(colours.begin()+i);
        for(int j = 0; j < ) {

        }
        operate(colours, colours[i]);
    }
}


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;
    vector<int> colours;

    for(int i = 0; i < n; i++) {
        int c; cin >> c;
        colours.pb(c);
    }

    if(operate(colours, -1) == x) {
        cout << "YES" << '\n';
    }
    else {
        cout << "NO" << '\n';
    }


    return 0;
}   