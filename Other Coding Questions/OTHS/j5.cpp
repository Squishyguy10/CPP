#include <bits/stdc++.h> 
using namespace std;
    
#define int long long
    
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;

    while(t--) {
        int row, col;
        cin >> row >> col;
        char maze[row][col];
        bool visited[row][col];

        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                cin >> maze[i][j];
                visited[i][j] = false;
            }
        }

        int count = 0;
        queue<int, int> q;
        q.push((0, 0));
        visited[0][0] = true;
        
        while(!q.emtpy() {
            
        })

        cout << count << '\n';
    }
    
    return 0;
}