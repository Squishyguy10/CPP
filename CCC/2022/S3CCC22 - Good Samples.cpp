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

    // n - notes, m - highest pitch, k - samples
    int n, m, k;
    cin >> n >> m >> k;
    
    if(k > (m*(m+1)/2) + m*(n-m) || k < n) {
        cout << -1 << '\n';
        return 0;
    }

    vector<int> piece;
    piece.pb(1);
    int count = n;

    while(piece.size() < n) {
        if(piece.size() < m) {
            if(k-count >= piece.back()) {
                count += piece.back();
                piece.pb(piece.back()+1);
            }
            else {
                piece.pb(piece[piece.size()-(k-count)-1]);
                count += k-count;
            }
        }
        else {
            if(k-count >= m) {
                count += m-1;
                piece.pb((piece.back()%m)+1);
            }
            else {
                piece.pb(piece[piece.size()-(k-count)-1]);
                count += k-count;
            }
        }
    }

    
    for(int i : piece) {
        cout << i << " ";
    }
    cout << '\n';

    return 0;
}