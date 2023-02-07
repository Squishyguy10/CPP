#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int l, w, changes;
    cin >> l >> w >> changes;
    bool row[l] = {};
    bool col[w] = {};
    int gold = 0, rtrue = 0, ctrue = 0;

    while(changes--) {
        char a;
        int n;
        cin >> a >> n;
        n--;

        if(a == 'R') {
            row[n] = !row[n];
        }
        else {
            col[n] = !col[n];
        }
    }

    for(int i = 0; i < l; i++) {
        if(row[i]) {
            gold += w;
            rtrue++;
        }
    }

    for(int i = 0; i < w; i++) {
        if(col[i]) {
            gold += l;
            ctrue++;
        }
    }

    gold-= 2*(ctrue*rtrue);
    cout << gold;
    
    return 0;
}