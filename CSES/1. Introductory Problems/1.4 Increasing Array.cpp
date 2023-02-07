#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N; cin >> N;
    long long arr[N];
    long long moves = 0;
    
    for(int i = 0; i < N; i++) cin >> arr[i];

    for(int i = 1; i < N; i++) {
        if(arr[i-1] > arr[i]) {
            int add = arr[i-1] - arr[i];
            arr[i] += add;
            moves += add;
        }
    }
    cout << moves << '\n';

    return 0;
}