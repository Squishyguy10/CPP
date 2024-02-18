#include <bits/stdc++.h>

using namespace std;
#define int unsigned long long

int32_t main() {
    int N; cin >> N;
    int outp = (N*(N + 1)*(2*N + 1)*(3*N*N*N*N - 3*N + 6*N*N*N + 1)/42) % 1000000000;
    cout << outp;

    return 0;
}