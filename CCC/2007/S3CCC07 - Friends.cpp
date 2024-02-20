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
    unordered_map<int, int> circle;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        circle.insert({a, b});
    }

    int a, b;
    while(cin >> a >> b) {
        if(a == 0) {
            break;
        }
        int distance = 0, curr = a;
        bool connected = true;
        while(curr != b) {
            curr = circle[curr];
            if(curr == 0 || curr == a) {
                connected = false;
                break;
            }
            distance++;
        }

        if(connected) {
            cout << "Yes " << distance-1 << '\n';
        }
        else {
            cout << "No" << '\n';
        }
    }

    return 0;
}