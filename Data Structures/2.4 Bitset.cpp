#include <bits/stdc++.h>

using namespace std;

    // bitset is a binary array (stores bits)
    // bitset arrays go from right to left
    
int main() {
    bitset <8> bits(0); // or bitset <8> bits("00000000");
    // bits.set(Index, Number Value)
    bits.set(0, 1); // 0000 0000 --> // 1000 0000
    bits.set(5, 1); // 0000 0000 --> // 1000 0000
    bits.reset(0); // 0000 0000 --> // 1000 0000
    cout << bits << endl;
    
    int x = 75;
    cout << bitset<10>(x) << endl;

    return 0;
}