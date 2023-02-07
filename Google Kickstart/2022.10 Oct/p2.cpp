#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int cases; cin >> cases;
    for(int c = 1; c <= cases; c++) {
        int stoneRad, houseRad, stonesRed;
        int red = 0, yellow = 0;
        cin >> stoneRad >> houseRad >> stonesRed;

        pair<int, int> arrRed[stonesRed];
        vector<double> redDis;
        for(int i = 0; i < stonesRed; i++) {
            cin >> arrRed[i].first >> arrRed[i].second;
            redDis.push_back(sqrt((arrRed[i].first)*(arrRed[i].first) + (arrRed[i].second)*(arrRed[i].second)));
            if(redDis.back() > (stoneRad + houseRad)) {
                redDis.pop_back();
            }
        }

        int stonesYel; cin >> stonesYel;
        pair<int, int> arrYel[stonesYel];
        vector<double> yelDis;
        for(int i = 0; i < stonesYel; i++) {
            cin >> arrYel[i].first >> arrYel[i].second;
            yelDis.push_back(sqrt((arrYel[i].first)*(arrYel[i].first) + (arrYel[i].second)*(arrYel[i].second)));
            if(yelDis.back() > (stoneRad + houseRad)) {
                yelDis.pop_back();
            }
        }

        sort(redDis.begin(), redDis.end());
        sort(yelDis.begin(), yelDis.end());

        if(yelDis.size() == 0) {
            yelDis.push_back(INT_MAX);
        }
        if(redDis.size() == 0) {
            redDis.push_back(INT_MAX);
        }

        for(int i = 0; i < redDis.size(); i++) {
            if(redDis[i] < yelDis[0]) {
                red++;
            }
            else {
                break;
            }
        }
        
        if(redDis.size() > 0) {
            for(int i = 0; i < yelDis.size(); i++) {
                if(yelDis[i] < redDis[0]) {
                    yellow++;
                }
                else {
                    break;
                }
            }
        }

        cout << "Case #" << c << ": " << red << " " << yellow << '\n';
    }

    return 0;
}