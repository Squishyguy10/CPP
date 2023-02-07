#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2, s3;
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);
    unordered_map<char, char> map;

    map.insert({' ', '.'});
    for(int i = 65; i < 90; i++) {
        map.insert({char(i), '.'});
    }

    for(int i = 0; i < s1.size(); i++) {
        map[s2[i]] = s1[i];
    }

    for(int i = 0; i < s3.size(); i++) {
        cout << map[s3[i]];
    }
    cout << '\n';
    
    return 0;
}