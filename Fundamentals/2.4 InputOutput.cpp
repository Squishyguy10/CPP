#include <bits/stdc++.h>

using namespace std;
 
int main() {
    int a, b;
    char comma;
    string str;
    
    cin >> a >> comma >> b;
    cout << "a:" << a << "; comma: " << comma << "; b:" << b << endl;

    cin >> a >> str >> b;
    cout << "a:" << a << "; string: " << str << "; b:" << b << endl;

    // int i = 10;
    // int chr = 'a';

    // cout << 1977 << " " << i << endl;
    // cout << 'a' << " " << char(65) << " " << i << endl;

    // cout << "Hello\nWorld" << endl;
    getline(cin, str);
    
    return 0;
}