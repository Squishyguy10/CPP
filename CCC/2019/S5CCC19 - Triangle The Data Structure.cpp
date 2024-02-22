#include <bits/stdc++.h> 
using namespace std;
        
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;
    cin >> n >> k;

    vector<vector<int>> triangle;
    for(int i = 1; i <= n; i++) {
        vector<int> temp;
        for(int j = 0; j < i; j++) {
            int a; cin >> a;
            temp.push_back(a);
        }
        triangle.push_back(temp);
    }

    int sum = 0;
    for(int i = 0; i < n-k+1; i++) {
        for(int j = 0; j < triangle[i].size(); j++) {
            int most = 0;
            for(int a = i; a < k+i; a++) {
                for(int b = j; b < j+a-i+1; b++) {
                    most = max(triangle[a][b], most);
                }
            }
            sum += most;
        }
    }
    cout << sum << '\n';
    
    return 0;
}