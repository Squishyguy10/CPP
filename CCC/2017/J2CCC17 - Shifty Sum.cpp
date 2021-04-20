#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int input, shifts;
    cin >> input >> shifts;
    int sum = input, number[shifts];
    
    for(int i = 0; i < shifts; i++) {
        input *= 10;
        number[i] = input;
        sum += number[i];
    }
    cout << sum << endl;

    return 0;
}