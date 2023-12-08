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

    int n, k;
    cin >> n >> k;

    if(k > n) {
        cout << -1 << '\n';
        return 0;
    }

    int min = 1;
    int max = n*n;
    int arr[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) {
                if(k == 0) {
                    arr[i][j] = min;
                    min++;
                }
                else {
                    arr[i][j] = max;
                    max--;
                    k--;
                }
            }
            else if(k == 0 && j == 0) {
                arr[i][j] = max;
                max--;
            }
            else {
                arr[i][j] = min;
                min++;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}