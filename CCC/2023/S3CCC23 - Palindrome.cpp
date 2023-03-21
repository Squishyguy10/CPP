#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int y, x, r, c;
    cin >> y >> x >> r >> c;

    char arr[y][x];

    char ch = 'g';
    for(int i = 0; i < y; i++) {
        for(int j = 0; j < x; j++) {
            arr[i][j] = ch;
            ch++;
            if(ch == 'g' + 17) {
                ch = 'g';
            }
        }
    }
    ch = 'a';

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < x; j++) {
            arr[i][j] = ch;
        }
        if(c == 0) {
            ch++;
        }
    }
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < y; j++) {
            arr[j][i] = ch;
        }
        if(r == 0) {
            ch++;
        }
    }

    int pR = 0, pC = 0;
    for(int i = 0; i < y; i++) {
        for(int j = 0; j <= x/2; j++) {
            if(arr[i][j] != arr[i][x-j-1]) {
                break;
            }
            else if(j == x/2) {
                pR++;
            }
        }
    }

    for(int i = 0; i < x; i++) {
        for(int j = 0; j <= y/2; j++) {
            if(arr[j][i] != arr[y-j-1][i]) {
                break;
            }
            else if(j == y/2) {
                pC++;
            }
        }
    }

    if(pR == r && pC == c) {
        for(int i = 0; i < y; i++) {
            for(int j = 0; j < x; j++) {
                cout << arr[i][j];
            }
            cout << '\n';
        }
    }
    else {
        cout << "IMPOSSIBLE" << '\n';
        // cout << pR << " " << pC << '\n';
    }
    
    return 0;
}