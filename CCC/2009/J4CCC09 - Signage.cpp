#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int m; cin >> m;
    string str[6] = {"WELCOME", "TO", "CCC", "GOOD", "LUCK", "TODAY"};
    string s = "WELCOME TO CCC GOOD LUCK TODAY";
    string ns = "";
    int leng = s.size();
    int loop = 0;

    for(int i = 0; i < leng; i++) {
        if(i+1 % m == 0) {
            
            ns += '\n';
        }
        ns += s[i];
    }

    cout << ns << '\n';

        loop++;

    

    if(m < 10) {

    }


}