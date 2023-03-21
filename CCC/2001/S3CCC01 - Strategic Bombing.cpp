#include <bits/stdc++.h>
using namespace std;

#define int long long

bool visited[26];
vector<int> adj[26];
vector<string> basgoong;
vector<string> roads;

void dfs(int cur, int node1, int node2) {
    visited[cur] = true;
    for(int next : adj[cur]) {
        if(visited[next] || (cur == node1 && next == node2) || (cur == node2 && next == node1)) {
            continue;
        }
        dfs(next, node1, node2);
    }
}


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while(true) {
        string str;
        cin >> str;
        if(str == "**") {
            break;
        }
        basgoong.push_back(str);
        adj[str[0]-'A'].push_back(str[1]-'A');
        adj[str[1]-'A'].push_back(str[0]-'A');
    }

    for(string balls : basgoong) {
        for(int i = 0; i < 26; i++) {
            visited[i] = false;
        }
        dfs(0, balls[0] - 'A', balls[1] - 'A');
        if(!visited[1]) {
            roads.push_back(balls);
        }
    }

    for(string str : roads) {
        cout << str << '\n';
    }
    cout << "There are " << roads.size() << " disconnecting roads." << '\n';

    return 0;
}