#include <bits/stdc++.h>

using namespace std;

int main() {
    string user_input;

    cout << "Welcome to RockPaperScissors - Rigged edition!" << endl << "The computer will always win!" << endl;
    cout << "Enter 'rock', 'paper' or 'scissors' for your choice (not that it matters)" << endl << "Good luck! :D" << endl << endl;
    while(user_input != "quit") {
        cin >> user_input;

        if(user_input == "rock") {
            cout << "Computer chose paper" << endl << "You Lose" << endl << endl;
        } else if(user_input == "paper") {
            cout << "Computer chose scissors" << endl << "You Lose" << endl << endl;
        } else if(user_input == "scissors") {
            cout << "Computer chose rock" << endl << "You Lose" << endl << endl;
        } else if(user_input == "quit") {
            cout << "Thanks for playing!" << endl << endl;
        } else {
            cout << "Your input was invalid. Please check your spelling and retry." << endl << endl;
        }
    }
    return 0;
}