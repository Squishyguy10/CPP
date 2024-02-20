#include <bits/stdc++.h> 
using namespace std;
    
#define int long long
#define f first
#define s second
#define pii pair<int, int>
#define pss pair<string, string>
#define psi pair<string, int>
#define psd pair<string, double>
#define pb push_back


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;

    while(n--) {
        pss id;
        psi by;
        psi iy;
        psi ey;
        psd ht;
        psd cd;
        pss cl;
        psd bw;
        string height;
        string kg;
        cin >> id.f >> id.s >> by.f >> by.s >> iy.f >> iy.s >> ey.f >> ey.s >> ht.f >> ht.s >> height >> cd.f >> cd.s >> cl.f >> cl.s >> bw.f >> bw.s >> kg;
        int cost = 0;
        int pass = true;

        if(id.s.length() != 12) {
            pass = false;
        }

        for(int i = 0; i < id.s.length(); i++) {
            if(isalpha(id.s[i]) || isdigit(id.s[i])) {
                continue;
            }
            else {
                pass = false;
            }
        }

        if(by.s > iy.s) {
            pass = false;
        }

        if(iy.s >= ey.s || iy.s > 2023) {
            pass = false;
        }

        if(ey.s < 2023 || ey.s > iy.s + 15) {
            pass = false;
        }

        if(ht.s != round(ht.s)) {
            pass = false;
        }

        if(height == "cm") {
            if(ht.s > 250) {
                pass = false;
            }
        }
        else {
            string temp = height.substr(2, height.length()-2);
            double inch = stoi(temp);
            if(inch != round(inch)) {
                pass = false;
            }
            int hadr = (int)inch;
            ht.s += inch/12;
            hadr %= 12;
            if(ht.s > 8) {x
                pass = false;
            }
            else if(ht.s == 8 && hadr > 0) {
                pass = false;
            }
        }

        if(cl.s == "first") {
            cost += 1000;
        }
        else if(cl.s == "business") {
            cost += 500;
        }
        else if(cl.s == "economy") {
            cost += 250;
        }

        if(bw.s > 100) {
            pass = false;
        }
        else {
            cost += bw.s*10;
        }

        if(cd.s != round(cd.s) || bw.s != round(bw.s)) {
            pass = false;
        }

        cost -= cd.s;
        if(cost < 0) {
            pass = false;
        }
        

        if(!pass) {
            cout << "NO" << '\n';
        }
        else {
            cout << cost << '\n';
        }
    }
    
    return 0;
}