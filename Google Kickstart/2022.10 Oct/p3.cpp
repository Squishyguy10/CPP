#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int cases; cin >> cases;
    for(int c = 1; c <= cases; c++) {
        int s, sum = 0;
        cin >> s;
        int arr[s];
        int prefix[s];
        int psaPrefix[s];

        for(int i = 0; i < s; i++) {
            cin >> arr[i];
            if(i != 0) {
                prefix[i] = prefix[i-1] + arr[i];
            }
            else {
                prefix[0] = arr[0];
            }
        }

        psaPrefix[0] = prefix[0];
        for(int i = 1; i < s; i++) {
            psaPrefix[i] = psaPrefix[i-1] + prefix[i];
        }

        vector<int> abc;
        for(int i = 0; i < s; i++) {
            if(prefix[i] < 0) {
                abc.push_back(psaPrefix[i-1]);
            }
        }
        
        for(int i = 0; i < abc.size(); i++) {
            sum += abc[i];
        }

        cout << "Case #" << c << ": " << sum << '\n';
    }

    return 0;
}