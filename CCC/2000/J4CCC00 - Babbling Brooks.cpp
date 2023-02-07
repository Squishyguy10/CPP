#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    vector<double> streams;

    while(n--) {
        int x; cin >> x;
        streams.push_back(x);
    }
        
    
    int input; cin >> input;
    while(input != 77) {
        if(input == 99) {
            int pos; cin >> pos;
            double percent; cin >> percent;
            pos -= 1;
            streams.insert(streams.begin()+pos+1, streams[pos] * (1 - percent/100));
            streams[pos] *= percent / 100;
        }
        else if(input == 88) {
            int pos; cin >> pos;
            streams[pos] += streams[pos-1];
            streams.erase(streams.begin()+pos-1);
        }

        cin >> input;
    }
    
    for(int i = 0; i < streams.size(); i++)
        cout << round(streams[i]) << ' ';

    return 0;
}