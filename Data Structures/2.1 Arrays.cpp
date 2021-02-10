#include <bits/stdc++.h>
 
using namespace std;

void one_dim_array() {
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
}

void two_dim_array() {
    int array_2d[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
    };

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << array_2d[i][j] << " ";
        }
        cout << endl;
    }
}

void three_dim_array() {
    int array_3d[2][2][2] = {
    {{1, 2}, {3, 4}},
    {{5, 6}, {7, 8}}
    };

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                cout << array_3d[i][j][k] << " ";
            } 
            cout << endl;
        }
        cout << endl;
    }
}

int main() {
    // one_dim_array();
    // two_dim_array();
    three_dim_array();

    return 0;
}