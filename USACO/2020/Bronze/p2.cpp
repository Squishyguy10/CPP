#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    int flowers[n];
    int outp = 0;
    for(int i = 0; i < n; i++) {
        cin >> flowers[i];
    }

    for(int i = 0; i < n; i++) {
        int sum = 0;
        int m = 0;
        for(int j = i; j < n; j++) {
            m++;
            sum += flowers[j];

            if(sum%m == 0) {
                for(int k = i; k <= j; k++) {
                    if(flowers[k] == sum/m) {
                        outp++;
                        break;
                    }
                }
            }
            
        }
    }
    cout << outp << '\n';
    
    return 0;
}