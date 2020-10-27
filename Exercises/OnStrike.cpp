#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int money, grade;
    cin >> grade;
    if(grade > 7){
        money = 30;
        cout << money << endl;
    } else{
        money = 20;
        cout << money << endl;
    }

    if(grade <= 7){
        money = 20;
    }
    if(grade > 7){
        money = 30;
    }
    cout << money << endl;
    return 0;
}