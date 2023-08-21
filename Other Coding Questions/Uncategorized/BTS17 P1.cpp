#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string str;
    getline(cin, str);

    for(int i = 1; i < str.length(); i++) {
        if(isupper(str[i])) {
            str.insert(i-1, 1, '.');
            i++;
        }
    }
    cout << str << '.' << '\n';
}