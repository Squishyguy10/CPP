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
    
    int ships, health, dmg, reload;
    cin >> ships, health, dmg, reload;
    int sunk = 0;
    
    for(int i = 0; i < ships; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        int itr = 0;
        while(a > 0 && health > 0) {
            if(itr % reload == 0) {
                a -= dmg;
            }
            if(itr % c == 0) {
                health -= b;
            }
            itr++;
        }
        if(a <= 0) {
            sunk++;
        }
        if(health <= 0) {
            break;
        }
    }
    
    cout << sunk << '\n';
    
    return 0;
}