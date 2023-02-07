#include <bits/stdc++.h>
 
using namespace std;

int main() {
    int start[6] = {1, 3, 0, 5, 8, 5};
    int end[6] = {2, 4, 6, 7, 9, 9};
    int prev_job = 0;
    int current_job = 0;

    cout << current_job << endl;

    for(current_job = 1; current_job < 6; current_job++) {

        if(start[current_job] >= end[prev_job]) {
            cout << current_job << endl;
            prev_job = current_job;
        }
    }

    return 0;
}