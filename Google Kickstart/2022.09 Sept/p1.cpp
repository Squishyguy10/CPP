#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int cases; cin >> cases;

    for(int c = 1; c <= cases; c++) {
        int fabrics; cin >> fabrics;
        pair<string, int> colours[fabrics];
        pair<int, int> dura[fabrics];
        int total = 0;

        for(int i = 0; i < fabrics; i++) {
            cin >> colours[i].first >> dura[i].first >> colours[i].second;
            dura[i].second = colours[i].second;
        }
        
        sort(colours, colours+fabrics);
        sort(dura, dura+fabrics);

        for(int i = 0; i < fabrics; i++) {
            if(colours[i].second == dura[i].second) {
                total++;
            }
        }
        cout << "Case #" << c << ": " << total << '\n';
    }
    return 0;
}