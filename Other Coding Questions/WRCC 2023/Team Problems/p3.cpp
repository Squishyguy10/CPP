#include <bits/stdc++.h> 
using namespace std;
    
#define int long long
#define pii pair<int, int>
#define pb push_back
    
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    int sum = 0;

    while(n--) {
        string s; cin >> s;
        char t = s[0], d = s[0];
        bool three = false, two = false;
        bool works = true;
        int presum = 0;
        for(int i = 1; i < 10; i++) {
            if(!islower(s[i])) {
                works = false;
            }
            if(s[i-1] == s[i]) {
                
            }
        }

        if(works) {
            sum += stoi(s.substr(s.length()-1));
        }
    }
    cout << sum << endl;    
    
    return 0;
}