#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int r, c;
    cin >> r >> c;
    int arr[c];

    for(int j = 0; j < c; j++)
        cin >> arr[j];

    if(arr[0] == 0)
        arr[0] = 1; 

    int prev = arr[0];
    for(int i = 1; i < c; i++) {
        if(arr[i] == 0)
            arr[i] = prev+1;
        prev = arr[i];
    }

    bool check = true;
    prev = arr[0];
    for(int i = 1; i < c; i++)
        if(prev >= arr[i])
            check = false;

    if(check) {
        for(int i = 0; i < c; i++)
            cout << arr[i] << " ";
        cout << '\n';
    } else 
        cout << -1 << '\n';
}