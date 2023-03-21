#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b;
    cin >> a >> b;
    int fac1 = b-a+1, fac2 = a + b;
    unordered_map<int, int> map;

    if(fac2 % 2 == 0) {
        fac2 /= 2;
    }
    else {
        fac1 /= 2;
    }

    for(int i = 2; i <= sqrt(fac1); i++) {
        while(fac1 % i == 0) {
            if(map.find(i) == map.end()) {
                map[i] = 0;
            }
            map[i]++;
            fac1/= i;
        }
    }
    if(fac1 != 1) {
        map[fac1]++;
    }

    for(int i = 2; i <= sqrt(fac2); i++) {
        while(fac2 % i == 0) {
            if(map.find(i) == map.end()) {
                map[i] = 0;
            }
            map[i]++;
            fac2/= i;
        }
    }
    if(fac2 != 1) {
        map[fac2]++;
    }
    
    int blapp = 1;
    for(auto &i : map) {
        blapp *= (1+i.second);
    }
    cout << blapp << '\n';
    
    return 0;
}