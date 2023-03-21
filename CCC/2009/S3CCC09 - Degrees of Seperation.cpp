#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

vector<int> adj[50];

int bfs(int start, int end) {
    queue<int> q;
    bool visited[55] = {};
    vector<int> degree(50);
    q.push(start);
    visited[start] = true;
    degree[start] = 0;

    while(!q.empty()) { 
        int curr = q.front();
        q.pop();
        if(curr == end) {
            return degree[curr];
        }

        for(int nxt : adj[curr]) {
            if(!visited[nxt]) {
                visited[nxt] = true;
                q.push(nxt);
                degree[nxt] = degree[curr]+1;
            }
        }
    }
    return -1;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    adj[1].pb(6); adj[2].pb(6); adj[3].pb(4); adj[3].pb(5); adj[3].pb(6);
    adj[3].pb(15); adj[4].pb(3); adj[4].pb(5); adj[4].pb(6); adj[5].pb(3);
    adj[5].pb(3); adj[5].pb(4); adj[5].pb(6); adj[6].pb(1); adj[6].pb(2);
    adj[6].pb(3); adj[6].pb(4); adj[6].pb(5); adj[6].pb(7); adj[7].pb(6);
    adj[7].pb(8); adj[8].pb(7); adj[8].pb(9); adj[9].pb(8); adj[9].pb(10);
    adj[9].pb(12); adj[10].pb(9); adj[10].pb(11); adj[11].pb(10);
    adj[11].pb(12); adj[12].pb(9); adj[12].pb(11); adj[12].pb(13);
    adj[13].pb(12); adj[13].pb(14); adj[13].pb(15); adj[14].pb(13);
    adj[15].pb(3); adj[15].pb(13); adj[16].pb(17); adj[16].pb(18);
    adj[17].pb(16); adj[17].pb(18); adj[18].pb(16); adj[18].pb(17);
    
    char c;
    while(cin >> c) {
        int a, b;
        if(c == 'q') {
            break;
        }
        else if(c == 'i') {
            cin >> a >> b;
            adj[a].pb(b);
            adj[b].pb(a);
        }
        else if(c == 'd') {
            cin >> a >> b;
            for(int i = 0; i < adj[a].size(); i++) {
                if(adj[a][i] == b) {
                    adj[a].erase(adj[a].begin() + i);
                    break;
                }
            }
            for(int i = 0; i < adj[b].size(); i++) {
                if(adj[b][i] == a) {
                    adj[b].erase(adj[b].begin() + i);
                    break;
                }
            }
        }
        else if(c == 'n') {
            cin >> a;
            cout << adj[a].size() << '\n';
        }
        else if(c == 'f') {
            cin >> a;
            set<int> friends;

            for(int i : adj[a]) {
                for(int j : adj[i]) {
                    bool basg = false;
                    for(int k : adj[a]) {
                        if(j == k) {
                            basg = true;
                            break;
                        }
                    }
                    if(!basg) {
                        friends.insert(j);
                    } 
                }
            }
            cout << friends.size() - 1 << '\n';
        }
        else {
            cin >> a >> b;
            
            int degree = bfs(a, b);
            if(degree == -1) {
                cout << "Not connected" << '\n';
            }
            else {
                cout << degree << '\n';
            }
        }
    }

    return 0;
}