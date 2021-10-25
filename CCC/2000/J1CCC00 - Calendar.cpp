#include <bits/stdc++.h>
 
using namespace std;

int main() {
    int start, end, date = 0;
    cin >> start >> end;
    end = ceil(end/7);

    cout << "Sun Mon Tue Wed Thr Fri Sat" << endl;

    for(int i = 0; i < end; i++) {
        for(int j = 0; j < 7; j++) {
            date++;

            if(j > 0) {
                if(date > 9) {
                    cout << "  ";
                } else {
                    cout << "   ";
                }
            }
            else if(i == 0) {
                j+= start;

                for(int k = 0; k < j; k++) {
                    cout << "   ";
                }
                cout << "   ";
            }
            else if(j == 0){
                if(date > 9) {
                    cout << " ";
                } else {
                    cout << "  ";
                }
            }

            cout << date;
        }
        cout << endl;
    }

    return 0;
}