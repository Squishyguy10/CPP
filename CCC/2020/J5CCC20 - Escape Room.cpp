#include <bits/stdc++.h>
using namespace std;

const int MN = 1005;
const int NM = 1e6 + 5;
int table[MN][MN];
bool visited[NM]; 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int height, width; cin >> height >> width;
    queue<int> order;

    for(int i = 1; i <= height; i++)
        for(int j = 1; j <= width; j++)
            cin >> table[i][j];


    visited[1] = true;
    visited[table[1][1]] = true;
    order.push(table[1][1]);

    while(!order.empty()) {
        if(visited[width*height]) {
            cout << "yes" << '\n';
            return 0;
        }
        
        int cur = order.front();
        order.pop();

        int sq = sqrt(cur);
        for(int i = 1; i <= sq; i++) {
            if(cur%i == 0) {
                int x = cur/i;
                
                if(x <= height && i <= width) {
                    if(!visited[table[x][i]]) {
                        order.push(table[x][i]);
                        visited[table[x][i]] = true;
                    }
                }
                if(i <= height && x <= width) {
                    if(!visited[table[i][x]]) {
                        order.push(table[i][x]);
                        visited[table[i][x]] = true;
                    }
                }
            }
        }
    }
    cout << "no" << '\n';

    return 0;
}