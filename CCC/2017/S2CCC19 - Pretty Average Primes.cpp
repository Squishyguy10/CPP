#include <bits/stdc++.h>

using namespace std;

bool prime(int number) {
    for(int i = 3; i <= sqrt(number); i+= 2) {
        if(number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int number, input;

    for(cin >> input; input > 0; input--) {
        cin >> number;

        for(int A = 3; A < number; A+= 2) {
            if(prime(A) && prime(2 * number - A)) {
                cout << A << " " << 2 * number - A << endl;
                break;
            }
        }
    }
    return 0;
}