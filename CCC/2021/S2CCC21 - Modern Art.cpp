#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int l, w, changes;
    cin >> l >> w >> changes;
    bool canvas[l][w];
    int gold = 0;

    for(int i = 0; i < l; i++) {
        for(int j = 0; j < w; j++) {
            canvas[i][j] = false;
        }
    }

    while(changes--) {
        char a;
        int n;
        cin >> a >> n;
        n--;

        if(a == 'R') {
            for(int i = 0; i < w; i++) {
                canvas[n][i] = !canvas[n][i];
            }
        }
        else {
            for(int i = 0; i < l; i++) {
                canvas[i][n] = !canvas[i][n];
            }
        }
    }

    for(int i = 0; i < l; i++) {
        for(int j = 0; j < w; j++) {
            if(canvas[i][j]) {
                gold++;
            }
        }
    }
    cout << gold;
    
    return 0;
}