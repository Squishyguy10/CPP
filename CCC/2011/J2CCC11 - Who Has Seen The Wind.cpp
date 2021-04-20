#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int humidity, max, altitude;
    cin >> humidity >> max;

    for(int time = 1; time < max; time++) {
        altitude = (-6*pow(time, 4)) + (humidity*pow(time, 3)) + (2*pow(time, 2)) + time;

        if(altitude <= 0) {
            cout << "The balloon first touches ground at hour:" << endl;
            cout << time << endl;
            break;
        }
    }
    if(altitude > 0) {
        cout << "The balloon does not touch ground in the given time." << endl; 
    }
    return 0;
}