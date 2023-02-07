#include <bits/stdc++.h>
using namespace std; int main() {
    int n, output = 0;
    for(cin >> n; n >= 0; n-= 5) if(n % 4 == 0) output++;
    cout << output << '\n';
}