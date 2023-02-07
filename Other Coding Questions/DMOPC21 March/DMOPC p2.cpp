#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int length, lines;
    cin >> length >> lines;

    vector<int> vect;
    for(int i = 0; i < length; i++) 
        vect.push_back(i+1);

    while(lines--) {
        int l, r, k;
        cin >> l >> r >> k;

        int temp;
        for(int i = 0; i < length; i++) {
            if(vect[i] == l) {
                temp = i;
                break;
            }
        }

        int temp2;
        vector<int> swap;
        for(int i = temp; i < length; i++) {
            swap.push_back(vect[i]);
            if(vect[i] == r) {
                temp2 = i+1;
                break;
            }
        }

        if(k <= temp) {
            vect.erase(vect.begin() + temp, vect.begin() + temp2);
            vect.insert(vect.begin() + k, swap.begin(), swap.end());
        } else {
            vect.insert(vect.begin() + k, swap.begin(), swap.end());
            vect.erase(vect.begin() + temp, vect.begin() + temp2);
        }
    }

    for(int i = 0; i < length; i++)
        cout << vect[i] << " ";
    cout << '\n';
}