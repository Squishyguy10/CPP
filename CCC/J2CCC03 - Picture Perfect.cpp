#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int width = 0, height = 0, perimeter = 0, operations = 0, pictures;
    // while(cin >> pictures) {
    //     if(pictures == 0) {
    //         break;
    //     }
    //     for(int i = 1; i < pictures; i++) {
    //         for(int j = i; j < pictures/2; j++) {
    //             if(i * j == pictures) {
    //                 width = i;
    //                 height = j;
    //                 perimeter = 2*(width + height);
    //             }
    //             operations++;
    //         }  
    //     }
    //     cout << "Minimum perimeter is " << perimeter << " with dimensions " << width << " x " << height << endl;
    //     cout << "Total operations: " << operations << endl;
    // }

    while(cin >> pictures) {
        if(pictures == 0) {
            break;
        }
        height = sqrt(pictures);

        while(pictures % height != 0) {
            height--;
            operations++;
        }

        width = pictures/height;
        perimeter = 2*(height + width);

        cout << "Minimum perimeter is " << perimeter << " with dimensions " << width << " x " << height << endl;
        cout << "Total operations: " << operations << endl;
    }
    return 0;
}