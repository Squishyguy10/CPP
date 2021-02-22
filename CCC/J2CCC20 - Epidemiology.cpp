#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int day = 0, total, total_min, inf_rate, infected;

    cin >> total_min >> infected >> inf_rate;

    total = infected;

    while(total <= total_min) {
        infected *= inf_rate;
        total += infected;
        day++;
    }
    cout << day << endl;
    return 0;
}