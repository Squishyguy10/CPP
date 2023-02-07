#include <bits/stdc++.h>
 
using namespace std;
// Sets are arrays that contain unique elements that you can organize. They will delete reccuring copies of elements

set<int> set1 = {5, 2, 4, 1, 1, 3};

void insert_access() {
    set1.insert(3); 
    set1.insert(6); 
    cout << set1.size() << endl;

    for(auto i : set1) {
        cout << i << " ";
    }
    cout << endl;

    for(auto i = set1.begin(); i != set1.end(); i++) {
        cout << "Pointer: " << &i << " Value: " << *i << endl;
    }

    // Accessing certain element
    auto it = set1.begin();
    advance(it, 1); // it + 1
    cout << *it << endl;

    // Deleting an element
    set1.erase(1);
}

void unordered() {
    unordered_set<int> set;
}

int main() {
    insert_access();
    
    return 0;
}