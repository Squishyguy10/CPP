#include <bits/stdc++.h>
 
using namespace std;

// void my_function() { // Without parameters
//     cout << "Hello my friends!" << endl; // Doesn't print until you call it
// }
// int main() {
//     my_function(); // Calls the funtions (runs it)
//     return 0;
// }

// void my_function(string|bool|int parameter, ...) {
// }
// void my_function(string name, int height) {
//     cout << "Name: " << name << endl << "Height: " << height << "cm" << endl << endl;
// }
// int main() {
//     my_function("George", 154);
//     my_function("David", 173);
//     return 0;
// }
int sum;

int aplusb(int a, int b) {
    sum = a + b;
    return sum;
}

int aminusb(int a, int b) {
    sum = a - b;
    return sum;
}

int atimesb(int a, int b) {
    sum = a * b;
    return sum;
}

double adivideb(int a, int b) {
    double(sum) = double(a) / b;
    return sum;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << "a + b = " << aplusb(a, b) << endl;
    cout << "a - b = " << aminusb(a, b) << endl;
    cout << "a * b = " << atimesb(a, b) << endl;
    cout << "a / b = " << adivideb(a, b) << endl;

    return 0;
}