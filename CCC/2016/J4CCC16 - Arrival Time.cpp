#include <bits/stdc++.h>
using namespace std;

int main() {
    string input; cin >> input;
    int hours = stoi(input.substr(0, 2));
    int minutes = stoi(input.substr(3, 2));
    int time;

    // Starts in reduced speed
    if(hours >= 7 && hours < 10) {
        time = ((10 - hours) * 60 - minutes) / 2;
        minutes = 120 - time;
        hours = 10 + minutes / 60;
    }
    else if(hours >= 15 && hours < 19) {
        time = ((19 - hours) * 60 - minutes) / 2;
        minutes = 120 - time;
        hours = 19 + minutes / 60;
    }
    // Starts in normal speed but reaches reduces
    else if(hours >= 5 && hours < 7) {
        int extra = 60 - minutes;
        minutes = 0;
        hours++;
        if(hours < 7) {
            hours++;
            extra += 60;
        }
        time = 420 - (hours * 60 - extra);
        minutes = (120 - time) * 2;
        minutes = abs(minutes);
        hours = 7 + minutes / 60;
        if(hours == 10 && minutes == 200) {
            minutes-= 10;
        }
    }
    else if (hours >= 13 && hours < 15) {
        int extra = 60 - minutes;
        minutes = 0;
        hours++;
        if(hours < 15) {
            hours++;
            extra += 60;
        }
        time = 900 - (hours * 60 - extra);
        minutes = (120 - time) * 2;
        minutes = abs(minutes);
        hours = 15 + minutes / 60;
    }
    else {
        hours += 2;
    }

    hours%= 24;
    minutes%= 60;
    cout << setw(2) << setfill('0') << hours << ":" << setw(2) << setfill('0') << minutes << endl;
}