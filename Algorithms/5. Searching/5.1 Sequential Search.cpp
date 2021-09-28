#include <bits/stdc++.h>
 
using namespace std;

int main() {
    int sequence[] = {54, 26, 93, 17, 77, 31, 44, 55, 20, 65};
    int input;
    
    cin >> input;

    for(int i = 0; i < sizeof(sequence)/sizeof(sequence[0]); i++) {
        if(input == sequence[i]) {
            cout << "Index = " << i << endl;
            return 0;
        }
    }

    cout << "Value not found" << endl;

    return 0;
}