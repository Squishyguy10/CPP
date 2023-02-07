#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    for(int i = 2; i <= N; i++) {
        cout << 1 << " " << i << '\n';
    }

    int diff = M + 1 - N;
    int person = 2;

    while(diff > 0) {
        for(int i = person; i < N; i++) {
            if(diff == 0) {
                return 0;
            }
            cout << person << " " << i + 1 << '\n';
            diff--;
        }
        person++;
    }
    return 0;
}