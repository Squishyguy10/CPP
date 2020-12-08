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

// string my_function(string name, int height) {
//     cout << "Name: " << name << endl << "Height: " << height << "cm" << endl << endl;
//     return "George";
// }
// int main() {
//     string str = my_function("George", 154);
//     str = my_function("David", 173);
//     return 0;
// }

int my_function(int input1, int input2) {
    int sum = input1 * input2;
    return sum;
}
int main() {
    int answer, num1 = 1, num2 = 10;
    for(int i = 0; i < 10; i++) {
        answer = my_function(num1, num2);
        cout << answer << endl;
        num1++;
        num2--;
    }
    return 0;
}