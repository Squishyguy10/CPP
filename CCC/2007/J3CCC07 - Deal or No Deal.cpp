#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int choices[10] = {100, 500, 1000, 5000, 10000, 25000, 50000, 100000, 500000, 1000000};
    int cases; cin >> cases;
    int sum = 0;

    for(int i = 0; i < cases; i++) {
        int num; cin >> num;
        choices[num-1] = 0;
    }

    int bank; cin >> bank;

    for(int i = 0; i < 10; i++) {
        sum += choices[i];
    }
    int average = sum/(10-cases);

    if(average > bank) {
        cout << "no deal" << '\n';
    }
    else {
        cout << "deal" << '\n';
    }

    return 0;
}