#include <bits/stdc++.h>

using namespace std;

void my_function(int current) { 
    if(current > 0){
        cout << current << endl;
        my_function(current - 1);
        my_function(current - 2);
    }
}

int main() {
    my_function(3);
    return 0;
}

// int current_year, end_year;

// int my_function() {     // Terms of Office without loop
//     if(current_year <= end_year){
//         cout << current_year << endl;
//         current_year+= 60;
//         my_function();
//     }
// }

// int main() {
//     cin >> current_year >> end_year;  
//     my_function();
//     return 0;
// }