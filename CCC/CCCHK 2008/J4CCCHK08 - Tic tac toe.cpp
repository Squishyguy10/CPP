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

    while(n--) {
        string s; cin >> s;
        int x = 0, o = 0;

        for(int i = 0; i < 9; i++) {
            if(s[i] == 'X') {
                x++;
            }
            else if(s[i] == 'O') {
                o++;
            }
        }

        if(o > x || x > o+1) {
            cout << "no" << endl;
        }
        else {
            bool xWin = false, oWin = false;
            if(s[0] == s[1] && s[1] == s[2]) {
                if(s[0] == 'X') {
                    xWin = true;
                }
                else if(s[0] == 'O') {
                    oWin = true;
                }
            }
            if(s[3] == s[4] && s[4] == s[5]) {
                if(s[3] == 'X') {
                    xWin = true;
                }
                else if(s[3] == 'O') {
                    oWin = true;
                }
            }
            if(s[6] == s[7] && s[7] == s[8]) {
                if(s[6] == 'X') {
                    xWin = true;
                }
                else if(s[6] == 'O') {
                    oWin = true;
                }
            }
            if(s[0] == s[3] && s[3] == s[6]) {
                if(s[0] == 'X') {
                    xWin = true;
                }
                else if(s[0] == 'O') {
                    oWin = true;
                }
            }
            if(s[1] == s[4] && s[4] == s[7]) {
                if(s[1] == 'X') {
                    xWin = true;
                }
                else if(s[1] == 'O') {
                    oWin = true;
                }
            }
            if(s[2] == s[5] && s[5] == s[8]) {
                if(s[2] == 'X') {
                    xWin = true;
                }
                else if(s[2] == 'O') {
                    oWin = true;
                }
            }
            if(s[0] == s[4] && s[4] == s[8]) {
                if(s[0] == 'X') {
                    xWin = true;
                }
                else if(s[0] == 'O') {
                    oWin = true;
                }
            }
            if(s[2] == s[4] && s[4] == s[6]) {
                if(s[2] == 'X') {
                    xWin = true;
                }
                else if(s[2] == 'O') {
                    oWin = true;
                }
            }

            if(xWin && oWin) {
                cout << "no" << endl;
            }
            else if(x > o && oWin) {
                cout << "no" << endl;
            }
            else if(x == o && xWin) {
                cout << "no" << endl;
            }
            else {
                cout << "yes" << endl;
            }
        }
    }

    return 0;
}