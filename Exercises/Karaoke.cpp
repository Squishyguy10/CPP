#include <bits/stdc++.h>
 
using namespace std;

int main() {
    queue<string> karaoke; 
    string song;

    while(cin >> song) {
        if(song == "end") {
            break;
        }
        karaoke.push(song);
    }

    while(!karaoke.empty()) {
        cout << karaoke.front() << endl;
        karaoke.pop();
    }

    return 0;
}