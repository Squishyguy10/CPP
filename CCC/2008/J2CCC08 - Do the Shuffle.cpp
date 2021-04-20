#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<char> songs = {'A', 'B', 'C', 'D', 'E'};
    int number, presses;
    char move;

    while(cin >> number >> presses) {
        if(number == 1) {
            for(int i = 0; i < presses; i++) {
                move = songs.front();
                songs.erase(songs.begin());
                songs.push_back(move);
            }
        } else if(number == 2) {
            for(int i = 0; i < presses; i++) {
                move = songs.back();
                songs.pop_back();
                songs.insert(songs.begin(), move);
            }
        } else if(number == 3) {
            for(int i = 0; i < presses; i++) {
                move = songs.front();
                songs.erase(songs.begin());
                songs.insert(songs.begin()+1, move);
            }
        } else if(number == 4) {
            for(auto i : songs) {
                cout << i << " ";
            }
            break;
        }
    }
    return 0;
}