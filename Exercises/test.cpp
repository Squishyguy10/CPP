#include <bits/stdc++.h>

using namespace std;
 
int main() {
    string str, str1, str2;
    cin >> str1 >> str2;

    for(int i = 0; i < str1.length() - str2.length(); i++) {
        if(str.substr(i, str2.length()) != str2) {
            cout << "no" << endl;
        } else {
            cout << "yes" << endl;
        }
    }

}