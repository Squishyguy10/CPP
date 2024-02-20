#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int gates, planes, count = 0;
    cin >> gates >> planes;
    vector<int> spots;
    for(int i = 1; i <= gates; i++)
        spots.push_back(i);
    
    while(planes--) {
        int p; cin >> p;
        int low = 0, high = spots.size()-1;
        int num = -1;
        while(low <= high) {
            int mid = (low+high)/2;
            if(spots[mid] < p) {
                num = mid;
                low = mid+1;
            }
            else if(spots[mid] == p) {
                num = mid;
                break;
            }
            else {
                high = mid-1;
            }
        }
        if(num == -1) {
            break;
        }
        else {
            spots.erase(spots.begin() + num);
            count++;
        }
    }
    cout << count << '\n';

    return 0;
}   