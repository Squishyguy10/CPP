#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pii pair<int, int

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y;
    cin >> x >> y;

    char arr[x][y];
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            if(arr[i][j] == 'W') {
                if(i > 0 && arr[i-1][j] == '.') {
                    arr[i-1][j] = 'C';
                }
                if(j > 0 && arr[i][j-1] == '.') {
                    arr[i][j-1] = 'C';
                }
                if(j < y-1 && arr[i][j+1] == '.') {
                    arr[i][j+1] = 'C';
                }
                if(i < x-1 && arr[i+1][j] == '.') {
                    arr[i+1][j] = 'C';
                }
            }
        }
    }

    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            cout << arr[i][j];
        }
        cout << '\n';
    }
    
    return 0;
}