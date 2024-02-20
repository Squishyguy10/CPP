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
    
    int n; cin >> n;

    int har = 0;
    int wang = 0;

    while(n--) {
        int alice = 0;
        int bob = 0;

        for(int i = 0; i < 5; i++) {
            char a, b; 
            cin >> a >> b;

            if(a == 'R') {
                if(b == 'S') alice++;
                else if(b == 'P') bob++;
            }
            else if(a == 'S') {
                if(b == 'R') bob++;
                else if(b == 'P') alice++; 
            }
            else if(a == 'P') {
                if(b == 'R') alice++;
                else if(b == 'S') bob++;
            }
        }
        if(alice > bob) har++;
        else if (bob > alice) wang++;
    }

    if(har > wang) {
        cout << "A " << har-wang << '\n';
    }
    else if (har < wang) {
        cout << "B " << wang-har << '\n';
    }
    else {
        cout << "TIE" << '\n';
    }
    

    return 0;
}