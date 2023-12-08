#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pii pair<int, int>
#define psi pair<string, int>
#define pis pair<int, string>
#define pss pair<string, string>
#define pb push_back

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    int arr[n][n];
    int most = n*(3+n)/2;


    if(n % 4 == 0) {
        if(most >= (n/2)*4) {
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {
                    if((i % 4 == 1 || i % 4 == 2) && (j % 4 == 1 || j % 4 == 2)) {
                        arr[i][j] = 1;
                    }
                    else if(i % 4 == 2 && j % 4 == 1) {
                        arr[i][j] = 1;
                    }
                    
                }
            }
        }
        else {
            cout << -1;
        }
    }
    else if(n % 4 == 1) {
        if(most >= (n/2)*3 + 1) {
    }
    else if(n % 4 == 2) {
        if(most >= (n/2)*3 + 4) {
    }
    else if(n % 4 == 2) {
        if(most >= (n/2)*3 + 4) {
    }
    else if(n % 4 == 3) {
        if(most >= (n/2)*3 + 4) {
    }

    else if(n*(3+n)/2 < ) {
        cout << -1 << '\n';
        return 0;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            
        }
        cout << '\n';
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }


    return 0;
}