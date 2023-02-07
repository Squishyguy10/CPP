#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m; cin >> n >> m;
    int arr[n];
    vector<int> ar;

    for(int i = 0; i < n; i++) 
        cin >> arr[i];

    sort(arr, arr+n);

    for(int i = 0; i < n/2; i++) {
        ar.push_back(arr[i]);
        ar.push_back(arr[n-i-1]);
    }

    if(n % 2 == 1)
        ar.push_back(arr[n/2]);


    bool check = true;
    for(int i = 0; i < n-1; i++) {
        if(ar[i] + ar[i+1] < m)
            check = false;
    }
        
    if(check) {
        for(int i = 0; i < n; i++)
            cout << ar[i] << " ";
        cout << '\n';
    }
    else
        cout << -1 << '\n';
}