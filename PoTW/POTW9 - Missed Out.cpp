#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int total = 30;
    int kyb = 12;
    int aau = 17;
    int both = 5;
    int missed = total - (kyb + aau - both);

    cout << "The number of students the missed both workshops were " << missed << endl;
    return 0;
}