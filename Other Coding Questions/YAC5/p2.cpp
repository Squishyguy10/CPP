#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int height, mod;
    int arr[height][height] = {};
    cin >> height >> mod >> arr[0][0];

    for(int i = 1; i < height; i++) {
        arr[i][0] = mod-1;
        for(int j = 0; j < i; j++) {
            int m = height + arr[i-1][j];
            if(j%2 == 0) {
                int second = (m - arr[i][0]) % mod;
            }
        }
    }

    

    

    



    
    return 0;
}