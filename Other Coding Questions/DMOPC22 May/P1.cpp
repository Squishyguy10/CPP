#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    int sums[n+5];

    if(n == 2) {
        cin >> sums[0];
        cout << sums[0]-1 << endl;
    }
    else if(n == 3) {
        cin >> sums[0] >> sums[1];
        cout << min(sums[0], sums[1]) - 1 << endl;
    }
    else {
        for(int i = 0; i < n-1; i++) {
            cin >> sums[i];
        }

        int outp = sums[0]-1;
        int nums[sums[0]+5][n+5];

        for(int i = 0; i < sums[0]-1; i++) {
            nums[i][0] = i+1;

            for(int j = 1; j < n; j++)  {
                nums[i][j] = sums[j-1] - nums[i][j-1];
                cout << nums[i][j] << " ";

                if(nums[i][j] <= 0) {
                    outp--;
                    break;
                }
            }
            cout << endl;
        }
        cout << outp << endl;
    }

    return 0;
}