#include <bits/stdc++.h> 
using namespace std;
    
#define int long long
    
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int c, r;
    cin >> c >> r;

    int x, y;
    int posX = 0, posY = 0;
    while(cin >> x >> y) {
        if(x == 0 && y == 0) {
            break;
        }
        posX += x;
        posY += y;

        if(posX < 0)
            posX = 0;
        else if(posX > c)
            posX = c;

        if(posY < 0)
            posY = 0;
        else if(posY > r)
            posY = r;

        cout << posX << " " << posY << '\n';
    }
    
    return 0;
}