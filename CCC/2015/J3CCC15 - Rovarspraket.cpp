#include <bits/stdc++.h>
 
using namespace std;

int main() {
    string input;
    string con = "bcdfghjklmnpqrstvwxyz";
    string vowel = "aaeeeiiiiooooouuuuuuu";
    string next_con = "cdfghjklmnpqrstvwxyzz";
    cin >> input;

    for(int i = 0; i < input.size(); i++) {
        cout << input[i];

        int find = con.find(input[i]);
        if(find != string::npos) {
            cout << vowel[find];
            cout << next_con[find];
        }
    }
    cout << endl;

    return 0;
}