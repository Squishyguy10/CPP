#include <bits/stdc++.h>
using namespace std;

int main() {
    string input; cin >> input;
    bool wasLetter = false;

    for(int i = 0; i < input.length(); i++) {
        if(input[i] == '+') {
            cout << " tighten ";
        } else if(input[i] == '-') {
            cout << " loosen ";
        } else {
            if(wasLetter == true && !isdigit(input[i])) {
                cout << endl;
                wasLetter = false;
            }

            cout << input[i];

            if(isdigit(input[i])) {
                wasLetter = true;
            }
        }
    }
}