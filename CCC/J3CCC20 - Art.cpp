#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int paints; 
    int x, y; 
    int min_x, max_x;
    int min_y, max_y;
    char comma;
    cin >> paints;

    for(int i = 0; i < paints; i++) {
        cin >> x >> comma >> y;
        if(i == 0) {
            min_x = x;
            min_y = y;
        }
        min_x = min(x, min_x);
        min_y = min(y, min_y);
        max_x = max(x, max_x);
        max_y = max(y, max_y);
    }
    cout << min_x - 1 << comma << min_y - 1 << endl;
    cout << max_x + 1 << comma << max_y + 1 << endl;
    
    return 0;
}