#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int track = 0, L = 0, S = 0, L2 = 0, S2 = 0;
    char swap;
    string books;
    cin >> books;
    vector<char> vect, vect2;

    for(int i = 0; i < books.length(); i++) {
        vect.push_back(books[i]);
        vect2.push_back(books[i]);
        if(vect[i] == 'L') {
            L++;
        } else if(vect[i] == 'S'){
            S++;
        }
    }
    sort(vect2.begin(), vect2.end());
    
    for(int i = books.length() - 1; i >= L; i--) {
        if(vect == vect2) {
            break;
        }
        for(int j = 0; j < L; j++) {
            if(vect[j] == 'L') {
                L2++;
            }
        }
        if(L == L2) {
            break;
        } else {
            L2 = 0;
        }
        if(vect[i] == 'L') {
            for(int j = 0; j < L; j++) {
                if(vect == vect2) {
                    break;
                }
                if(vect[j] != 'L') {
                    swap = vect[j];
                    vect[j] = 'L';
                    vect[i] = swap;
                    track++;
                }
            }
        }
    }

    for(int i = 0; i < books.length() - S; i++) {
        if(vect == vect2) {
            break;
        }
        for(int j = 0; j < S; j++) {
            if(vect[j] == 'S') {
                S2++;
            }
        }
        if(S == S2) {
            break;
        } else {
            S2 = 0;
        }
        if(vect[i] == 'S') {
            for(int j = books.length() - 1; j >= S; j--) {
                if(vect == vect2) {
                    break;
                }
                if(vect[j] != 'S') {
                    swap = vect[j];
                    vect[j] = 'S';
                    vect[i] = swap;
                    track++;
                }
            }
        }
    }
    cout << track << endl;
    
    return 0;
}