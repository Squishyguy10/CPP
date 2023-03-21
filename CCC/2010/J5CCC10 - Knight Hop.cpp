#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    pair<int, int> starting, ending;
    cin >> starting.f >> starting.s >> ending.f >> ending.s;

    queue<pair<int, int>> q;
    bool visited[9][9] = {};
    int degree[9][9] = {};
    q.push(starting);
    pair<int, int> arr[8] = {{2, 1}, {2, -1}, {1, 2}, {1, -2}, {-2, -1}, {-2, 1}, {-1, -2}, {-1, 2}};

    while(!q.empty()) {
        pair<int, int> curr = q.front();
        q.pop();
        if(!visited[curr.f][curr.s]) {
            visited[curr.f][curr.s] = 1;
            if(curr.f == ending.f && curr.s == ending.s) {
                cout << degree[ending.f][ending.s] << '\n';
                return 0;
            }

            for(int i = 0; i < 8; i++) {
                if((curr.f+arr[i].f > 0 && curr.f+arr[i].f <= 8) && (curr.s+arr[i].s > 0 && curr.s+arr[i].s <= 8)) {
                    degree[curr.f+arr[i].f][curr.s+arr[i].s] = degree[curr.f][curr.s] + 1;
                    q.push({curr.f+arr[i].f, curr.s+arr[i].s});
                }
            }
        }
    }
    
    return 0;
}