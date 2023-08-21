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
    
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> vect;
    
    vect.pb(1);
    for(int i = 0; i < n; i++) {
        int num; cin >> num;
        if(num <= m) {
            vect.pb(num);
        }
        else {
            break;
        }
    }
    vect.pb(m);

    int masoo = 0;
    for(int i = 1; i < vect.size()-1; i++) {
        int fart = vect[i]-k;
        if(fart < 0) {
            fart = 0;
        }
        if(i > 0 && fart < vect[i-1]) {
            fart = vect[i-1];
        }
        masoo = max(vect[i+1]-fart - 1, masoo);
        
        int chit = vect[i+1]+k;
        if(chit > m) {
            chit = m;
        }
        if(i < vect.size()-2 && chit > vect[i+2]) {
            chit = vect[i+2];
        }
        masoo = max(chit-vect[i] - 1, masoo);
    }

    cout << masoo << '\n';
    
    return 0;
}