#include <bits/stdc++.h>
using namespace std;

#define int long long

/*
1,7
1,4
2,1
3,4
3,5
*/
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    bool outp = true;
    vector<int> vect;
    pair<int, int> p[6] = {};
    for(int i = 0; p[i].first != 0; i++) {
        cin >> p[i].first >> p[i].second;
    }

    vect.push_back(p[0].first);
    vect.push_back(p[0].second);

    for(int i = 0; i < 7; i++) {
        
    }


    
    return 0;
}