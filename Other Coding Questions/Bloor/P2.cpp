#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    // int arr1[n*n];
    set<int> arr;
    vector<int> outp;

    for(int i = 0; i < n*n; i++) {
        // cin >> arr1[i];
        int x; cin >> x;
        // arr.insert(arr1[i]);
        arr.insert(x);
    }
    
    // sort(arr1, arr1+n);


    for(int i : arr) {
        if(i%2 == 0) outp.push_back(i/2);
    }

    for(int i = 1; i < outp.size()-1; i++) {
        if(!arr.count(outp.front() + outp[i]) || !arr.count(outp.back() + outp[i])) {
            outp.erase(outp.begin()+i);
            i--;
        }
    }

    for(int i = 0; i < n-1; i++) cout << outp[i] << ' ';
    cout << outp[n-1] << endl;

    return 0;
}