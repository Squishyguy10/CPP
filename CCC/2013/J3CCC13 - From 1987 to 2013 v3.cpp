#include <bits/stdc++.h>
 
using namespace std;

bool unique(int year) {
    unordered_set<char> set;
    int year2 = year;
    int i = 0;

    while(year2 > 0) {
        set.insert(year2 % 10);
        year2/= 10;
        i++;
    }
    
    if(set.size() != i) {
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