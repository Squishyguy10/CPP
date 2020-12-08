#include <bits/stdc++.h>

using namespace std;
 
int main() {
    char input;
    int total_score = 0;

    for(int i = 0; i < 6; i++){
        cin >> input;
        if(input == 'W'){
            total_score++; 
        }
    }
    
    if(total_score >= 5) {
        cout << 1 << endl; 
    } else if(total_score >= 3) {
        cout << 2 << endl;
    } else if(total_score >= 1) {
        cout << 3 << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}