#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int num; cin >> num;
    int output = 0;
    bool gold = true;

    for(int i = 0; i < num; i++) {
        int points; cin >> points;
        int fouls; cin >> fouls;

        if(points*5 - fouls*3 > 40) {
            output++;
        } else {
            gold = false;
        }
    }
    
    if(gold) {
        cout << output << '+' << endl;
    } else {
        cout << output << endl;
    }
}