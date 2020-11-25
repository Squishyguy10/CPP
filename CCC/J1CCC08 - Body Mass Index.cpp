#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    float weight, height, bmi;
    cin >> weight >> height;
    bmi = weight/(height*height);

    if(bmi > 25) {
        cout << "Overweight" << endl;
    } else if (bmi < 18.5) {
        cout << "Underweight" << endl;
    } else {
        cout << "Normal weight" << endl;
    }
    return 0;
}