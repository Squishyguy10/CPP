#include <bits/stdc++.h>

using namespace std;

vector<int> grid = {1, 2, 3, 4};

void horizontal() {
    for(int i = 0; i < 2; i++) {
        grid.push_back(grid.front());
        grid.erase(grid.begin());
    }
}

void vertical() {
    grid.insert(grid.begin()+2, grid.front());
    grid.erase(grid.begin());

    grid.insert(grid.begin()+2, grid.back());
    grid.erase(grid.end()-1);
}

int main() { 
    string input;
    cin >> input;

    for(int i = 0; i < input.length(); i++) {
        if(input[i] == 'H') {
            horizontal();
        } else if(input[i] == 'V') {
            vertical();
        }
    }
    
    for(int i = 0; i < 4; i++) {
        if(i == 2) {
            cout << endl;
        }
        cout << grid[i] << " ";
    }
    cout << endl;

    return 0;
}