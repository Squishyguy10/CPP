#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    map <int, string> auction;
    string bidder;
    int count, amount, winning_bid = 0;

    cin >> count;

    for(int i = 0; i < count; i++) {
        cin >> bidder >> amount;

        if(!auction.count(amount)) {
            auction[amount] = bidder;
            winning_bid = max(winning_bid, amount);
        }
    }
    cout << auction[winning_bid] << endl;
    
    return 0;
}