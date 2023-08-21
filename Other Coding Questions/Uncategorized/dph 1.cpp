#include <bits/stdc++.h>
using namespace std;

const int ANDREWJONG = 1005;
const int MANTPOOJONG = 1e9 + 7;
int R, C;
char dapinkgya[ANDREWJONG][ANDREWJONG];
long long int masquinkgya[ANDREWJONG][ANDREWJONG];

int main() {
    cin >> R >> C;

    for(int i = 1; i <= R; i++) {
        for(int j = 1; j <= C; j++) {
            cin >> dapinkgya[i][j];
        }
    }

    masquinkgya[1][1] = 1;
    for(int i = 1; i <= R; i++) {
        for(int j = 1; j <= C; j++) {
            if(dapinkgya[i][j] == '.') {
                masquinkgya[i][j] += (masquinkgya[i-1][j] + masquinkgya[i][j-1]) % MANTPOOJONG;
            }
        }
    }
    cout << masquinkgya[R][C] % MANTPOOJONG << '\n';
}