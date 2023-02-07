#include <bits/stdc++.h>
using namespace std;

int main() {
    bool pipe[410][210] = {
        pipe[204][4] = true,
        pipe[204][5] = true,
        pipe[204][6] = true,
        pipe[205][6] = true,
        pipe[206][6] = true,
        pipe[207][6] = true,
        pipe[208][6] = true,
        pipe[209][6] = true,
        pipe[210][6] = true,
        pipe[211][6] = true,
        pipe[212][6] = true,
        pipe[212][5] = true,
        pipe[212][4] = true,
        pipe[212][3] = true,
        pipe[212][2] = true,
        pipe[211][2] = true,
        pipe[210][2] = true,
        pipe[210][3] = true,
        pipe[210][4] = true,
        pipe[209][4] = true,
        pipe[208][4] = true,
        pipe[208][3] = true,
        pipe[208][2] = true,
        pipe[207][2] = true,
        pipe[206][2] = true,
        pipe[205][2] = true,
        pipe[205][1] = true,
        pipe[205][0] = true,
    };

    int x = 204, y = 4;
    char dir;
    while(cin >> dir) {
        int len; cin >> len;
        if(dir == 'q') break;

        int xLen = 0, yLen = 0;
        if(dir == 'l') xLen = -1;
        else if(dir == 'r') xLen = 1;
        else if(dir == 'u') yLen = -1;
        else if(dir == 'd') yLen = 1;

        bool safe = true;
        for(int i = 0; i < len; i++) {
            x += xLen;
            y += yLen;
            if(pipe[x][y]) safe = false;
            pipe[x][y] = true;
        }
        if(safe)
            cout << x-205 << " " << -y - 1 << " " << "safe" << '\n';
        else {
            cout << x-205 << " " << -y - 1 << " " << "DANGER" << '\n';
            break;
        }
    }
}