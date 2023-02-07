#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k, x;
    cin >> n >> k >> x;

    int m = k + x;
    int first = k-1;
    int second = (m - first) % k;
    cout << first << " " << second;

    for(int i = 0; i < n; i++) {
        
    }



    
    return 0;
}