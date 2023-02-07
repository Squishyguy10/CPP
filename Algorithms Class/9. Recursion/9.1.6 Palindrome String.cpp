#include <bits/stdc++.h>
using namespace std;

string palindrome(string s) {
    for(int i = 0; i < s.size()/2; i++)
        if(s[i] != s[s.size()-i-1])
            return "no";

    return "yes";
}

string palindrome2(string s) {
    if(s.empty())
        return "yes";
    
    if(s.front() == s.back())
        return palindrome2(s.substr(1, s.size()-2));
        
    return "no";
}

int main() {
    string s; cin >> s;

    cout << palindrome(s) << '\n';
    cout << palindrome2(s) << '\n';
} 