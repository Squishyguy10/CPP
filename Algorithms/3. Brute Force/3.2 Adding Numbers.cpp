#include <bits/stdc++.h>
 
using namespace std;

int sum = 0, input;

int brute_force(int input) {
    for(int i = 1; i <= input; i++) {
        sum+= i;
    }
    return sum;
}

int gauss(int input) {
    if(input % 2 == 0) {
        sum = (input+1) * (input/2);
    } else {
        sum = input * (input/2) + input;
    }

    return sum;
}

int main() {
    cin >> input;

    // cout << brute_force(input) << endl;
    cout << gauss(input) << endl;

    return 0;
}