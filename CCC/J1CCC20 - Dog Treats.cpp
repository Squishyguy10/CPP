#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int S, M, L;

    cin >> S >> M >> L;

    if(S + 2*M + 3*L >= 10){
        cout << "happy" << endl;
    }
    else{
        cout << "sad" << endl;
    }
    return 0;
}