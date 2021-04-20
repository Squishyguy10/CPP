#include <bits/stdc++.h>
 
using namespace std;

int last, n, row, col, a, max_a = 0;
int room[row][col];
bool seen[max_a];
vector<int> vect = room[0][0];

string check() {
    if(seen[room[row][col]]) {
        return "yes";
    }
}

string factors() {
    for(int i = 1; i <= sqrt(last); i++) {
        if(last % i == 0) {
            n = last / i;
            vect.pop_back();
            vect.push_back(room[i][n]);
            last = vect.back();
            seen[last] = true;
            if(i != n) {
                vect.pop_back();
                vect.push_back(room[n][i]);
                last = vect.back();
                seen[last] = true;
            }
            if(vect[0] == 0) {
                return "no";
            }
        }
    }
}

void cells() {
    last = vect.back();
    seen[last] = true;
    vect.pop_back();
    vect.push_back(last);
    
    for(int i = 0; i < max_a; i++) {
        if(seen[i]) {
            factors();
        }
    }
}

int main() {
    cin >> row >> col;

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> room[i][j];
            a = room[i][j];
            max_a = max(a, max_a);
        }
    }

    for(int i = 0; i < sizeof(seen)/sizeof(seen[0]); i++) {
        seen[i] = false;
    }

    cells();

    return 0;
}