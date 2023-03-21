#include <bits/stdc++.h>
 
using namespace std;

int i = 10;

void my_function() {
    i = 20;
    cout << i << endl;
}

int main() {
    cout << i << endl;
    my_function();
    cout << i << endl;
    
    return 0;
}