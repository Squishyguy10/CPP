#include <bits/stdc++.h>

using namespace std;

void forloop() {
    for(int i = 0; i < 10; i++) {
       cout << i << endl; 
    }

    for(int i = 10; i >= 0; i--) {
        cout << i << endl;
    }
}

void whileloop1() {
    bool t = true;
    int i = 1;

    while(t = true) {

        if(i <= 5) {
            cout << i << endl;
            i++;
        } else {
            t = false;
        }
    }
}

void whileloop2() {
    char c;

    while(cin >> c) {
        if(c == 'n' || c == 'N') {
            break;
        }
    }

}

int main() {
    // forloop();
    // whileloop1();
    whileloop2();

    return 0;
}