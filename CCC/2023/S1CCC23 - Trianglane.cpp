#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    bool arr[2][n];
    int peri = 0;

    
    for(int j = 0; j < 2; j++) {
        for(int i = 0; i < n; i++) {
            cin >> arr[j][i];
        }
    }

    if(arr[0][0]) {
        peri+= 3;
    }
    if(arr[1][0]) {
        peri += 3;
        if(arr[0][0]) {
            peri-=2;
        }
    }
    for(int i = 0; i < 2; i++) {
        for(int j = 1; j < n; j++) {
            if(arr[i][j]) {
                peri+= 3;
                if(i == 0 && arr[i+1][j] && j % 2 == 0) {
                    peri-=2;
                }
                if(arr[i][j-1]) {
                    peri-=2;
                }
            }
        }
    }
    cout << peri << '\n';    
    
    return 0;
}