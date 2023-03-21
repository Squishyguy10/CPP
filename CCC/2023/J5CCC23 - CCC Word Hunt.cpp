#include <bits/stdc++.h>
using namespace std;

char grid[105][105];
int r, c; 
string word;
int ans = 0;

void dfs(int x, int y, int itr, bool bend, int down, int right) {
    if((x < 0 || x >= r) || (y < 0 || y >= c) || itr >= word.size()) {
        return;
    }

    if(itr == word.size()-1 && word[itr] == grid[x][y]) {
        ans++;
        return;
    }

    if(word[itr] == grid[x][y]) {
        dfs(x + down, y + right, itr+1, bend, down, right);
        if(!bend && itr != 0) {
            if(down != 0 && right == 0) {
                dfs(x, y + 1, itr+1, true, 0, 1);
                dfs(x, y - 1, itr+1, true, 0, -1);
            }
            else if(right != 0 && down == 0) {
                dfs(x + 1, y, itr+1, true, 1, 0);
                dfs(x - 1, y, itr+1, true, -1, 0);
            }
            else {
                dfs(x - down, y + right, itr+1, true, -1*down, right);
                dfs(x + down, y - right, itr+1, true, down, -1*right);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<pair<int, int>> pos;
    cin >> word >> r >> c;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> grid[i][j];
            if(grid[i][j] == word[0]) {
                pos.push_back({i, j});
            }
        }
    }

    for(int i = 0; i < pos.size(); i++) {
        dfs(pos[i].first, pos[i].second, 0, 0, 1, 0);
        dfs(pos[i].first, pos[i].second, 0, 0, -1, 0);
        dfs(pos[i].first, pos[i].second, 0, 0, 0, 1);
        dfs(pos[i].first, pos[i].second, 0, 0, 0, -1);
        dfs(pos[i].first, pos[i].second, 0, 0, 1, 1);
        dfs(pos[i].first, pos[i].second, 0, 0, 1, -1);
        dfs(pos[i].first, pos[i].second, 0, 0, -1, 1);
        dfs(pos[i].first, pos[i].second, 0, 0, -1, -1);
    }
    cout << ans << '\n';
    
    return 0;
}