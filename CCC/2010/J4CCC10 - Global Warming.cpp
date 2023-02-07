#include <bits/stdc++.h>
using namespace std;

int numbers, temp1, temp2;
vector<int> diff;

bool check(int cycles) {
    for(int index = 0; index+cycles < numbers-1; index++)
        if(diff[index] != diff[index+cycles])
            return false;
    return true;
}

int main() {
    while(cin >> numbers) {
        if(numbers == 0)
            break;
        else if(numbers == 1) {
            cin >> temp1;
            cout << 0 << endl;
        } else {
            cin >> temp1;

            for(int i = 1; i < numbers; i++) {
                cin >> temp2;
                diff.push_back(temp2 - temp1);
                temp1 = temp2;
            }
            for(int cycles = 1; cycles < numbers; cycles++) {
                if(check(cycles) == true) {
                    cout << cycles << '\n';
                    break;
                }
            }
            diff.clear();
        }
    }
}