#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int shifts; cin >> shifts;
    string message; cin >> message;

    for(int i = 0; i < message.length(); i++) {
        char letter = (message[i] - shifts) - 3 * (i+1);
        if(letter < 65) 
            letter += 26;
        
        cout << letter;
    }
    cout << '\n';
}