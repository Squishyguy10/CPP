#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define pii pair<int, int>
#define psi pair<string, int>
#define pis pair<int, string>
#define pss pair<string, string>
#define pb push_back

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    while(n--) {
        int l; cin >> l;
        char s[l];

        for(int i = 0; i < l; i++) {
            cin >> s[i];
        }

        int length = 1;
        for(int i = 0; i < l; i++) {
            char temp = s[i];
            s[i] = s[i+1];

            int conseq = 1;
            for(int j = 1; j < l; j++) {
                if(s[j] == s[j-1]) {
                    conseq++;
                    length = max(length, conseq);
                }
                else{
                    if(j > i) break;
                    conseq = 1;
                }
            }
            s[i] = temp;
        }

        for(int i = 1; i < l; i++) {
            char temp = s[i];
            s[i] = s[i-1];

            int conseq = 1;
            for(int j = 1; j < l; j++) {
                if(s[j] == s[j-1]) {
                    conseq++;
                    length = max(length, conseq);
                }
                else{
                    if(j > i) break;
                    conseq = 1;
                }
            }
            s[i] = temp;
        }
        cout << length << '\n';
    }


    return 0;
}