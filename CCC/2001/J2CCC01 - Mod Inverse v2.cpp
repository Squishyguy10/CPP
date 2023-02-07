#include <bits/stdc++.h>
using namespace std;

int recursion(int x, int m, int i = 1) {
    if(i >= m)
        return 0;
    else if((x * i) % m == 1)
        return i;
    
    int n = recursion(x, m, i + 1);
    return n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x, m;
    cin >> x >> m;

    int n = recursion(x, m);
    if(n > 0)
        cout << n << '\n';
    else
        cout << "No such integer exists." << '\n';
}