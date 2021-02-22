#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int L = 0, M = 0, S = 0, L1 = 0, M1 = 0, S1 = 0, L2 = 0, M2 = 0, S2 = 0, L3, M3, result, swaps = 0;
    string input;
    cin >> input;

    for(int i = 0; i < input.length(); i++) {
        if(input[i] == 'L') {
            L++;
        } else if(input[i] == 'M') {
            M++;
        } else if(input[i] == 'S') {
            S++;
        }
    }
    for(int i = 0; i < L; i++) {
        if(input[i] == 'L') {
            L1++;
        } else if(input[i] == 'M') {
            M1++;
        } else if(input[i] == 'S') {
            S1++;
        }
    }
    for(int i = L; i < L + M; i++) {
        if(input[i] == 'L') {
            L2++;
        } else if(input[i] == 'M') {
            M2++;
        } else if(input[i] == 'S') {
            S2++;
        }
    }
    L3 = L - (L1 + L2);
    M3 = M - (M1 + M2);

    result = min(M1, L2);
    M1 -= result;
    L2 -= result;
    swaps += result;

    result = min(S1, L3);
    S1 -= result;
    L3 -= result;
    swaps += result;

    result = min(S2, M3);
    S2 -= result;
    M3 -= result;
    swaps += result;

    swaps = swaps + (S1 + M1) * 2;
    cout << swaps << endl;
    
    return 0;
}