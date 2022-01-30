#include <bits/stdc++.h>

using namespace std;

// * is pointer
// & is address

int main() {
    vector<int> v = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    int *ptr = v.front(); // ptr = 0
    ptr++;

    cout << *ptr << endl;




    return 0;
}