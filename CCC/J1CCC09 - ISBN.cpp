#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int sum_before_adding = 108 - (5*3 + 2), input1, input2, input3, sum;

    cin >> input1 >> input2 >> input3;
    
    input2 *= 3;

    sum = sum_before_adding + input1 + input2 + input3;

    cout << "The 1-3-sum is " << sum << endl;

    return 0;
}