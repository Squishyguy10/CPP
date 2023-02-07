#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.sync_with_stdio(0); cin.tie(NULL);

    int together; cin >> together;
    string t1[together], t2[together];
    for(int i = 0; i < together; i++)
        cin >> t1[i] >> t2[i];

    int notTogether; cin >> notTogether;
    string nt1[notTogether], nt2[notTogether];
    for(int i = 0; i < notTogether; i++)
        cin >> nt1[i] >> nt2[i];

    int groupsNum; cin >> groupsNum;
    map<string, int> groups;
    for(int i = 0; i < groupsNum; i++) {
        string name; 
        cin >> name; groups[name] = i;
        cin >> name; groups[name] = i;
        cin >> name; groups[name] = i;
    }

    int violations = 0;
    for(int i = 0; i < together; i++)
        if(groups[t1[i]] != groups[t2[i]])
            violations++;

    for(int i = 0; i < notTogether; i++)
        if(groups[nt1[i]] == groups[nt2[i]])
            violations++;

    cout << violations << '\n';
}