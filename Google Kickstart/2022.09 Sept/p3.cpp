#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int cases; cin >> cases;

    for(int i = 1; i <= cases; i++) {
        int levels = 0;
        int N, Q;
        cin >> N >> Q;
        int x, y;

        for(int nItr = 0; nItr < N-1; nItr++) {
            int n;
            cin >> n;
            cin >> n;
        }

        for(int qItr = 0; qItr < Q; qItr++) {
            int q;
            cin >> q;
        }
        int j2 = 2;

        for(int j = 1; j <= N; j+= j2, Q--) {
            j*= 2;
            if(Q == 0) {
                break;
            }
            levels++;
        }
        int total = pow(2, levels-1);


        cout << "Case #" << i << ": " << total << '\n';
    }

    return 0;
}