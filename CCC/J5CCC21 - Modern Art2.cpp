#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int r, c, k, input2, gold = 0, rtrue = 0, ctrue = 0;
    char input1;
    cin >> r >> c >> k;
    bool row[c], col[r];

    for(int i = 0; i < c; i++) {
        row[i] = false;
    }
    for(int i = 0; i < r; i++) {
        col[i] = false;
    }

    for(int i = 0; i < k; i++) {
        cin >> input1 >> input2;
        if(input1 == 'R') {
            row[input2] = !row[input2];
        } else if(input2 == 'C') {
            col[input2] = !row[input2];
        }
    }

    for(int i = 0; i < c; i++) {
        if(row[i]) {
            gold += c;
            rtrue++;
        }
    }
    for(int i = 0; i < r; i++) {
        if(col[i]) {
            gold += r;
            ctrue++;
        }
    }
    gold -= (rtrue * ctrue);
    cout << gold << endl;

    return 0;
}