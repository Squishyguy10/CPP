#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x, m;
    cin >> x >> m;
    for(int i = 1; i < m; i++) {
        if((x * i) % m == 1) {
            cout << i << '\n';
            return 0;
        }
    }
    cout << "No such integer exists." << '\n';
}