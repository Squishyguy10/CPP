#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int together; cin >> together;
    string t1[together], t2[together];
    for(int i = 0; i < together; i++)
        cin >> t1[i] >> t2[i];

    int notTogether; cin >> notTogether;
    string nt1[notTogether], nt2[notTogether];
    for(int i = 0; i < notTogether; i++)
        cin >> nt1[i] >> nt2[i];

    int groupsNum; cin >> groupsNum;
    string groups[groupsNum][3];
    for(int i = 0; i < groupsNum; i++)
        cin >> groups[i][0] >> groups[i][1] >> groups[i][2];

    int violations = 0;
    for(int i = 0; i < together; i++) {
        for(int j = 0; j < groupsNum; j++) {
            if(groups[j][0] == t1[i] || groups[j][1] == t1[i] || groups[j][2] == t1[i]) {
                if(groups[j][0] != t2[i] && groups[j][1] != t2[i] && groups[j][2] != t2[i])
                    violations++;
                break;
            }
        }
    }

    for(int i = 0; i < notTogether; i++) {
        for(int j = 0; j < groupsNum; j++) {
            if(groups[j][0] == nt1[i] || groups[j][1] == nt1[i] || groups[j][2] == nt1[i]) {
                if(groups[j][0] == nt2[i] || groups[j][1] == nt2[i] || groups[j][2] == nt2[i])
                    violations++;
                break;
            }
        }
    }
    cout << violations << '\n';
}