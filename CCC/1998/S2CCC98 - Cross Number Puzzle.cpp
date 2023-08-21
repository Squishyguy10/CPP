#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pii pair<int, int>
#define pb push_back

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i = 1000; i <= 9999; i++) {
        int sum = 0;
        for(int j = 1; j <= sqrt(i); j++) {
            if(i % j == 0) {
                sum += j;
                if(i/j != j && i/j != i) {
                    sum += (i/j);
                }
            }
        }
        if(sum == i) {
            cout << i << " ";
        } 
    }
    cout << '\n';

    for(int i = 100; i <= 999; i++) {
        int a = i/100, b = (i/10)%10, c = i%10;
        if((pow(a, 3) + pow(b, 3) + pow(c, 3)) == i) {
            cout << i << ' ';
        }
    }
    cout << '\n';

    return 0;
}