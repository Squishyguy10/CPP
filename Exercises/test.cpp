#include <bits/stdc++.h>
using namespace std;

int main() {
    float mark, want, per;
    cin >> mark >> want >> per;
    float r = floor(((want-0.5)*100) - (mark*(100-per))/per - 1);
    cout << r << '\n';
    if(mark >= want) {
        cout << 0 << '\n';
    }
    else if(r <= 100) {
        cout << r << '\n';
    }
    else {
        cout << "DROP THE COURSE" << '\n';
    }

    return 0;
}