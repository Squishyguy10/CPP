#include <bits/stdc++.h>
 
using namespace std;

// There are no switch statements in Python
// This is basically an IF statement

int main() {
    char response;
    cin >> response;
    switch(response) {
        case 'e': 
            cout << "Found e" << endl;
            break;
        case 'E': 
            cout << "Found E" << endl;
            break;
        default: 
            cout << "Not e" << endl;
            break;
    }
    
    return 0;
}