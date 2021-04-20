#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int input, count = 0;
    string str1, str2;
    cin >> input >> str1 >> str2;
    bitset<100> yesterday;
    bitset<100> today;

    for(int i = 0; i < input; i++) {
        if(str1[i] == 'C') {
            yesterday[i] = 1;
        }
        if(str2[i] == 'C') {
            today[i] = 1;
        }
    }

    today = today & yesterday;
    
    for(int i = 0; i < input; i++) {
        if(today[i] == 1) {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}