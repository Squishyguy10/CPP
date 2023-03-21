#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> vec(n);

    if(k < n || k > n*2 - 1) {
        cout << -1 << '\n';
        return 0;
    }
    k -= n;

    for(int i = 0; i < n; i++) {
        vec[i] = 1;
    }

    if(k % 2 == 1 && k != n*2 - 1 - n) {
        vec[0] = 2;
        k++;
    }

    for(int i = 1; i < n && k != 0; i+= 2) {
        k-= 2;
        vec[i] = 2;
    }

    for(int i : vec) {
        cout << i << " ";
    }
    cout << '\n';

    return 0;
}