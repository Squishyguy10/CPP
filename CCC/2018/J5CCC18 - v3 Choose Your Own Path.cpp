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
    vector<int> endings; 
    vector<int> vect[n+1];
    bool visited[n+1] = {};
    int degree[n+1] = {};

    for(int i = 1; i <= n; i++) {
        int hum; cin >> hum;
        if(hum == 0) {
            endings.pb(i);
        }
        else {
            while(hum--) {
                int ddoo; cin >> ddoo;
                vect[i].pb(ddoo);
            }
        }
    }

    queue<int> q;
    q.push(1);
    visited[1] = true;
    degree[1] = 1;

    while(!q.empty()) { 
        int curr = q.front();
        q.pop();

        for(int nxt : vect[curr]) {
            if(!visited[nxt]) {
                visited[nxt] = 1;
                q.push(nxt);
                degree[nxt] = degree[curr]+1;
            }
        }
    }

    char outp = 'Y';
    for(int i = 1; i <= n; i++) {
        if(!visited[i]) {
            outp = 'N';
            break;
        }
    }
    int m = INT_MAX;
    for(int i = 0; i < endings.size(); i++) {
        if(degree[endings[i]] != 0) {
            m = min(m, degree[endings[i]]);
        }
    }

    cout << outp << '\n';
    cout << m << '\n';
    
    return 0;
}