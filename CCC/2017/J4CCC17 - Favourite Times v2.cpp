#include <bits/stdc++.h>

using namespace std;

int duration, dclock = 1200;

bool check_any_digit() {
    vector<int> d;
    for(int i = 1; i < dclock; i*= 10) {
        d.push_back((dclock/i)%10);
    }
    int diff = d[0] - d[1];
    for(int i = 2; i < d.size(); i++) {
        if(d[i-1] - d[i] != diff) {
            return false;
        }
    }
    return true;
}

bool check() {
    if(dclock < 1000) {
        int d[3] = {dclock/100, (dclock/10)%10, dclock%10};
        if(d[2]-d[1] == d[1]-d[0]) {
            return true;
        }
    } 
    else {
        int d[4] = {1, (dclock/100)%10, (dclock/10)%10, dclock%10};
        if(d[3]-d[2] == d[2]-d[1] && d[2]-d[1] == d[1]-d[0]) {
            return true;
        }
    }
    return false;
}

int main() {
    cin >> duration;

    int number = (duration/720)*31;
    int diff = duration%720;

    for(int i = 0; i < diff; i++) {
        dclock++;

        if(dclock%100 >= 60) {
            dclock+= 40;
            if(dclock/100 > 12) {
                dclock-= 1200;
            }
        }

        // if(check()) {
        //     number++;
        // }
        if(check_any_digit()) {
            number++;
        }
    }
    cout << number << endl;

    return 0;
}