#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int total = 540;
    int rectNum = 12;
    int rectArea = total / rectNum;
    
    for(int i = 1; i <= rectArea; i++){
        int rectWidth = i;
        int rectLength = i * 5;
        
        if(rectWidth * rectLength == rectArea){
            cout << "The dimensions for a rectangle is " << rectWidth << "x" << rectLength << endl;
        }
    }
    return 0;
}