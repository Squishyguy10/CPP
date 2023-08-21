#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define int long long

const int MN = 1e7;
bool sieve[MN+1];
int prim[MN+1];

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i = 2; i < MN; i++) {
        if(!sieve[i]) {
            prim[i]++;
            for(int j = 2*i; j <= MN; j+= i) {
                sieve[j] = true;
                prim[j]++;
            }
        }
    }
    
    int n; cin >> n;
    for(int i = 1; i <= n; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        int num = 0;
        for(; a <= b; a++) {
            if(prim[a] == c) {
                num++;
            }
        }
        cout << "Case #" << i << ": " << num << '\n';
    }


    return 0;
}