#include <bits/stdc++.h> 
using namespace std;
    
#define int long long
#define f first
#define s second
#define pii pair<int, int>
#define pb push_back
    
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unordered_map<string, int> weeks = {
        {"Sunday,", 0},
        {"Monday,", 1},
        {"Tuesday,", 2},
        {"Wednesday,", 3},
        {"Thursday,", 4},
        {"Friday,", 5},
        {"Saturday,", 6}
    };

    unordered_map<string, int> months = {
        {"January", 1},
        {"February", 2},
        {"March", 3},
        {"April", 4},
        {"May", 5},
        {"June", 6},
        {"July", 7},
        {"August", 8},
        {"September", 9},
        {"October", 10},
        {"November", 11},
        {"December", 12}
    };
    string a, b, c, d;
    int day1, year1, day2, year2;
    char filler;

    cin >> a >> b >> day1 >> filler >> year1;
    cin >> c >> d >> day2 >> filler >> year2;

    int weekday1 = weeks[a];
    int month1 = months[b];
    int weekday2 = weeks[c];
    int month2 = months[d];
    
    int outp = 0;

    if(weekday1 != 5) {
        while(weekday1 != 5) {
            weekday1++;
            day1++;
            weekday1 %= 7;
        }
    }
    if(day1 == 13) {
        outp++;
    }

    
    while(true) {
        if(year2 < year1) {
            break;
        }
        if(year2 == year1 && month2 < month1) {
            break;
        }
        if(year2 == year1 && month2 == month1 && day2 < day1) {
            break;
        }
        
        day1 += 7;
        if(day1 == 13) {
            outp++;
        }

        if((month1 == 1 || month1 == 3 || month1 == 5 || month1 == 7 || month1 == 8 || month1 == 10 || month1 == 12) && day1 > 31) {
            day1 %= 31;
            month1++;
            if(month1 > 12) {
                year1++;
                month1 %= 12;
            }
        }
        else if((month1 == 4 || month1 == 6 || month1 == 9 || month1 == 11) && day1 > 30) {
            day1 %= 30;
            month1++;
        }
        else if(month1 == 2) {
            if(year1 % 400 == 0 && day1 > 29) {
                day1 %= 29;
                month1++;
            }
            else if(year1 % 4 == 0 && year1 % 100 != 0 && day1 > 29) {
                day1 %= 29;
                month1++;
            }
            else if(day1 > 28) {
                day1 %= 28;
                month1++;
            }
        }
    }

    cout << outp << '\n';
    
    return 0;
}