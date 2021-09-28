#include <bits/stdc++.h>

using namespace std;

int main() {
    string fullStr, subStr;
    cin >> fullStr >> subStr;

    for(int i = 0; i < subStr.length(); i++) {
        string shift = subStr.substr(i) + subStr.substr(0, i);
        size_t find = fullStr.find(shift);

        if(find != string::npos) {
            cout << "yes" << endl;
            return 0;
        }
    }
    cout << "no" << endl;
    
    return 0;
}