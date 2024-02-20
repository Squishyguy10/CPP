#include <bits/stdc++.h> 
using namespace std;
    
#define int long long

int wood[2001];
int boards[4001];

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        int temp; cin >> temp;
        wood[temp]++;
    }

    for(int i = 1; i <= 2000; i++) {
        if(wood[i] != 0) {
            boards[2*i] += wood[i]/2;
            for(int j = i+1; j <= 2000; j++) {
                if(wood[j] != 0) {
                    boards[i+j] += min(wood[i], wood[j]);
                }
            }
        }
    }

    int fence = 0;
    for(int i = 1; i <= 4000; i++) {
        fence = max(fence, boards[i]);
    }

    int count = 0;
    for(int i = 1; i <= 4000; i++) {
        if(fence == boards[i]) {
            count++;
        }
    }
    cout << fence << " " << count << '\n';
    
    return 0;
}