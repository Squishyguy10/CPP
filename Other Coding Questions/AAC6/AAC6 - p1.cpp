#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, K; cin >> N >> K;
    vector<int> v;
    
    if(N <= K) {
        if(N % 2 != 0 || N == K) {
            v.push_back(K);
        }
        if(N != K || (N == K && N % 2 != 0)) {
            for(int i = 1; i <= N/2; i++) {
                v.push_back(i);
                v.push_back(K-i);
            }
        }
        else if(N % 2 == 0) {
            for(int i = 1; i < N/2; i++) {
                v.push_back(i);
                v.push_back(K-i);
            }
            v.push_back(K*2);
        }
    }
    else {
        for(int i = K; i <= N*K; i+= K)
            v.push_back(i);
    }
    
    
    if(accumulate(v.begin(),v.end(),0) > 1e9)
        cout << -1 << '\n';
    else {
        for(int i = 0; i < N; i++) {
            if(i != N)
                cout << v[i] << " ";
            else
                cout << v[i] << '\n';
        }
    }
    return 0;
}