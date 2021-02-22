#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int count;
    int win = 0;
    int win2 = 0;
    cin >> count;
    int bid[count]; 
    string winner;
    string person[count];
    
    for(int i = 0; i < count; i++) {
        cin >> person[i] >> bid[i];
    }

    for(int i = 0; i < count; i++) {
        win = max(win, bid[i]);
        if(win > win2) {
            winner = person[i];
        }
        win2 = win;
    }
    cout << winner << endl;
    
    return 0;
}