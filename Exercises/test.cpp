#include <bits/stdc++.h>

using namespace std;

int main() {
    int input;
    cin >> input;
    for(int i = 2; i < input; i ++){
        if(input % i == 0){
        break;   
        }else{
            cout << "PRIME" << endl;
        break;
        }
    }
    return 0;
}