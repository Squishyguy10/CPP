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
    
    int n, a, b;
    cin >> n >> a >> b;
    bool arr[b][a];
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            arr[j][i] = false;
        }
    }

    while(n--) {
        pii p1, p2;
        cin >> p1.f >> p1.s >> p2.f >> p2.s;
        // (y,x)

        if(p1.f == p2.f) {
            if(p1.s > p2.s) {
                int temp = p1.s;
                p1.s = p2.s;
                p2.s = temp;
            }
            for(; p1.s <= p2.s; p1.s++) {
                arr[p1.s][p1.f] = true;
            }
        }
        else if(p1.s == p2.s) {
            if(p1.f > p2.f) {
                int temp = p1.f;
                p1.f = p2.f;
                p2.f = temp;
            }
            for(; p1.f <= p2.f; p1.f++) {
                arr[p1.s][p1.f] = true;
            }
        }
        else {
            if(p1.s > p2.s) {
                pii temp = p1;
                p1 = p2;
                p2 = temp;
            }
            if(p1.f < p2.f) {
                int i = 0;
                for(; p1.s <= p2.s; p1.s++, i++) {
                    arr[p1.s][p1.f+i] = true;
                }
            }
            else {
                int i = 0;
                for(; p1.s <= p2.s; p1.s++, i++) {
                    arr[p1.s][p1.f-i] = true;
                }
            }
        }
    }  
    int count = 0;

    for(int i = 0; i < b; i++) {
        for(int j = 0; j < a; j++) {
            if(arr[i][j]) {
                cout << 'X' << " ";
            }
            else {
                cout << '.' << " ";
            }
            if(!arr[i][j]) {
                count++;
            }
        }
        cout << endl;
    }
    cout << count << '\n';
    
    return 0;
}