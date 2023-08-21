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

    int cases; cin >> cases;
    for(int c = 1; c <= cases; c++) {
        int p, x, y;
        cin >> p >> x >> y;
        
        if(50 < sqrt(pow(50-x, 2) + pow(50-y, 2))) {
            cout << "Case #" << c << ": " << "white" << '\n';
        }
        else {
            string col = "white";
        }


        cout << "Case #" << c << ": " << col << '\n';
    }



    return 0;
}