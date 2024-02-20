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
    
    int n, slice, oven, time;
    cin >> n >> slice >> oven >> time;
    unordered_map<string, int> arr;

    for(int i = 0; i < n; i++) {
        int a;
        string b;
        cin >> a >> b;

        arr.insert({b, 0});
        arr[b] += a;
    }
    int cook = 0;
    for(auto i : arr) {
        cook += i.s/slice;
        if(i.s % slice > 0) cook++;
    }

    int outp = cook/oven;
    if(cook % oven > 0) outp++;
    
    outp *= time;

    cout << outp << '\n';
    
    return 0;
}