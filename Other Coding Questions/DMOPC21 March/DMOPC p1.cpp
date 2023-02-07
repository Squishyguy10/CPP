#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int r, c;
    cin >> r >> c;
    long long int arr[r][c];
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> arr[i][j];

    if(arr[0][0] == 0)
        arr[0][0] == 1; 
    long long int prev = arr[0][0];
    for(int i = 0; i < r; i++) {
        if(i > 0)
            prev = arr[i-1][0];

        for(int j = 0; j < c; j++) {
            if(arr[i][j] == 0)
                arr[i][j] = prev+1;
            
            if(i > 0) 
                prev = max(arr[i][j], arr[i-1][j+1]);
            else
                prev = arr[i][j];
        }
    }

    bool check = true;
    prev = arr[0][0];
    for(int i = 0; i < r; i++) {
        if(i > 0)
            prev = arr[i-1][0];
            
        for(int j = 0; j < c; j++) {
            if(i > 0) {
                if(prev >= arr[i][j] || prev >= arr[i-1][j+1]) {
                    check = false;
                    break;
                }
                prev = max(arr[i][j], arr[i-1][j+1]);
            } 
            else {
                if(prev >= arr[i][j]) {
                    check = false;
                    break;
                }
                prev = arr[i][j];
            }
        }
    }

    if(!check) {
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++)
                cout << arr[i][j] << " ";
            cout << '\n';
        }
    } else 
        cout << -1 << '\n';
}