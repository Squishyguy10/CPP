#include <bits/stdc++.h>

using namespace std;
 
int main() {
    cout << "Hello \nWorld" << endl; 
    //  \r\n is used in Windows 
    //  \n is used in MacOS and Linux, both add a new line
    //  endl is \n or \r\n based on the OS

    // ASCII
    char my_char = '1';
    cout << int(my_char) << endl;

    char char_1 = 97, char_2 = 98, char_3 = 99;
    cout << char_1 << " " << char_2 << " " << char_3 << endl;

    int char_num = 109;
    cout << char(char_num) << endl;

    // Unicode
    string str = "你好！";
    cout << str << endl;

    // String instead of Char
    string chinese_str = "你";
    cout << chinese_str << endl;

    // Is it displayed correctly?
    char chinese = '好';
    cout << chinese << endl;
    return 0;
}