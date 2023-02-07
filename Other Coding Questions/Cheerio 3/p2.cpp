#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pii pair<int, int

struct player {
    int score = 0;
    int bullets = 0;
};

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string str;
    cin >> n >> str;
    player me, them;


    for(int i = 0; i < n; i++) {
        if(str[i] == 'B') {
            me.bullets++;
        }
        else if(str[i] == 'F') {
            if(them.bullets == 0) {
                if(me.bullets == 0) {
                    me.bullets++;
                }
                else {
                    me.bullets--;
                    me.score++;
                }
            }
            else {
                them.bullets--;
            }
        }
        else if(str[i] == 'R') {
            them.bullets++;
            if(me.bullets == 0) {
                me.bullets++;
            }
            else {
                me.bullets--;
                me.score++;
            }
        }
    }
    cout << me.score << '\n';
    
    return 0;
}