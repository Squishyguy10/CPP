#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pii pair<int, int>
#define pb push_back

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    int a[n+1];
    int sum = 0;
    
    bool isodd = true;
    int oddcount = 0;
    int evencount = 0;

    vector<int> odd;
    vector<int> even;
    
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        if(a[i] % 2 == 0){
            evencount++;
            even.pb(i);
        }
        else{
            oddcount++;
            odd.pb(i);
        }
    }

    if(odd.size() > 0) {
        sum += a[odd[0]]/2;
    }

    for(int i = 0; i < even.size(); i++) {
        sum += a[even[i]]/2 - 1;
        if(odd.size() == 0) {
            sum++;
        }
    }

    for(int i = 1; i < odd.size(); i++) {
        sum += a[odd[i]]/2;
    }

    cout << sum << '\n';
    if(odd.size() > 0) {
        cout << odd[0] << ' ';
    }
    for(int i = 0; i < even.size(); i++) {
        cout << even[i] << ' ';
    }
    for(int i = 1; i < odd.size(); i++) {
        cout << odd[i] << ' ';
    }


    return 0;
}