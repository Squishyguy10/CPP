#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pii pair<int, int>
#define psi pair<string, int>
#define pis pair<int, string>
#define pss pair<string, string>
#define pb push_back

char house[25][25];
bool visited[25][25];
int flooring, height, width, filling = 0;
vector<int> rooms;

void floodfill(int y, int x) {
    if(x >= 0 && x < width && y >= 0 && y < height && house[y][x] == '.' && !visited[y][x]) {
        visited[y][x] = true;
        filling++;

        floodfill(y-1, x);
        floodfill(y, x-1);
        floodfill(y+1, x);
        floodfill(y, x+1);
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> flooring >> height >> width;
    
    for(int i = 0; i < height; i++)
        for(int j = 0; j < width; j++)
            cin >> house[i][j];


    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            if(!visited[i][j] && house[i][j] == '.') {
                filling = 0;
                floodfill(i, j);
                if(filling != 0) {
                    rooms.pb(filling);
                }
            }
        }
    }
    sort(rooms.begin(), rooms.end(), greater<int>()); 
    int count = 0;

    while(flooring - rooms[count] >= 0 && count < rooms.size()) {
        flooring -= rooms[count++];
    }

    if(count == 1) {
        cout << count << " room, " << flooring << " square metre(s) left over" << '\n';
    }
    else {
        cout << count << " rooms, " << flooring << " square metre(s) left over" << '\n';
    }
    

    return 0;
}