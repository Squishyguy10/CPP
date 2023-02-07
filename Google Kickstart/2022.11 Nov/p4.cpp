#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int cases; cin >> cases;
    
    for(int c = 1; c <= cases; c++) {
        int lil; cin >> lil;
        int initial, loops;
        int coins = 0;
        bool prime = true;

        if(lil <= 13) {
            coins = lil;
        }
        else if(lil == 14 || lil == 15) {
            coins = 13;
        }
        else {
            for(int i = 2; i <= sqrt(lil); i++) {
                if(lil % i == 0) {
                    prime = false;
                    break;
                }
            }

            int x = sqrt(lil);
            if(x*x <= lil && ) {
                coins++;
            }

            coins += x;
            x--;
            if(x > 0) {
                coins += 4 + (2*x);
            }
        }
        
        cout << "Case #" << c << ": " << coins << '\n';
    }

    return 0;
}