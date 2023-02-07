#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int cases; cin >> cases;
    
    for(int c = 1; c <= cases; c++) {
        int ppl, days, id, outp = 0; 
        cin >> ppl >> days >> id;
        id--;

        int list[ppl][days];
        for(int i = 0; i < ppl; i++) {
            for(int j = 0; j < days; j++) {
                cin >> list[i][j];
            }
        }

        for(int i = 0; i < days; i++) {
            int john = list[id][i];
            int m = john;
            for(int j = 0; j < ppl; j++) {
                m = max(m, list[j][i]);
            }
            outp += m-john;
        }

        cout << "Case #" << c << ": " << outp << '\n';
    }

    return 0;
}