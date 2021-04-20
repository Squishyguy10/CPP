#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int k, m, n, input2, count = 0;
    cin >> m >> n >> k;
    char canvas[m][n];
    char input1;
    memset(canvas, 'B', sizeof(canvas));

    for(int i = 0; i < k; i++) {
        cin >> input1 >> input2;
        input2--;
        if(input1 == 'R') {
            for(int j = 0; j < m; j++) {
                if(canvas[input2][j] == 'B') {
                    canvas[input2][j] = 'G';
                } else if(canvas[input2][j] == 'G') {
                    canvas[input2][j] = 'B';
                }
            }
        } else if(input1 == 'C') {
            for(int j = 0; j < n; j++) {
                if(canvas[j][input2] == 'B') {
                    canvas[j][input2] = 'G';
                } else if(canvas[j][input2] == 'G') {
                    canvas[j][input2] = 'B';
                }
            }
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(canvas[i][j] == 'G') {
                count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}