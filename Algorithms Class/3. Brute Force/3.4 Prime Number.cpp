#include <bits/stdc++.h>

using namespace std;

bool determine_prime(int number) {
    if(number%2 == 0) {
        return false;
    }

    for(int i = 3; i < sqrt(number); i+= 2) {
        if(number%i == 0) {
            return false;
        }
    }
    return true;
}

void generate_prime(int number) {
    cout << "Prime numbers between " << number << ":  ";

    for(int i = 1; i < number; i+= 2) {
        bool check = true;

        for(int j = 2; j < sqrt(i); j++) {
            if(i%j == 0) {
                check = false;
                break;
            }
        }

        if(check) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int number;
    cin >> number;

    if(determine_prime(number)) {
        cout << number << " is prime" << endl;
    } else {
        cout << number << " isn't prime" << endl;
    }

    // generate_prime(number);
    
    // int check = 0;
    // bool check2 = false;

    // for(int i = 2; i < number/2; i++) {
    //     if(number%i == 0) {
    //         check = 1;
    //         break;
    //     }
    // }
    // if(check = 0) {
    //     cout << number << " is prime" << endl;
    // } else {
    //     cout << number << " isn't prime" << endl;
    // }
    
    return 0;
}