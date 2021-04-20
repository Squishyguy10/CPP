#include <bits/stdc++.h>

using namespace std;

vector<char> operators;
queue<int> numbers;
string input;
int test1 = 0, test2 = 0, test3 = 0, test4 = 0;

void inputting() {
    for(int i = 0; i < input.length(); i+= 2) { 
        if(input[i] == '-' || input[i] == '+') {
            operators.push_back(input[i]);
            test1--;
            test3++;
            test4 = max(test3, test4);
        } else {
            numbers.push(input[i]);
            test1++;
            test2++;
            test3 = 0;
        }
    }
}


int main() {
    

    while(getline(cin, input)) {
        if(input == "0") {
            break;
        }

        inputting();

        for(int i = 0; i < input.length(); i++) {
            if(test4 == 1) {
                cout << 
            }
        }


    }
    
    return 0;
}