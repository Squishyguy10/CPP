#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    // bool y = true;
    // int w = 1;
    // while(y) {
    //     cout << "y is true" << endl;
    //     if(w == 3) {
    //         y = false;
    //     } else {
    //         w++;
    //     }
    // }

    // string str;
    // while(cin >> str) {
    //     if(str == "bye") {
    //         break;
    //     }
    //     cout << "hello" << endl;
    // }
    // cout << "byebye" << endl;

    string response;
    // do {
    //     cout << endl << "Hello" << endl;
    //     cin >> response;
    // } while(response != "bye");

    // the same as:

    cout << "Hello" << endl;
    cin >> response;
    while(response != "bye") {
        cout << endl << "Hello" << endl;
        cin >> response;
    }
    return 0;
}