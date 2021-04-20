#include <bits/stdc++.h>
 
using namespace std;

bool unique(int year) {
    unordered_set<char> set;
    string str = to_string(year);
    
    for(int i = 0; i < str.length(); i++) {
        set.insert(str[i]);
    }
    
    if(set.size() != str.length()) {
        return false;
    } else {
        return true;
    }
}
 
int main() {
    int year;
    cin >> year;

    while(true) {
        year++;
        if(unique(year)) {
            break;
        }
    }
    cout << year << endl;

    return 0;
}