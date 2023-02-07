#include <bits/stdc++.h>
using namespace std;

int N, M, A, B;

int randomN(int i) {
    for(; i <= N; i++) {
        if(A != i || B != i) {
            return i;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N >> M >> A >> B;
    int arr[N+3][3] = {};
    bool neg = true;
    vector<int> pos;


    for(int i = 0; i < M; i++) {
        cin >> arr[i][0];
        if(arr[i][0] != -1) {
            cin >> arr[i][1];
        } else {
            pos.push_back(i);
            neg = false;
        }

        if(neg) {
            if(A == arr[i][0]) {
                A = arr[i][1];
            } else if(A == arr[i][1]) {
                A = arr[i][0];
            }
        }
        
    }

    for(int i = M-1; i > 0; i--) {
        if(arr[i][0] == -1) {
            break;
        }

        if(B == arr[i][0]) {
            B = arr[i][1];
        } else if(B == arr[i][1]) {
            B = arr[i][0];
        } 
    }

    while(!pos.empty()) {
        if(A == B) {
            arr[pos.front()][0] = randomN(1);
            arr[pos.front()][1] = randomN(arr[pos.front()][0]+1);

        } else {
            arr[pos.front()][0] = A;
            arr[pos.front()][1] = B;
        }

        if(pos.size() > 1) {
            for(int i = pos.front()+1; i < M; i++) {
                if(arr[i][0] != -1) {
                    if(A == arr[i][0]) {
                        A = arr[i][1];
                    } else if(A == arr[i][1]) {
                        A = arr[i][0];
                    }
                } else {
                    break;
                }
                
            }
        }

        pos.erase(pos.begin());
    }


    for(int i = 0; i < M; i++) {
        cout << arr[i][0] << " " << arr[i][1] << '\n';
    }

    return 0;
}