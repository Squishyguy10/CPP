#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int square[4][4];
    int rows[4] = {0, 0, 0, 0};
    int columns[4] = {0, 0, 0, 0};

    for(int r = 0; r < 4; r++) {
        for(int c = 0; c < 4; c++) {
            cin >> square[r][c];
        }
    }
    for(int r = 0; r < 4; r++) {
        for(int c = 0; c < 4; c++) {
            rows[r] += square[r][c];
            columns[r] += square[c][r];
        }
    }
    
    if(rows[0] == rows[1] && 
    rows[1] == rows[2] && 
    rows[2] == rows[3] &&
    rows[3] == columns[0] && 
    columns[0] == columns[1] &&
    columns[1] == columns[2] &&
    columns[2] == columns[3]) {
        cout << "magic" << endl;
    } else {
        cout << "not magic" << endl;
    }

    return 0;
}