#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    map <string, int> auction;
    string bidder, winner;
    int count, amount, max_bid = 0;

    cin >> count;

    for(int i = 0; i < count; i++) {
        cin >> bidder >> amount;
        auction[bidder] = amount;

        if(auction[bidder] > max_bid) {
            winner = bidder;
            max_bid = auction[bidder];
        }
    }
    cout << winner << endl;
    
    return 0;
}