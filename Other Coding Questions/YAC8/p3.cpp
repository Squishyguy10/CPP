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
    int lower = 0;
    int upper = -1;

    int arr[n+1];
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for(int i = 1; i <= n; i++) {
        if(arr[i] != i) {
            lower = i;
            break;
        }
    }

    for(int i = n; i > 0; i--) {
        if(arr[i] != i) {
            upper = i;
            break;
        }
    }

    cout << upper - lower + 1 << '\n';



    return 0;
}