#include <bits/stdc++.h>

using namespace std;

    // bitset is a binary array (stores bits)
    // bitset arrays go from right to left
    bitset <8> bits(0); // or bitset <8> bits("00000000");
    int x = 63;

void set_and_reset() {
    // bits.set(Index, Number Value)
    bits.set(0, 1); // 0000 0000 --> // 0000 0001
    bits.set(5, 1); // 0000 0001 --> // 0010 0001
    bits.reset(0); // 0010 0001 --> // 0010 0000
    cout << bits << endl;
}
    
void output_bitset() {
    cout << bitset<10>(x) << endl;

    string str = bitset<8>(x).to_string();
    cout << str << endl;
    cout << str[2] << endl;
}   

void access_bitset() {
    cout << bitset<8>(x)[3] << endl;

    // High Bit --> 1111 1111 <-- Low Bit
    for(int i = 7; i >= 0; i--) {
        cout << bitset<8>(x)[i];
    }

    // bits.test(3);
    // if(bits[3] == 1) {
    //     cout << bits << endl;
    // }
}

void operators() {
    // These check by one char, not entire string
    // & = AND (Chooses lower)
    // | = OR (Chooses higher)
    // << = SHIFT TO LEFT
    // >> = SHIFT TO RIGHT

    bitset <16> bit1("1010010101001010");
    bitset <16> bit2("1010101010010110");

    cout << (bit1 & bit2) << endl;
    cout << (bit1 | bit2) << endl;
}
int main() {

    // set_and_reset();
    // output_bitset();
    // access_bitset();
    operators();

    return 0;
}