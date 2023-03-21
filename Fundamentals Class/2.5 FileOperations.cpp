#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ofstream fout("file.out");

    string str = "Hello World!";
    fout << str;

    int x = 1234;
    fout << " x = " << x << endl;
    
    // ofstream fout("path_to_file/file.out");


    ifstream fin("file.in");
    fin >> str;
    cout << str;
    fin >> x;
    cout << x;

    // ifstream cin("path_to_file/file_in");
    // int a, b, c;
    // cin >> a;
    // cin >> b;
    // cin >> c;

    return 0;
}