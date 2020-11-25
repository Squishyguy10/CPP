#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    // string input;

    // while(cin >> input) {
    //     if(input == "quit!") {
    //         break;
    //     }
    //     if(input.length() > 3 && 
    //     input[input.length()-2] == 'o' && 
    //     input[input.length()-1] == 'r' && 
    //     input[input.length()-3] != 'a' &&
    //     input[input.length()-3] != 'e' &&
    //     input[input.length()-3] != 'i' &&
    //     input[input.length()-3] != 'o' &&
    //     input[input.length()-3] != 'u' &&
    //     input[input.length()-3] != 'y') {
    //         for(int i = 0; i < int(input.length()-2); i++) {
    //             cout << input[i];
    //         }
    //         cout << "our" << endl;
    //     } else {
    //         cout << input << endl;
    //     }
    // }

    string input;
    while(cin >> input) {
        if(input == "quit!") {
            break;
        } else if (input == "neighbor") {
            cout << "neighbour" << endl;
        } else if (input == "instructor") {
            cout << "instructour" << endl;
        } else {
            cout << input << endl;
        }
    }
    return 0;
}