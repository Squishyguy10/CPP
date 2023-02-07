#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int rounds; cin >> rounds;
    while(rounds--) {
        long double A, B, C, D;
        cin >> A >> B >> C >> D;
        bool b = false;

        for(int i = 1; i <= 100000; i++) {
            for(int j = 1; j <= 100000; j++) {
                int cost = i + j;
                long double ab = (B / A) * i;
                long double cd = (D / C) * j;

                if(ab > cost && cd > cost) {
                    b = true;
                    cout << "YES" << '\n';
                    goto end;
                }
            }
        }
        end:

        if(!b)
            cout << "NO" << '\n';
    }
}