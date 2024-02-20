#include <bits/stdc++.h> 
using namespace std;
    
#define int long long
    
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, d;
    cin >> n >> d;
    int arr[n];
    int bombs = 1, chain = 0, currChain = 1;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n-1; i++) {
        if(abs(arr[i] - arr[i+1]) <= d) {
            currChain++;
            chain = max(chain, currChain);

        }
        else {
            bombs++;
            currChain = 1;
        }

    }
    cout << bombs << '\n' << chain << '\n';
    
    return 0;
}