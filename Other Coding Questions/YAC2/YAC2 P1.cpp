#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int rounds; cin >> rounds;
    while(rounds--) {
        long double A, B, C, D;
        cin >> A >> B >> C >> D;
        long long betAB, betCD;
        long double difAB = 0, difCD = 0;

        for(int i = 1; i <= 100; i++) {
            long double ab = (B / A) * i;
            if(ab > i && ab-i > difAB) {
                difAB = ab-i;
                betAB = i;
            }
        }

        for(int i = 1; i <= 100; i++) {
            long double cd = (D / C) * i;
            if(cd > i && cd-i > difCD) {
                difCD = cd-i;
                betCD = i;
            }
        }
        int cost = betAB + betCD;
        cout << difAB << " " << cost << '\n';
        cout << difCD << " " << cost << '\n';
        if(difAB > cost && difCD > cost)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}