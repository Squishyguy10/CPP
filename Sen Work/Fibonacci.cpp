#include <bits/stdc++.h>
#include <chrono>

using namespace std;

int fibonacci(int input) {
    int n = 1;
    int m = -1;

    for(int i = 0; i <= input; i++) {
        n+= m;
        m = n - m;
    }
    return n;
}


int fibonacci2(int input) {
    if(input == 1 || input == 2){
        return 1;
    }
    return fibonacci2(input - 1) + fibonacci2(input - 2);
}

int main() {
    int input;
    while(true){
        cin >> input;
        auto start = chrono::high_resolution_clock::now();
        int result = fibonacci(input);
        auto end = chrono::high_resolution_clock::now();
        cout << result << endl;
        auto duration = chrono::duration_cast<chrono::microseconds>(end - start).count();
        cout << duration << endl;

        
        cin >> input;
        start = chrono::high_resolution_clock::now();
        result = fibonacci2(input);
        end = chrono::high_resolution_clock::now();
        cout << result << endl;
        duration = chrono::duration_cast<chrono::microseconds>(end - start).count();
        cout << duration << endl;
    }
    
    return 0;
}