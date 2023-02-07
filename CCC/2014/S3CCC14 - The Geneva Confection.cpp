#include <bits/stdc++.h>
using namespace std;

int main() {
    int cases; cin >> cases;

    for(int c = 0; c < cases; c++) {
        int cars; cin >> cars;
        stack<int> q;
        for(int i = 0; i < cars; i++) {
            int a; cin >> a;
            q.push(a);
        }

        stack<int> s;
        int i = 1;
        while(i <= cars && !q.empty()) {
            if(!s.empty() && s.top() == i) {
                s.pop();
                i++;
            }
            else if(q.top() == i) {
                q.pop();
                i++;
            }
            else {
                s.push(q.top());
                q.pop();
            }
        }

        while(!s.empty() && s.top() == i) {
            s.pop();
            i++;
        }
        
        if(i-1 == cars) {
            cout << 'Y' << '\n';
        }
        else {
            cout << 'N' << '\n';
        }

    }

    return 0;
}