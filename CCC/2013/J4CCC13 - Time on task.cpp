#include <bits/stdc++.h>
 
using namespace std;

int main() {
    vector<int> chores;
    int time = 0, output = 0;
    int minutes, number, choreTime;
    cin >> minutes >> number;
    
    for(int i = 0; i < number; i++) {
        cin >> choreTime;
        chores.push_back(choreTime);
    }

    sort(chores.begin(), chores.end());

    while(minutes >= time+chores.front()) {
        time+= chores.front();
        chores.erase(chores.begin());
        output++;
    }
    cout << output << endl;

    return 0;
}