#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int city2, city3, city4, city5; 
    cin >> city2 >> city3 >> city4 >> city5;

    cout << 0 << " " << city2 << " " << city2 + city3 << " " << city2 + city3 + city4 << " " << city2 + city3 + city4 + city5 << " " << endl;
    cout << city2 << " " << 0 << " " << city3 << " " << city3 + city4 << " " << city3 + city4 + city5 << " " << endl;
    cout << city2 + city3 << " " << city3 << " " << 0 << " " << city4 << " " << city4 + city5 << " " << endl;
    cout << city2 + city3 + city4 << " " << city3 + city4 << " " << city4 << " " << 0 << " " << city5 << " " << endl;
    cout << city2 + city3 + city4 + city5 << " " << city3 + city4 + city5 << " " << city4 + city5 << " " << city5 << " " << 0 << " " << endl;

    return 0;
}