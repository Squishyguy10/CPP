#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int partners; cin >> partners;
    unordered_map<string, string> ppl;
    string s[partners];

    for(int i = 0; i < partners; i++) {
        cin >> s[i];
    }

    for(int i = 0; i < partners; i++) {
        string str; cin >> str;
        ppl.insert({s[i], str});
    }

    for(auto i : ppl) {
        if(i.first != ppl[i.second] || i.first == i.second) {
            cout << "bad" << '\n';
            return 0;
        }
    }
    cout << "good" << '\n';
    
    return 0;
}