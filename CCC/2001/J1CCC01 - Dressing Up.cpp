#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int H; cin >> H;
    for(int i = 0; i < H; i++) {
        if(i < H/2)
            cout << '*' << string(2*i, '*') << string(H*2 - 4*i - 2, ' ') << string(2*i, '*') << '*' << '\n';
        else if(i > H/2)
            cout << '*' << string(2*H - 2*i - 2, '*') << string(4*i - H*2 + 2, ' ') << string(2*H - 2*i - 2, '*') << '*' << '\n';
        else
            cout << string(2*H, '*') << '\n';
    }
}