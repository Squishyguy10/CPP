#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    pair<double, double> arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i].f >> arr[i].s;
    }

    sort(arr, arr + n);
    double maxVel = 0;
    for(int i = 0; i < n-1; i++) {
        maxVel = max(abs((arr[i].s - arr[i+1].s)/(arr[i].f - arr[i+1].f)), maxVel);
    }

    cout << fixed << setprecision(14) << maxVel << '\n';

    return 0;
}