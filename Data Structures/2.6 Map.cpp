#include <bits/stdc++.h>
 
using namespace std;

map <string, int> my_map = {    // Organizes data automatically
    {"Apples", 5},
    {"Oranges", 3},
    {"Grapes", 8}
};

void access_map() {
    cout << my_map["Apples"] << endl;
    
    for(auto i : my_map) {
        cout << i.first << " " << i.second << endl;
    }
}

void operations() {
// Add (If the key doesn't exist) or
// Update (If the key exists)
    my_map["Bananas"] = 8;
    my_map["Apples"] = 10;

// Delete  
    my_map.erase("Oranges");

    for(auto i : my_map) {
        cout << i.first << " " << i.second << endl;
    }
}

void find_key() {
    if(my_map.count("Apples") > 0) {
        cout << "Apples Exists" << endl;
    } else {
        cout << "Apples Doesn't Exists" << endl;
    }

    if(my_map.count("Cherries") > 0) {
        cout << "Cherries Exists" << endl;
    } else {
        cout << "Cherries Doesn't Exists" << endl;
    }
}

void my_unordered_map() {
    unordered_map <char, int> my_map = {
        {'B', 5},
        {'C', 3},
        {'A', 8}
    };
    
    for(auto i : my_map) {
        cout << i.first << " " << i.second << endl;
    }
}


int main() {
    // access_map();
    // operations();
    // find_key();
    // my_unordered_map();
    
    return 0;
}