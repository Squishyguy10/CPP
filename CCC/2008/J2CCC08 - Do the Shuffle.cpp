#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<char> songs = {'A', 'B', 'C', 'D', 'E'};
    int number, presses;
    char move;

    while(cin >> number >> presses) {
        if(number == 4) {
            for(auto i : songs) {
                cout << i << " ";
            }
            break;
        }

        while(presses--) {
            if(number == 1) {
                songs.push_back(songs.front());
                songs.erase(songs.begin());
            }
            else if(number == 2) {
                songs.insert(songs.begin(), songs.back());
                songs.pop_back();
            }
            else if(number == 3) {
                move = songs.front();
                songs.erase(songs.begin());
                songs.insert(songs.begin()+1, move);
            }
        }
    }
}