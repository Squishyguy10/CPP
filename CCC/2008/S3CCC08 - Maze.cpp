#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second

char maze[21][21];
int moves[21][21];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int cases; cin >> cases;
    while(cases--) {
        int r, c;
        cin >> r >> c;       
        queue<pair<int, int>> q;

        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                cin >> maze[i][j];
                moves[i][j] = INT_MAX;
            }
        }

        moves[0][0] = 1;
        q.push({0, 0});
        while(!q.empty()) {
            int y = q.front().f, x = q.front().s;
            q.pop();
            if(moves[r-1][c-1] != INT_MAX) {
                break;
            }
            if(maze[y][x] == '+') {
                if(y - 1 >= 0 && moves[y-1][x] == INT_MAX && maze[y-1][x] != '*') {
                    q.push({y-1, x});
                    moves[y-1][x] = moves[y][x]+1;
                }
                if(x - 1 >= 0 && moves[y][x-1] == INT_MAX && maze[y][x-1] != '*') {
                    q.push({y, x-1});
                    moves[y][x-1] = moves[y][x]+1;
                }
                if(y + 1 < r && moves[y+1][x] == INT_MAX && maze[y+1][x] != '*') {
                    q.push({y+1, x});
                    moves[y+1][x] = moves[y][x]+1;
                }
                if(x + 1 < c && moves[y][x+1] == INT_MAX && maze[y][x+1] != '*') {
                    q.push({y, x+1});
                    moves[y][x+1] = moves[y][x]+1;
                }
            }
            else if(maze[y][x] == '|') {
                if(y - 1 >= 0 && moves[y-1][x] == INT_MAX && maze[y-1][x] != '*') {
                    q.push({y-1, x});
                    moves[y-1][x] = moves[y][x]+1;
                }
                if(y + 1 < r && moves[y+1][x] == INT_MAX && maze[y+1][x] != '*') {
                    q.push({y+1, x});
                    moves[y+1][x] = moves[y][x]+1;
                }
            }
            else if(maze[y][x] == '-') {
                if(x - 1 >= 0 && moves[y][x-1] == INT_MAX && maze[y][x-1] != '*') {
                    q.push({y, x-1});
                    moves[y][x-1] = moves[y][x]+1;
                }
                if(x + 1 < c && moves[y][x+1] == INT_MAX && maze[y][x+1] != '*') {
                    q.push({y, x+1});
                    moves[y][x+1] = moves[y][x]+1;
                }
            }
        }
        if(r == 1 && c == 1)
            cout << 1 << '\n';
        else if(moves[r-1][c-1] == INT_MAX)
            cout << -1 << '\n';
        else
            cout << moves[r-1][c-1] << '\n';
    }
    return 0;
}