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

    int curr = 0;
    int count = 0;
    int range = 0;
    int lower = INT_MAX;
    int lowpos = 0;
    int upper = -1;
    int uppos = 0;
    for(int i = 1; i <= n; i++) {
        if(i == seen[curr]) {
            if(seen[curr] != 1) {
                count += seen[curr] - seen[curr-1] - 1;
            }
            
            curr++;
        }
        if(arr[i] < lower) {
            lower = arr[i];
            lowpos = i;
        }
        else if(arr[i] > lower) {
            upper = arr[i];
            uppos = i;
        }
        

        else if(arr[i] < seen[curr]) {
            upper = i;
        }
        else {

        }
    }

    if(seen.end() != n) {

    }


    cout << count << '\n';

    return 0;
}