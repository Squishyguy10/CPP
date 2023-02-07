#include <bits/stdc++.h>
using namespace std;

string check(string str1, string str2) {
    int strSize = min(str1.size(), str2.size());

    bool s1 = true;
    for(int i = 0; i < strSize; i++) {
        if(str1[i] > str2[i]) {
            s1 = false;
        }
        else {
            s1 = true;
        }
    }

    if(s1)
        return str1;
    else
        return str2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m; cin >> n >> m;
    string arr[n];
    vector<string> newArr;

    for(int i = 0; i < n; i++) 
        cin >> arr[i];

    for(int i = 0; i < n-1; i++) {
        newArr.push_back(check(arr[i], arr[i+1]));
    }


    // bool check = true;
    // for(int i = 0; i < n-1; i++) {
    //     string a = newArr[i];
    //     string b = newArr[i+1];
    //     int a1 = stoi(a);
    //     int b1 = stoi(b);
    //     if(a1+b1 < m)
    //         check = false;
    // }
        

    // if(check) {
        for(int i = 0; i < newArr.size(); i++)
            cout << newArr[i] << " ";
        cout << '\n';
    // }
    // else
    //     cout << -1 << '\n';
}