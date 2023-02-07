#include <bits/stdc++.h>
using namespace std;

void hanoi(int disks, char from, char to, char untouched) {
    if(disks == 1) {
        cout << "Move disk 1 from rod-" << from << " to rod-" << to << '\n';
        return;
    }
    hanoi(disks - 1, from, untouched, to);
    cout << "Move disk " << disks << " from rod-" << from << " to rod-" << to << '\n';
    hanoi(disks - 1, untouched, to, from);
}

int main() {
    int disks; cin >> disks;

    hanoi(disks, 'A', 'C', 'B');
} 