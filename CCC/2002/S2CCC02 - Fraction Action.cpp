#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    int x = a%b, y = b;

    if(x == 0) {
        cout << a/b << '\n';
        return 0;
    }

    for(int i = x; i > 1; i--) {
        if(x % i == 0 && y % i == 0) {
            x /= i;
            y /= i;
            break;
        }
    }

    if(a/b == 0) {
        cout << x << '/' << y << '\n';
    }
    else {
        cout << a/b << " " << x << '/' << y << '\n';
    }

    return 0;
}