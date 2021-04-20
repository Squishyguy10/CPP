#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int speed_lim, speed, speed_dif;
    cin >> speed_lim >> speed;
    speed_dif = speed - speed_lim;

    if(speed_dif > 30) {
        cout << "You are speeding and your fine is $500." << endl;
    } else if(speed_dif > 20) {
        cout << "You are speeding and your fine is $270." << endl;
    } else if(speed_dif > 0) {
        cout << "You are speeding and your fine is $100." << endl;
    } else {
        cout << "Congratulations, you are within the speed limit!" << endl;
    }
    return 0;
}