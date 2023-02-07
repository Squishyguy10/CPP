#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int cases; cin >> cases;
    for(int c = 1; c <= cases; c++) {
        int total = 0;
        int N, Q; cin >> N >> Q;
        vector<vector<pair<int, int>>> vect;
        vect[1].push_back({1, 1});
    
        for(int i = 1; i < N; i++) {
            int x, y; cin >> x >> y;
            vect[vect[x][y].second+1].push_back({y, vect[x][y].second});
        }

        bool filled[N] = {};
        for(int i = 0; i < Q; i++) {
            int query; cin >> query;
        }

        for(int i = 1; Q > 0; i++) {
            if(Q >= vect[i].size()) {
                Q -= vect[i].size();
                total += vect[i].size();
            }
            else {
                break;
            }
        }

        cout << "Case #" << c << ": " << total << '\n';
    }
    return 0;
}