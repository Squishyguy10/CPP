#include <bits/stdc++.h>
 
using namespace std;

void declare_and_access() {
    queue<int> q;

    for(int i = 0; i < 5; i++) {
        q.push(i);
    }

    cout << q.size() << endl;
    cout << q.front() << endl;
    cout << q.back() << endl;

    q.pop();
    q.push(6);

    while(!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }
}

void priority() {
    priority_queue<int> pq;     // From descending order --> Greatest to least
    
    pq.push(3);
    pq.push(7);
    pq.push(5);

    while(!pq.empty()) {
        cout << pq.top() << endl;
        pq.pop();
    }

    // For Ascending Order
    priority_queue<char, vector<char>, greater<char>> char_queue;
    priority_queue<int, vector<int>, greater<int>> int_queue;
}


int main() {
    // declare_and_access();
    priority();
    
    return 0;
}