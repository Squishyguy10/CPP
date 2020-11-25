#include <bits/stdc++.h>

using namespace std;
 
int main() {
    int height;
    cin >> height;
    for(int i = 0; i <= height; i++){
        for(int j = height - i; j > 0; j--){
            cout << " ";
        }
        for(int k = 0; k < i; k++){
            cout << "**";
        }
        cout << endl;
    }
    return 0;
}