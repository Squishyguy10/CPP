#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int pairs, mins; cin >> pairs >> mins;
    long long int men[pairs];
    long long int women[pairs];
    long long int ans = 0;
    for(int i = 0; i < pairs; i++) cin >> men[i];
    for(int i = 0; i < pairs; i++) cin >> women[i];
    sort(men, men+pairs);
    sort(women, women+pairs);

    if(mins != 0) {
        while(mins--) {
            if(men[pairs-1] > women[pairs-1]) women[pairs-1]++;
            else men[pairs-1]++;
        }
    }
    for(int i = 0; i < pairs; i++) (ans += men[i] * women[i]) % 1000000007;

    cout << ans % 1000000007 << '\n';
}