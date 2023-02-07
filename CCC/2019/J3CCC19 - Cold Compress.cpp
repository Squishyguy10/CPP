#include <bits/stdc++.h>
 
using namespace std;

void blocks(int lines, int block, string input) {
    for(int i = 1; i < input.length(); i++) {

        if(input[i] != input[i-1]) {
            cout << block << " " << input[i-1] << " ";
            block = 1;
        } else {
            block++;
        }

        if(i == input.length()-1) {
            cout << block << " " << input[i] << " ";
        } 
    }
}

int main() {
    string input;
    int lines;
    cin >> lines;

    for(int i = 0; i < lines; i++) {
        cin >> input;
        blocks(lines, 1, input);

        cout << endl;
    }
}