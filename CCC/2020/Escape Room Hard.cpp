#include <bits/stdc++.h>
using namespace std;

const int MN = 16000005;

bool visited[MN];
vector<vector<int>> v;


bool can_escape(int M, int N) {
    queue<int> order;
    visited[1] = true;
    visited[v[1][1]] = true;
    order.push(v[1][1]);

    while(!order.empty()) {
        if(visited[N*M])
            return true;
        
        int cur = order.front();
        order.pop();

        int sq = sqrt(cur);
        for(int i = 1; i <= sq; i++) {
            if(cur%i == 0) {
                int x = cur/i;
                
                if(x <= M && i <= N) {
                    if(!visited[v[x][i]]) {
                        order.push(v[x][i]);
                        visited[v[x][i]] = true;
                    }
                }
                if(i <= M && x <= N) {
                    if(!visited[v[i][x]]) {
                        order.push(v[i][x]);
                        visited[v[i][x]] = true;
                    }
                }
            }
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int height, width; cin >> height >> width;

    for(int i = 1; i <= height; i++) {
        for(int j = 1; j <= width; j++) {
            int n; cin >> n;
            v[i].push_back(n);
        }
    }

    can_escape(height, width);

    return 0;
}
