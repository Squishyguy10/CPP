#include <bits/stdc++.h>
 
using namespace std;

// int current_year, end_year;

// void my_function() {
//     for(current_year; current_year <= end_year; current_year+= 60) {
//         cout << "All positions change in year " << current_year << endl;
//     }
// }

int main() {
    int current_year, end_year;
    cin >> current_year >> end_year;
    for(current_year; current_year <= end_year; current_year+= 60) {
        cout << "All positions change in year " << current_year << endl;
    }
    // my_function();

    return 0;
}