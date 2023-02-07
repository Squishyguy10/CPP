#include <bits/stdc++.h>

using namespace std;

int fibonacci(int input) {
    int sum = 1;
    int old_sum = -1;

    for(int i = 0; i <= input; i++) {
        sum += old_sum;
        old_sum = sum - old_sum;
    }
    return sum;
}


void fibonacci2(int input) {
    int sum = 1;
    int old_sum = -1;

    for(int i = 0; i <= input; i++) {
        sum += old_sum;
        old_sum = sum - old_sum;
        cout << sum << endl;
    }
}

int main() {
    int input;
    cin >> input;

    cout << fibonacci(input) << endl;
    // fibonacci2(input);

    return 0;
} 