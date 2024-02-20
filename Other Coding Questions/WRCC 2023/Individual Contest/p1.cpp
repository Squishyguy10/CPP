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
    
    int a, b;
    cin >> a >> b;
    int apair = 0;
    int bpair = 0;


    unordered_map<string, int> am;
    unordered_map<string, int> bm;

    while(a--) {
        string s; cin >> s;

        am.insert({s, 0});
        am[s]++;
    }
    while(b--) {
        string s; cin >> s;

        bm.insert({s, 0});
        bm[s]++;
    }

    for(auto i : am) {
        apair += i.s/2;
    }
    for(auto i : bm) {
        bpair += i.s/2;
    }


    if(apair > bpair) {
        cout << "Alice wins with " << apair << " pairs" << '\n';
    }
    else {
        cout << "Bob wins with " << bpair << " pairs" << '\n';
    }
    
    
    return 0;
}