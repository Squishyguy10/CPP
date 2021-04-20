#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int num_of_lines, number;
    char character;
    cin >> num_of_lines;
    for(int i = 0; i < num_of_lines; i++) {
        cin >> number >> character;
        for(int i = 0; i < number; i++) {
            cout << character;
        }
        cout << endl;
    }
    return 0;
}