#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s; cin >> s;
    int length = 1;
    for(int i = 0; i < s.length(); i++) {
        for(int j = s.length()-1; j > i; j--) {
            int count = 0;
            bool palindrome = true;
            for(int k = i; k <= j; k++) {
                if(s[k] == s[j-k+i]) {
                    count++;
                }
                else {
                    palindrome = false;
                    break;
                }
            }
            if(palindrome) {
                length = max(length, count);
                break;
            }
        }
    }
    cout << length << '\n';
    
    return 0;
}