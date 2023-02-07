#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string str; cin >> str;
    int A = 0, C = 0, G = 0, T = 0;
    bool a, c, g, t;

    for(int i = 0; i < str.size(); i++) {
        if(str[i] == 'A') A++;
        else if(str[i] == 'C') C++;
        else if(str[i] == 'G') G++;
        else T++;
    }

    cout << max(max(A, C), max(G, T)) << '\n';
    return 0;
}