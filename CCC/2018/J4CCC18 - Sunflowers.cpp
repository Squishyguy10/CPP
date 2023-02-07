#include <bits/stdc++.h>

using namespace std;

int main() {
    int lines;
    int table[lines][lines];
    for(int row = 0; row < lines; row++) {
        for(int col = 0; col < lines; col++) {
            cin >> table[row][col];
        }
    }

    // find min corner
    int check = table[0][0];
    check = min(check, table[0][lines-1]);
    check = min(check, table[lines-1][0]);
    check = min(check, table[lines-1][lines-1]);

    // print by corner
    if(check == table[0][0]) {
        for(int row = 0; row < lines; row++) {
            for(int col = 0; col < lines; col++)
                cout << table[row][col] << " ";
            cout << endl;
        }
    } else if(check == table[0][lines-1]) {
        for(int col = lines-1; col >= 0; col--) {
            for(int row = 0; row < lines; row++)
                cout << table[row][col] << " ";
            cout << endl;
        }
    } else if(check == table[lines-1][0]) {
        for(int col = 0; col < lines; col++) {
            for(int row = lines-1; row >= 0; row--)
                cout << table[row][col] << " ";
            cout << endl;
        }
    } else {
        for(int row = lines-1; row >= 0; row--) {
            for(int col = lines-1; col >= 0; col--)
                cout << table[row][col] << " ";
            cout << endl;
        }
    }
}