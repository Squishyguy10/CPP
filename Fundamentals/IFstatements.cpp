#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int x = 1;
    if(x == 1){
        cout << "x = 1" << endl;
    }

    if(x == 2){
        cout << "x = 2" << endl;
    } else{
        cout << "x = other_digit" << endl; 
    }

    if(x == 3){
        cout << "x = 3" << endl;
    } else if(x == 2){
        cout << "x = 2" << endl;
    } else if(x == 1){
        cout << "x = 1" << endl;
    } else{
        cout << "x = other_digit" << endl;
    }
    return 0;
}