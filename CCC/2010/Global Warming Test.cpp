#include <bits/stdc++.h>

using namespace std;

void test1() {
    int array[7] = {3, 4, 6, 4, 5, 7, 5};
    vector<int> seq;

    for(int i = 0; i < 6; i++) {
        seq.push_back(array[i+1] - array[i]);
    }

    for(int i = 0; i < 6; i++) {
        cout << seq[i] << endl;
    }
}

void test2() {
    vector<int> diff;
    int length, input1, input2;

    cin >> length >> input1;
    for(int i = 0; i < length-1; i++) {
        cin >> input2;
        diff.push_back(input2 - input1);
        input1 = input2; 
    }

    for(int i = 0; i < length-1; i++) {
        cout << diff[i] << endl;
    }
}

int main() {

    test1();
    test2();

    return 0;
}