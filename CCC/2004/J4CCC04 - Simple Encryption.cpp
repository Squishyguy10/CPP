#include <bits/stdc++.h> 
using namespace std;
    
#define int long long
    
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string keyword, s;
    cin >> keyword;
    getline(cin, s);
    getline(cin, s);

    int curr = 0;
    for(int i = 0; i < s.length(); i++) {
        if(isalpha(s[i])) {
            char c = s[i] + keyword[curr] - 'A';
            if(c > 'Z') {
                c -= 26;
            }
            cout << c;
            curr = (curr + 1) % keyword.length();
        }
    }
    cout << '\n';
    
    return 0;
}