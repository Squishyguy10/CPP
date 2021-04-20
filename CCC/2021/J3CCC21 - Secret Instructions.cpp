#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int sum;
    string input, direction;
    char array[5];

    while(cin >> input) {
        if(input == "99999") {
            break;
        }
        for(int i = 0; i < 5; i++) {
            array[i] = input[i];
        }
        sum = int(array[0]) + int(array[1]);

        if(sum == 96) {
            direction = direction;
        } else if(sum % 2 == 1) {
            direction = "left";
        } else {
            direction = "right";
        }
        cout << direction << " " << array[2] << array[3] << array[4] << endl;
    }

    return 0;
}