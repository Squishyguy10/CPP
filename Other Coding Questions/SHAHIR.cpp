#include <bits/stdc++.h>

using namespace std;

const int MN = 2006;

int N, M, A, B; 
vector<int> adj[MN];
bool visited[MN];

void dfs(int cur, int par) {
    visited[cur] = true;
    for(int i : adj[cur]) {
        if(visited[i]) 
            continue;
        dfs(i, cur);
    }
}

int main() {
    cin >> N >> M >> A >> B;
    
    for(int i = 0; i < M; i++) {
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    dfs(A, 0);

    if(visited[B])
        cout << "GO SHAHIR!" << '\n';
    else
        cout << "NO SHAHIR!" << '\n';

    return 0;
}