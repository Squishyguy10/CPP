#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int loop; cin >> loop;
    while(loop--) {
        int num; cin >> num;
        int outp = num;
        bool divis = false;

        if(outp < 11) {
            cout << outp << '\n';
        }
        else {
            while(outp > 11) {
                cout << outp << '\n';

                int last = outp % 10;
                outp /= 10;
                outp -= last;

                if(outp == 11) {
                    divis = true;
                    cout << outp << '\n';
                    cout << "The number " << num << " is divisible by 11." << '\n';
                }
            }
        }

        if(!divis) {
            cout << "The number " << num << " is not divisible by 11." << '\n';
        }

        if(loop != 0) {
            cout << '\n';
        }
    }

    return 0;
}