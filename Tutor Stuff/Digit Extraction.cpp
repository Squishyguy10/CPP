#include <bits/stdc++.h>

using namespace std;

int main() {
    int input;
    cin >> input;

    cout << input/1000 << " ";
    cout << (input/100) % 10 << " ";
    cout << (input/10) % 10 << " ";
    cout << input % 10 << endl;

    return 0;
}