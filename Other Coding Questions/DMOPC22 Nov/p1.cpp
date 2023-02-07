#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ppl; cin >> ppl;

    string str;
    int max = 0;

    for(int i = 1; i <= ppl; i++) {
        if((i+1) % 4 == 0) {
            max++;
            str.push_back('M');
        }
        else if(i % 4 == 0) {
            max++;
            str.push_back('M');
        }
        else {
            str.push_back('_');
        }
    }
    
    cout << max << '\n';
    cout << str << '\n';

    return 0;
}