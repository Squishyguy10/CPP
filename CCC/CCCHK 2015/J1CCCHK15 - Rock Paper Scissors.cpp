#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pii pair<int, int>
#define psi pair<string, int>
#define pis pair<int, string>
#define pss pair<string, string>
#define pb push_back

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    int a = 0, b = 0;
    string alice[n], bob[n];
    
    for(int i = 0; i < n; i++) {
        cin >> alice[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> bob[i];

        if(alice[i] == "rock") {
            if(bob[i] == "paper") {
                b++;
            }
            else if(bob[i] == "scissors") {
                a++;
            }
        }
        else if(alice[i] == "paper") {
            if(bob[i] == "scissors") {
                b++;
            }
            else if(bob[i] == "rock") {
                a++;
            }
        }
        else {
            if(bob[i] == "rock") {
                b++;
            }
            else if(bob[i] == "paper") {
                a++;
            }
        }
    }
    cout << a << " " << b << '\n';

    return 0;
}