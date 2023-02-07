#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int weight, cars;
    cin >> weight >> cars;
    int arr[cars];
    int psa[cars];
    int outp = 0;

    cin >> arr[0];
    psa[0] = arr[0];
    for(int i = 1; i < cars; i++) {
        cin >> arr[i];
        psa[i] = arr[i] + psa[i-1];
    }

    for(int i = 0; i < 4; i++) {
        if(psa[i] > weight) {
            cout << outp << '\n';
            return 0;
        }
        outp++;
    }

    for(int i = 4; i < cars; i++) {
        if(psa[i] - psa[i-4] > weight) {
            cout << outp << '\n';
            return 0;
        }
        outp++;
    }
    cout << outp << '\n';
    
    return 0;
}