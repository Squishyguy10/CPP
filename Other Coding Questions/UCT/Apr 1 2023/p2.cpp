#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pii pair<int, int>
#define pb push_back

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int op = 0;
    freopen("input.txt", "r", stdin);

    for(int i = 0; i < 1000; i++) {
        int a;
        cin >> a;

        if(a % 9 != 0) {
            // int missing = 9 - (a % 9);
            // int b = a;
            // while(b > 0) {
            //     m = min(m, b%10);
            //     b/= 10;
            // }
            op++;
        }
    }
    cout << op;

    

    
    return 0;
}