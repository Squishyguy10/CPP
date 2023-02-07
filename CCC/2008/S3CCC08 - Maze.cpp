#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second

int r, c;

int bfs(char cur, vector<vector<char>> vect) {
    bool visited[r][c];
    queue<pair<int, int>> q;

    visited[0][0] = true;
    q.push({0, 0});

    while(!q.empty()) {
        char curr = vect[q.front().f][q.front().s];
        q.pop();
        visited[]
        
        if()
    }


}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int cases;
    cin >> cases;

    while(cases--) {
        cin >> r >> c;       
        vector<vector<char>> vect(r, vector<char> (c, 0));

        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                cin >> vect[i][j];
            }
        }

        cout << bfs(vect[0][0], vect) << '\n';
    }
    
    return 0;
}