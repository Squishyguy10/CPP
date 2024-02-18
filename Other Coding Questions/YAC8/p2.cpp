#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pii pair<int, int>
#define psi pair<string, int>
#define pis pair<int, string>
#define pss pair<string, string>
#define pb push_back

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int arr[n+1];
    vector<int> seen;

    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        if(arr[i] == i) {
            seen.pb(i);
        }
    }
    int marker = 0;
    int marker2 = n;
    int count = 0;
    int range = 0;
    int lower = 0;
    int upper = n;

    if(!seen.empty()) {
        for(int i = 1; i <= n; i++) {
            if(i == seen.front()) {
                count += seen.front() - marker - 1;
                marker = i;
                seen.erase(seen.begin());
            }
            
            if(seen.empty()) {
                lower = marker;
                break;
            }
            else if(arr[i] > seen.front()) {
                lower = marker;
                break;
            }
        }
    }

    if(!seen.empty()) {
        for(int i = n; i > 0; i--) {
            if(i == seen.back()) {
                count += marker2 - seen.back();
                marker2 = i;
                seen.pop_back();
            }

            if(seen.empty()) {
                upper = marker2;
                break;
            }
            else if(arr[i] < seen.back()) {
                upper = marker2;
                break;
            }
        }
    }
    else if(lower == 0) {
        upper = lower;
    }
    

    count += upper - lower;

    // itr up then down then do middle

    cout << count << '\n';

    return 0;
}