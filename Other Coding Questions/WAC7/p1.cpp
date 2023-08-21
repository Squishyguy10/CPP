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

    int nodes;
    int edges;
    cin >> nodes >> edges;

    vector<vector<int>> adj(nodes+1);
    bool visited[nodes] = {};

    int arr[nodes+1] = {};

    for(int i = 1; i <= edges; i++) {
        int a, b; cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    bool visited[nodes] = {};


    // bfs
    while()

    for(int i = 1; i <= nodes; i++) {
        vector<int> v;
        for(int j : adj[i]) {
            v.pb()
        }
    }

    

    
    return 0;
}