#include <bits/stdc++.h> 
using namespace std;
        
int main() {
    int n, m = 0, arr[5] = {}; cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 5; j++) {
            char c; cin >> c;
            if(c == 'Y') arr[j]++;
        }
    }

    for(int i = 0; i < 5; i++) m = max(m, arr[i]);

    vector<int> outp;
    for(int i = 0; i < 5; i++) if(m == arr[i]) outp.push_back(i);

    for(int i = 0; i < outp.size()-1; i++) cout << outp[i] << ',';
    cout << outp.back() << '\n';

    return 0;
}