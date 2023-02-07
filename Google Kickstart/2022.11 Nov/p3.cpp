#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long

int outp = 1;

void dfs(int cur, int par, bool visited[], vector<int> adj[], int charge[]) {
    visited[cur] = 1;
    
    for(int next : adj[cur]) {
        if((!visited[next] || !next == par) && (charge[cur] > charge[next])) {
            outp++;
            dfs(next, cur, visited, adj, charge);
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int cases; cin >> cases;
    
    for(int c = 1; c <= cases; c++) {
        int nodes; cin >> nodes;
        int charge[nodes+1];
        vector<int> adj[nodes+1];
        int m = 1;

        for(int i = 1; i <= nodes; i++) {
            cin >> charge[i];
        }

        for(int i = 1; i < nodes; i++) {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        for(int i = 1; i <= nodes; i++) {
            if(charge[i] > 1) {
                bool visited[nodes+1] = {};

                if(!visited[i]) {
                    outp = 1;
                    dfs(i, 0, visited, adj, charge);
                    m = max(m, outp);
                }
            }
        }

        cout << "Case #" << c << ": " << m << '\n';
    }

    return 0;
}