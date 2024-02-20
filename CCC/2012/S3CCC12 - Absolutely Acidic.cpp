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
    map<int, int> reading;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        reading[x]++;
    }

    int mostFreq = 0;
    vector<int> posMostFreq;
    for(auto i : reading) {
        mostFreq = max(i.s, mostFreq);
    }

    for(auto i : reading) {
        if(i.s == mostFreq) {
            posMostFreq.pb(i.f);
        }
    }

    if(posMostFreq.size() > 1) {
        cout << posMostFreq.back() - posMostFreq.front() << '\n';
        return 0;
    }

    int secondFreq = 0;
    for(auto i : reading) {
        if(i.s != mostFreq) {
            secondFreq = max(i.s, secondFreq);
        }
    }

    vector<int> posSecondFreq;
    for(auto i : reading) {
        if(i.s == secondFreq) {
            posSecondFreq.pb(i.f);
        }
    }
    if(posMostFreq.size() == 1) {
        cout << max(abs(posSecondFreq.back() - posMostFreq.front()), abs(posSecondFreq.front() - posMostFreq.front())) << '\n';
    }
    else {
        cout << posSecondFreq.back() - posSecondFreq.front() << '\n';
    }

    return 0;
}