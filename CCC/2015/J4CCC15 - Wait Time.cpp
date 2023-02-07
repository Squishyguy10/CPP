#include <bits/stdc++.h>
using namespace std;

int main() {
    int lines; cin >> lines;
    char textsC[lines];
    int textsI[lines]; 
    map<int, int> read;
    map<int, int> replied; 
    int time = 0;

    for(int i = 0; i < lines; i++)
        cin >> textsC[i] >> textsI[i];

    for(int i = 0; i < lines; i++) {
        if(textsC[i] == 'R') {
            read[textsI[i]] = time;
            time++;
        }
        else if(textsC[i] == 'S') {
            if(replied.count(textsI[i]) == 0)
                replied[textsI[i]] = time - read[textsI[i]];
            else
                replied[textsI[i]] += time - read[textsI[i]];
            
            read.erase(textsI[i]);
            time++;
        }
        else if(textsC[i] == 'W')
            time += textsI[i] - 1;
    }

    for(auto i: read)
        replied[i.first] = -1;

    for(auto i: replied)
        cout << i.first << " " << i.second << '\n';
}
