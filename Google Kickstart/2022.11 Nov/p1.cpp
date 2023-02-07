#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int cases; cin >> cases;
    
    for(int c = 1; c <= cases; c++) {
        int length, runs, distance;
        cin >> length >> runs;
        int total = 0;
        int outp = 0;

        for(int r = 0; r < runs; r++) {
            int distance;
            char clock;
            cin >> distance >> clock;

            if(clock == 'C') {
                total += distance;
            }
            else {
                total -= distance;
            }

            if(total >= length) {
                outp += (total/length);
            }
            else if(-total >= length) {
                outp += abs(total/length);
            }
            total %= length;
        }

        cout << "Case #" << c << ": " << outp << '\n';
    }

    return 0;
}