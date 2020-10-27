#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    for(int i = 0; i < 100000; i++) {
        if(i%10 + (i/10)%10 + (i/100)%10 + (i/1000)%10 + i/10000 == 3) {
            cout << i << endl;
        }
    }
    return 0;
}