#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    int arr[n*n];
    int outp[n];

    for(int i = 0; i < n*n; i++) cin >> arr[i];

    sort(arr, arr+(n*n));

    outp[0] = arr[0]/2;
    outp[1] = arr[1] - outp[0];
    outp[n-1] = arr[(n*n)-1]/2;

    for(int i = 0; i < n-1; i++) cout << outp[i] << ' ';
    cout << outp[n-1] << endl;

    return 0;

    
}