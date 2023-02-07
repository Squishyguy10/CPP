#include <bits/stdc++.h>
using namespace std;

string reverse(string s) {
    string ns;
    for(int i = s.size()-1; i >= 0; i--)
        ns += s[i];
    return ns;
}

string reverse2(string s) {
    if(s.empty())
        return "";

    string ns;
    ns += s.back();
    s.pop_back();
    return ns += reverse2(s);
}

string reverse3(string s) {
    if(s.empty()) 
        return "";
        
    return s.back() + reverse3(s.substr(0, s.size()-1));
}

int main() {
    string s; cin >> s;

    cout << reverse(s) << '\n';
    cout << reverse2(s) << '\n';
    cout << reverse3(s) << '\n';
}