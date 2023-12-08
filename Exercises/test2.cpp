#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long
#define f first
#define s second
#define pii pair<int, int>
#define psi pair<string, int>
#define pis pair<int, string>
#define pss pair<string, string>
#define pb push_back

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int sum = 0;
    int g = 1;
    for(int i = 0; i < 10; i++) {
        g = 5*g + 1;
        for(int div = 5; g >= div; div*=5) {
            sum += (g/div);
        }
    }
    cout << sum;


    return 0;
}