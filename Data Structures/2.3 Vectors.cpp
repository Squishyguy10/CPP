#include <bits/stdc++.h>

using namespace std;

    // vector<Datatype> "name" = {};
    vector<int> vect = {1, 2, 3, 4, 5, 6};
    vector<char> v[5];

void access_vectors() {
    for(int i = 0; i < vect.size(); i++) {
        cout << vect[i] << endl;
    }
}
void iterators() {
    // Elements:
    vect.front();
    vect.back();
    // Iterators: Pointers
    vect.begin();
    vect.end();
    // sort(Position1, Position2);
    sort(vect.begin(), vect.end()); // ascending
    sort(vect.begin(), vect.end(), greater<>()); // descending
    sort(vect.begin(), vect.begin() + 4); 
    for(auto item : vect) {
        cout << item << endl;
    }
}
void operations() {
        // Add element to the back
    // vect.push_back(7);
        // Insert element by index, insert "20" to 6th element
    vect.insert(vect.begin()+5, 20);
        // Remove last element
    // vect.pop_back();
        // Remove any element
    // vect.erase(vect.begin()+1);
        // Remove multiple elements
    // vect.erase(vect.begin()+2, vect.begin()+4)

    for(auto item : vect) {
        cout << item << endl;
    }
}
void vector_2d() {
    vector<vector <int>> vect2d {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    for(int i = 0; i < vect2d.size(); i++) {
        for(int j = 0; j < vect2d[i].size(); j++) {
            cout << vect2d[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // access_vectors();
    // iterators();
    operations();
    // vector_2d();

    return 0;
}