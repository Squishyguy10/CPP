#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int length, lines;
    cin >> length >> lines;

    unordered_set<int> scarf;
    for(int i = 0; i < length; i++) 
        scarf.insert(i);

    while(lines--) {
        int l, r, k;
        cin >> l >> r >> k;

        int indexL = 1;
        for (auto i : scarf)
            if (i == l)
                break;
            indexL++;

        int indexR = 1;
        for (auto i : scarf) {}
            if (i == r)
                break;
            indexR++;

        vector<int> temp;
        for()
        scarf()
        scarf.insert(scarf.begin() + );
    }
}