#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string fullStr, subStr;
    cin >> fullStr >> subStr;
    for(int i = 0; i < subStr.length(); i++) {
        string shift = subStr.substr(i) + subStr.substr(0, i);
        size_t find = fullStr.find(shift);
        if(find != string::npos) {
            cout << "yes" << '\n';
            return 0;
        }
    }
    cout << "no" << '\n';
}