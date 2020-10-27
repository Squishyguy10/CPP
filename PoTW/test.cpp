#include <bits/stdc++.h>

using namespace std;
 
int main() {
    // int height;
    // cin >> height;
    // for(int i = 0; i <= height; i++){
    //     for(int j = height - i; j > 0; j--){
    //         cout << " ";
    //     }
    //     for(int k = 0; k < i; k++){
    //         cout << "**";
    //     }
    //     cout << endl;
    // }


    int sum = 0, last_num, number;

    cin >> number;

    for(int i = number; i > 0; i/= 10){
        last_num = i % 10;
        sum += last_num;
    }
    cout << sum << endl;
    

    return 0;
}