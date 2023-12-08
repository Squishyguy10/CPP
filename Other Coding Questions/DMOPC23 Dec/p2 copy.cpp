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
    int knights = n*(3+n)/2;


    if(n%6 == 0 || n%6 == 5) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if((i % 6 == 2 || i % 6 == 3) && (j % 4 == 1 || j % 4 == 2)) {
                    arr[i][j] = 1;
                }
                else {
                    arr[i][j] = 0;
                }
                
            }
        }
    }


    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }


    return 0;
}