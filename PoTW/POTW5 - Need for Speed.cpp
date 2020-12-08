#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int TooncesKM = 60;
    float HectorKM = TooncesKM + 15;
    int hr = 60;

    cout << "a) = " << 10 / (TooncesKM / hr) << "mins" << endl;
    cout << "b) = " << 10 / (HectorKM / hr) << "mins" << endl;
    cout << "c) = " << (10 / (TooncesKM / hr)) - (10 / (HectorKM / hr)) << "mins" << endl;
    return 0;
}