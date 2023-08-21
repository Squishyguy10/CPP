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

    int p; cin >> p;
    
    unordered_map <int, string> ppl;
    unordered_map <int, int> count;

    while(p--) {
        string a;
        int b;
        cin >> a >> b;
        ppl.insert({b, a});
        count.insert({b, 0});
    }

    int c; cin >> c;
    while(c--) {
        int a; cin >> a;
        count[a]++;
    }

    int m = 0;
    for(auto i : count) {
        m = max(m, i.s);
    }

    int mini = INT_MAX;
    for(auto i : count) {
        if(m == i.s) {
            mini = min(mini, i.f);
        }
    }

    cout << ppl[mini] << '\n';



    return 0;
}