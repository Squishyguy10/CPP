#include <bits/stdc++.h>

using namespace std;

int main() { 
    int grid[2][2] = {
        {1, 2},
        {3, 4}};
    int h = 0;
    int v = 0;
    string input; cin >> input;

    for(int i = 0; i < input.length(); i++) {
        if(input[i] == 'H') {
            h++;
        } else if(input[i] == 'V') {
            v++;
        }
    }
    
    if(v % 2 == 1) {
        swap(grid[0][0], grid[0][1]);
        swap(grid[1][0], grid[1][1]);
    }
    if(h % 2 == 1) {
        swap(grid[0][0], grid[1][0]);
        swap(grid[0][1], grid[1][1]);
    }
    cout << grid[0][0] << " " << grid[0][1] << endl;
    cout << grid[1][0] << " " << grid[1][1] << endl;
}