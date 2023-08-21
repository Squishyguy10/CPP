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
    
    int cases; cin >> cases;
    
    for(int c = 1; c <= cases; c++) {
        int m, r, l;
        cin >> m >> r >> l;
        int outp = l;

        vector<int> light;
        for(int i = 0; i < l; i++) {
            int pos; cin >> pos;
            light.pb(pos);
        }

        bool possible = true;
        if(light[0] - r > 0 || light[l-1] + r < m) {
            possible = false;
        }
        else {
            vector<int> v1;
            for(int i = 0; i < l; i++) {
                if(light[i]-r <= 0) {
                    v1.pb(i);
                }
            }

            for(int i = v1.size()-2; i >= 0; i--) {
                light.erase(light.begin() + v1[i]);
                outp--;
            }

            vector<int> v2;
            for(int i = light.size()-1; i >= 0; i--) {
                if(light[i]+r >= m) {
                    v2.pb(i);
                }
            }

            for(int i = v2.size()-2; i >= 0; i--) {
                light.erase(light.begin() + v2[i]);
                outp--;
            }


            for(int i = 0; i < light.size()-1; i++) {
                if(light[i] + r < light[i+1] - r) {
                    possible = false;
                    break;
                }
                else if(i > 0 && light[i-1] + r >= light[i+1] - r) {
                    outp--;
                    light.erase(light.begin() + i);
                    i--;
                }
            }

        }

        if(possible) {
            cout << "Case #" << c << ": " << outp << endl;
        }
        else {
            cout << "Case #" << c << ": " << "IMPOSSIBLE" << endl;
        }
    }

    return 0;
}