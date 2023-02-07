#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long N; cin >> N;
    long long masboong = N-1;
    long long sum = 0;

    while(masboong--) {
        int input; cin >> input;
        sum += input;
    }

    cout << (N*(N+1)/2) - sum << '\n';

    return 0;
}