#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int side, trees, m = 0;
    cin >> side >> trees;
    int yard[side][side];

    for(int i = 0; i < side; i++) {
        for(int j = 0; j < side; j++) {
            yard[i][j] = 1;
        }
    }

    while(trees--) {
        int x, y;
        cin >> x >> y;
        yard[x-1][y-1] = 0;
    }

    for(int i = 1; i < side; i++) {
        for(int j = 1; j < side; j++) {
            if(yard[i][j] != 0) {
                yard[i][j] = min(min(yard[i-1][j], yard[i][j-1]), yard[i-1][j-1]) + 1;
                m = max(m, yard[i][j]);
            }
        }
    }
    cout << m << '\n';

    return 0;
}