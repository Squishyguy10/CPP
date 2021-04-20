#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int year;
    cin >> year;
    
    while(true) {
        unordered_set<char> set;
        year++;
        string str = to_string(year);
        
        for(int i = 0; i < str.length(); i++) {
            set.insert(str[i]);
        }
        
        if(set.size() == str.length()) {
            break;
        }
    }
    cout << year << endl;

    return 0;
}