#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int j, a;
    cin >> j >> a;
    int sizes[j];
    pair<int, int> players[a];

    for(int i = 0; i < j; i++) {
        char c; cin >> c;
        if(c == 'S')
            sizes[i] = 1;
        else if(c == 'M')
            sizes[i] = 2;
        else
            sizes[i] = 3;
    }
        

    for(int i = 0; i < a; i++) {
        char c;
        int n, temp;
        cin >> c >> n;
        if(c == 'S')
            temp = 1;
        else if(c == 'M')
            temp = 2;
        else
            temp = 3;
        players[i] = {temp, --n};
    }

    int count = 0;
    for(int i = 0; i < a; i++) {
        if(players[i].s <= j && sizes[players[i].s] >= players[i].f) {
            sizes[players[i].s] = 0;
            count++;
        }
    }
    cout << count << '\n';


    return 0;
}