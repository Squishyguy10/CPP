#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int cases; cin >> cases;
    for(int c = 1; c <= cases; c++) {
        int s, sum = 0;
        cin >> s;
        int arr[s];

        for(int i = 0; i < s; i++) {
            cin >> arr[i];
        }

        for(int i = 0; i < s; i++) {
            if(arr[i] >= 0) {
                int a = 0;
                for(int j = i; j < s; j++) {
                    a += arr[j];
                    if(a >= 0) {
                        sum += a;
                    }
                    else {
                        break;
                    }
                }
            }
        }

        cout << "Case #" << c << ": " << sum << '\n';
    }
    return 0;
}