#include <bits/stdc++.h>

using namespace std;

string str = "Hello World!";

void access_characters() {
    cout << str << endl;
    cout << str[1] << str[9] << str[4] << str[11] << endl;
    cout << str.length() << endl;
}
void combining_strings() {
    cout << str << endl;
    str += " Bye!";
    cout << str << endl;
    // str -= " Bye!"; Doesn't work
    // string str = "Hello" + "World"; Doesn't work in C++
}
void insert_and_cut_strings() {
    // str.insert(Position, String_to_Insert)
    str = str.insert(5, " Good");
    cout << str << endl;
    // str.substr(Position, Length) --> start from position then go forward by length
    str = str.substr(0, 9);
    cout << str << endl;
}
void replace_strings() {
    // str.replace(Position, Length, String_to_Replace)
    str = str.replace(2, 3, "e");
    cout << str << endl;
    // begin() --> An iterator to the first element
    // end() --> An iterator to the last element
    str = str.replace(str.begin(), str.end()-3, "ba");
    cout << str << endl;
}
void finding_substring_in_string() {
    size_t find1 = str.find("Hello");
    // or
    auto find2 = str.find("Hi");
    // npos(No Position) means "until the end of the string"
    if(find1 == string::npos) {
        cout << "Not found" << endl;
    } else {
        cout << "Found at: " << find1 << endl;
    }
    if(find2 == string::npos) {
        cout << "Not found" << endl;
    } else {
        cout << "Found at: " << find1 << endl;
    }
}

int main() {
    // access_characters();
    // combining_strings();
    // insert_and_cut_strings();
    // replace_strings();
    // finding_substring_in_string();
   
    return 0;
}