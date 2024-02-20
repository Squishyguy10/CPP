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
    
    int n;
    cin >> n;

    while(n--) {
        char board[3][3];
        vector<int> x;
        vector<int> y;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                cin >> board[i][j];
                if(board[i][j] == '.') {
                    x.pb(i);
                    y.pb(j);
                }
            }
        }
        char next;
        string filler1, filler2;
        cin >> next >> filler1 >> filler2;

        bool yes = false;
        for(int l = 0; l < x.size(); l++) {
            board[x[l]][y[l]] = next;

            for(int i = 0; i < 3; i++) {
                if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] == next) {
                    yes = true;
                    break;
                }
                if(board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] == next) {
                    yes = true;
                    break;
                }
            }
            if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] == next) {
                yes = true;
            }
            if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] == next) {
                yes = true;
            }

            if(yes) {
                break;
            }
            board[x[l]][y[l]] = '.';
        }
        if(yes) {
            cout << next << " can win" << '\n';
        }
        else {
            cout << "no winning move" << '\n';
        }
    }
    
    
    return 0;
}