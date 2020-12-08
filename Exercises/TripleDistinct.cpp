#include <bits/stdc++.h>

using namespace std;

int main() {
    int input;
    cin >> input;
    for (int i = 1; i < input; i++) {
        for (int j = i+1; j < input; j++) {
            for (int k = j+1; k < input; k++) {
                if (i + j + k == input) {
                    cout << i << " " << j << " " << k << endl;
                }
            }
        }
    }
    return 0;
}