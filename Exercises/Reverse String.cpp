#include <bits/stdc++.h>
 
using namespace std;

void with_stack() {
    stack<char> reverse;
    string str;
    getline(cin, str);

    for(int i = 0; i < str.length(); i++) {
        reverse.push(str[i]);
    }

    while(!reverse.empty()) {
        cout << reverse.top();
        reverse.pop();
    }
    cout << endl;
}

void without_stack() {
    string str;
    getline(cin, str)

    for(int i = str.length() - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;
}

int main() {
    // with_stack();
    without_stack();

    return 0;
}