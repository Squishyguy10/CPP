#include <bits/stdc++.h>

using namespace std;

int main() {
    int day;
    cin >> day;

    if(day%7 == 1){
        cout << "Monday" << endl;
    }
    else if(day%7 == 2){
        cout << "Tuesday" << endl;
    }
    else if (day%7 == 3){
        cout << "Wednesday" << endl;
    }
    else if(day%7 == 4){
        cout << "Thursday" << endl;
    }
    else if(day%7 == 5){
        cout << "Friday" << endl;
    }
    else if(day%7 == 6){
        cout << "Saturday" << endl;
    }
    else{
        cout << "Sunday" << endl;
    }
    return 0;
}