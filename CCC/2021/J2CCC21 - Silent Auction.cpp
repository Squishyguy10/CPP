#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    string winner, bidder;
    int count, amount, win = 0;
    
    cin >> count;
    
    for(int i = 0; i < count; i++) {
        cin >> bidder >> amount;
        
        if(amount > win) {
            winner = bidder;
            win = amount;
        }
    }
    cout << winner << endl;

    return 0;
}