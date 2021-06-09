#include <bits/stdc++.h>

using namespace std;

bool determine_prime(int number) {
    for(int i = 2; i < number/2; i++) {
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

        for(int j = 2; j < i/2; j++) {
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

    generate_prime(number);
    
    return 0;
}