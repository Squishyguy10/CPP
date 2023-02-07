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
        else {
            for(int i = 2; i <= sqrt(lil); i++) {
                if(lil % i == 0) {
                    prime = false;
                    break;
                }
            }

            if(prime) {
                coins++;
                lil--;
            }

            for(int i = ceil(sqrt(lil)); i <= lil; i++) {
                if(lil % i == 0) {
                    initial = i;
                    loops = lil / i;
                    break;
                }
            }
            cout << initial << " " << loops << '\n';

            coins += initial;
            loops--;

            if(loops > 0) {
                coins += 4 + (2*loops);
            }
        }
        
        cout << "Case #" << c << ": " << coins << '\n';
    }

    return 0;
}