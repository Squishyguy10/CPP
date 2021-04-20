#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    stack<string> directions, streets;
    char direction_input;
    string street_input;

    while(cin >> direction_input >> street_input) {

        if(direction_input == 'L') {
            directions.push("RIGHT");
        } else if(direction_input == 'R') {
            directions.push("LEFT");
        }

        if(street_input == "SCHOOL") {
            break;
        }

        streets.push(street_input);
    }

    while(!streets.empty()) {
        cout << "Turn " << directions.top() << " onto " << streets.top() << " street." << endl;
        directions.pop();
        streets.pop();
    }
    cout << "Turn " << directions.top() << " into your HOME." << endl;

    return 0;
}