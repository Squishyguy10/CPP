#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pii pair<int, int>
#define psi pair<string, int>
#define pis pair<int, string>
#define pss pair<string, string>
#define pb push_back

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[11][3] = {};

    for(int i = 0; i < 43; i++) {
        int n;
        string str;
        cin >> n >> str;

        int itr;
        if(str=="Never" || str=="1-2") itr=0;
        else if(str=="3-4") itr=1;
        else itr=2;

        arr[n][itr]++;
    }

    for(int i = 4; i <= 10; i++) {
        cout << i << ": ";
        for(int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}