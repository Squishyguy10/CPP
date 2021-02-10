#include <bits/stdc++.h>

using namespace std;

int main() {
    int start, finish, rotatables = 0;
    string str, flip;

    for(cin >> start >> finish; start <= finish; start++) {
        str = to_string(start);
        size_t find2 = str.find('2');
        size_t find3 = str.find('3');
        size_t find4 = str.find('4');
        size_t find5 = str.find('5');
        size_t find7 = str.find('7');

        if(find2 == string::npos &&
        find3 == string::npos &&
        find4 == string::npos &&
        find5 == string::npos &&
        find7 == string::npos) {
            flip = "";
            for(int i = str.length() - 1; i >= 0; i--) {
                if(str[i] == '6') {
                    flip += '9';
                } else if(str[i] == '9') {
                    flip += '6';
                } else {
                    flip += str[i];
                }
            }
            if(str == flip) {
                rotatables++;
            }
        }
    }
    cout << rotatables << endl;

    return 0;
}