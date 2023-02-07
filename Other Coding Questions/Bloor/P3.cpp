#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    int arr[n*n];
    vector<int> outp;

    for(int i = 0; i < n*n; i++) {
        cin >> arr[i];
    }

    for(int i = n-1; i < n*n; i+= n) {
        outp.push_back(arr[i]/2);
    }

    for(int i = 0; i < n-1; i++) cout << outp[i] << ' ';
    cout << outp[n-1] << endl;

    return 0;
}