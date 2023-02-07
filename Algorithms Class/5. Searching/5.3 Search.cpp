#include <bits/stdc++.h>
 
using namespace std;

void search_array() {
    int array[10] = {1, 7, 2, 72, 11, 57, 98, 6, 5, 100};
    int target = 57;
    auto itr = find(array, array+10, target);  // (start element, end element, target)

    if(itr != end(array)) {
        cout << distance(array, itr) << endl;  // (array_name, find_variable)
        cout << "Found target" << endl;
    }
}

void search_vector() {
    vector <int> vect = {1, 4, 75, 11, 34, 7, 5};
    int target = 11;
    
    auto itr = find(vect.begin(), vect.end(), target);

    if(itr != vect.end()) {
        cout << "Index: " << itr-vect.begin() << endl; //*itr: * is the pointer, shows actual value
    } else {
        cout << "Not found" << endl;
    }

}

void search_char() {
    // string::npos is the end position. It means "until the end of the string"
    string str = "Hello world!";
    auto itr = str.find('e');

    if(itr != string::npos) {
        cout << "Found 'e' at index: " << itr << endl; 
    }
    else {
        cout << "Not found" << endl;
    }
}

void search_substring () {
    string str = "Hello world!";
    auto itr = str.find("world");

    if(itr != string::npos) {
        cout << "Index of world: " << itr << endl;
    }
    else {
        cout << "Not found" << endl;
    }
}

int main() {
    // search_array();
    // search_vector();
    search_char();
    // search_substring();

    return 0;
}