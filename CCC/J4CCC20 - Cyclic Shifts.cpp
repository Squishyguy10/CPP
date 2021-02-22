#include <bits/stdc++.h>

using namespace std;

string shifts(string str1, string str2) {
    vector<char> vect;
    string str;
    char move;

    for(int i = 0; i < str2.length(); i++) {
        vect.push_back(str2[i]);
    }
    for(int i = 0; i < str2.length(); i++) {
        move = vect.front();
        vect.erase(vect.begin());
        vect.push_back(move);

        for(int j = 0; j < str2.length(); j++) {
            str += vect[j];
        }
        auto find = str1.find(str);
        if(find != string::npos) {
            return "yes";
        }
        str = "";
    }
    return "no";
}

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    cout << shifts(str1, str2) << endl;
    
    return 0;
}