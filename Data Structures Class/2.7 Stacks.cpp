#include <bits/stdc++.h>
 
using namespace std;

// Last In, First Out

void operations() {
    stack<int> stk;

    for(int i = 1; i < 6; i++) { // bottom to top
        stk.push(i);
    }
    cout << stk.size() << endl;
    cout << stk.top() << endl;
    stk.pop();
    cout << stk.top() << endl;
    
    cout << endl;

    while(!stk.empty()) { // top to bottom
        cout << stk.top() << endl;
        stk.pop();
    }

    int size = stk.size();
    for(int i = 0; i < size; i++) {
        cout << stk.top() << endl;
        stk.pop();
    }
}



int main() {
    operations();
    
    return 0;
}