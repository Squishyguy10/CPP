#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int books[3];
    int apples[] = {1, 3, 2, 55, 14, 0, 13};
    char bye[] = {'b', 'y', 'e'};
    float numbers[3] = {1.23, 54.25, 546.1};
    string aceg[4] = {"All", "Cows", "Eat", "Grass"};

    cout << sizeof(apples) << endl; // total amount of bytes (4 * 7 = 28)
    cout << sizeof(apples[0]) << endl; // data type (integer so 4 bytes)
    
    for(int i = 0; i < sizeof(apples)/sizeof(apples[0]); i++) {
        cout << "apples[" << i << "]: " << apples[i] << endl;
    }

    // cin >> books[0];
    // cout << endl;
    // books[1] = books[0] + 3;
    // books[2] = 2;
    // cout << books[0] << endl;
    // cout << books[1] << endl;
    // cout << books[2] << endl;

    // cout << "sizeof(int): " << sizeof(int) << endl;
    // cout << "numberof(books): " << sizeof(books) << endl;

    return 0;
}