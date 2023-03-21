#include <bits/stdc++.h>

using namespace std;

int board_size = 3;
char pieces[3][3] = {
        {' ', ' ', 'x'},
        {' ', 'x', ' '},
        {' ', ' ', ' '}
    };



bool checkWinner() {
    for(int row = 0; row < board_size; row++) {
        if(pieces[row][0] != ' ') {
            bool check = true;

            for(int col = 0; col < board_size - 1; col++) {
                if(pieces[row][col] != pieces[row][col+1]) {
                    check = false;
                    break;
                }
            }

            if(check == true) {
                cout << pieces[row][0] << " is the winner!" << endl;
                return true;
            }
        }        
    }

    for(int col = 0; col < board_size; col++) {
        if(pieces[0][col] != ' ') {
            bool check = true;

            for(int row = 0; row < board_size - 1; row++) {
                if(pieces[row][col] != pieces[row+1][col]) {
                    check = false;
                    break;
                }
            }

            if(check == true) {
                cout << pieces[0][col] << " is the winner!" << endl;
                return true;
            }
        }        
    }

    for(int i = 0; i < board_size - 1; i++) {
        if(pieces[0][0] != ' ') {
            bool check = true;

            if(pieces[i][i] != pieces[i+1][i+1]) {
                check = false;
                break;
            }

            if(check == true) {
                cout << pieces[0][0] << " is the winner!" << endl;
                return true;
            }
        }
    }

    for(int i = 0; i < board_size - 1; i++) {
        if(pieces[board_size-1][0] != ' ') {
            bool check = true;

            if(pieces[board_size-i][i] != pieces[board_size-i-1][i+1]) {
                check = false;
                break;
            }

            if(check == true) {
                cout << pieces[board_size-1][0] << " is the winner!" << endl;
                return true;
            }
        }
    }

    return false;
}

string getGameOverMsg() {

}


void update() {

}

void draw() {
    cout << pieces[0][0] << " | " << pieces[0][1] << " | " << pieces[0][2] << endl;
    cout << "- - - - -" << endl;
    cout << pieces[1][0] << " | " << pieces[1][1] << " | " << pieces[1][2] << endl;
    cout << "- - - - -" << endl;
    cout << pieces[2][0] << " | " << pieces[2][1] << " | " << pieces[2][2] << endl;

    return;
}

void advancedDraw() {
    for(int row = 0; row < board_size; row++) {

        for(int col = 0; col < board_size; col++) {
            cout << pieces[row][col];

            if(col < board_size - 1) {
                cout << " | ";
            }   
        }
        cout << endl;

        if(row < board_size - 1) {
            for(int line = 0; line < (board_size * 2) - 1; line++) {
                cout << "- ";
            }

            cout << endl;
        } 
    }

    return;
}


int main() {

    // draw();
    //advancedDraw();
    checkWinner();
        

    return 0;
}