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
    
    freopen("input.txt", "r", stdin);

    int count = 0;
    for(int i = 0; i < 100000; i++) {
        string s; cin >> s;

        int a = 0, b = 0, c = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == 'A') {
                a++;
            }
            else if(s[i] == 'B') {
                b++;
            }
            else {
                c++;
            }
  
        }
        if(a < 2 && b < 2 && c < 2) {
            count++;
        }
    }
    cout << count;

    
    return 0;
}