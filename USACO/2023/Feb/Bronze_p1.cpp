#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pii pair<int, int

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int lines, days, eaten = 0;
    cin >> lines >> days;
    int arr[2][lines];

    for(int l = 0; l < lines; l++) {
        cin >> arr[0][l] >> arr[1][l];
    }

    int curr = 0;
    for(int i = 0; i < lines; i++) {
        int hay = arr[1][i];
        if(curr+1 < arr[0][i]) {
            curr = arr[0][i]-1;
        }

        if(days >= curr + hay) {
            eaten += hay;
            curr += hay;
        }
        else {
            eaten += (days - curr);
            break;
        }
    }

    cout << eaten << '\n';
    
    return 0;
}