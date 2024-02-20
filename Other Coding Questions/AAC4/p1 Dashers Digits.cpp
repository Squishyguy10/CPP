#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, most = 0;
    string s; 
    cin >> n >> m >> s;
    int arr[m];

    for(int i = 0; i < m; i++) {
        cin >> arr[i];
        most = max(most, arr[i]);
    }

    int count = 0, pos;
    for(int i = 0; i < n; i++) {
        if(s[i] == '0') {
            if(arr[count] == most) {
                pos = i;
            }
            count++;
        }
    }
    s = s.substr(pos) + s.substr(0, pos);

    for(int i = 0; i < n; i++) {
        if(s[i] != '0') {
            cout << s[i];
        }
    }
    cout << '\n';

    return 0;
}