#include <bits/stdc++.h>
 
using namespace std;

// Must be in order
// Takes middle of array, then compares that value to input. If input is smaller, check larger portion split. 
// If input is larger, check smaller portion split. Repeat

void exercise1() {
    int array[11] = {17, 20, 26, 31, 44, 54, 55, 65, 77, 93, 98};
    int low = 0;
    int middle;
    int high = sizeof(array)/sizeof(array[0])-1;
    int input;
    cin >> input;

    while(low <= high) {
        middle = low + (high-low)/2;

        if(input == array[middle]) {
            cout << input << " was found at array value " << middle << endl;
            return;

        } else if(input > array[middle]) {
            low = middle+1;

        } else if(input < array[middle]) {
            high = middle-1;
        }
    }

    cout << "Value not found" << endl;
}

void exercise2() {
    int array[500000] = {};
    int low = 0;
    int middle;
    int high = sizeof(array)/sizeof(array[0]);
    int input;
    int counter = 0;
    cin >> input;

    for(int i = 1; i <= sizeof(array)/sizeof(array[0]); i++) {
        array[i] = i;
    }

    while(low <= high) {
        middle = (high+low)/2;
        counter++;

        if(input == array[middle]) {
            cout << input << " was found at array value " << middle << endl;
            cout << counter << endl;
            return;

        } else if(input > array[middle]) {
            low = middle+1;

        } else if(input < array[middle]) {
            high = middle-1;
        }
    }
}

int main() {
    // exercise1();
    exercise2();
    

    return 0;
}