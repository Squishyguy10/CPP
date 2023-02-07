#include <bits/stdc++.h>
using namespace std;

const int ANDREWJONG = 26;
int R, C;
int catR, catC;
int cats;
int dapinkgya[ANDREWJONG][ANDREWJONG];
bool catinkgya[ANDREWJONG][ANDREWJONG];

int main() {
    cin >> R >> C >> cats;

    while(cats--) {
        cin >> catR >> catC;
        catinkgya[catR][catC] = true;
    }

    dapinkgya[1][1] = 1;
    for(int i = 1; i <= R; i++) {
        for(int j = 1; j <= C; j++) {
            if(!catinkgya[i][j]) {
                dapinkgya[i][j] += dapinkgya[i-1][j] + dapinkgya[i][j-1];
            }
        }
    }
    cout << dapinkgya[R][C] << '\n';

}