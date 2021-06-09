#include <bits/stdc++.h>

using namespace std;

int main() {
    int duration, number = 0, time = 1200;
    cin >> duration;

    for(int i = 0; i <= duration; i++) {
        time++;

        if(time%100 >= 60) {
            time+= 40;
            if(time/100 > 12) {
                time-= 1200;
            }
        }

        if(time < 1000) {
            int d[3] = {time/100, (time/10)%10, time%10};
            if(d[2]-d[1] == d[1]-d[0]) {
                number++;
            }
        } 
        else {
            int d[4] = {1, (time/100)%10, (time/10)%10, time%10};
            if(d[3]-d[2] == d[2]-d[1] && d[2]-d[1] == d[1]-d[0]) {
                number++;
            }
        }
    }
    cout << number << endl;

    return 0;
}