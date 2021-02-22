#include <bits/stdc++.h>
 
using namespace std;

string shifts(string str1, string str2) {
    int count1[128], count2[128];
    int test = 0;
    memset(count1, 0, sizeof(count1));
    memset(count2, 0, sizeof(count2));
    
    for(int i = 0; i < str2.length(); i++) {
        count1[str2[i]]++;
    }

    for(int i = 0; i <= str1.length() - str2.length(); i++) {
        for(int j = i; j < str2.length() + i; j++) {
            count2[str1[j]]++;
        }

        for(int j = 0; j < sizeof(count1)/sizeof(count1[0]); j++) {
            if(count1[j] != count2[j]) {
                break;
            } else {
                test++;
            }
        }

        if(test != sizeof(count1)/sizeof(count1[0])) {
            memset(count2, 0, sizeof(count2));
            test = 0;
        } else {
            return "yes";
        }
    }
    return "no";
}

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    cout << shifts(str1, str2) << endl;

    return 0;
}