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

    int max = 2023;
    int count = 0;

    for(int i = 1; i <= max; i++) {
        for(int j = i; j <= max; j++) {
            int c = i*i + j*j;
            int rnd = sqrt(c);
            if(rnd*rnd == c && i + j + rnd <= max) {
                count++;
            }
        }
    }
    
    cout << count;
    
    return 0;
}