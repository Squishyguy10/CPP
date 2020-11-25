#include <bits/stdc++.h>

using namespace std;

int main() {
    string user_input;
    cout << "Welcome to RockPaperScissors!" << endl << "The computer will randomly pick rock, paper or scissors" << endl;
    cout << "Enter 'rock', 'paper' or 'scissors' for your choice" << endl << "Have fun!" << endl << endl;
    
    while(cin >> user_input) {
        if(user_input == "quit") {
            cout << "Thanks for playing!" << endl << endl;
            break;
        }

        srand(time(0));
        int computer_input = (rand() % 3) + 1;   // Computer's choice --> 1=rock; 2=paper; 3=scissors

        if(user_input == "rock") {
            if(computer_input == 1) {
                cout << "Computer chose rock" << endl << "You Tie" << endl << endl;
            } else if(computer_input == 2) {
                cout << "Computer chose paper" << endl << "You Lose" << endl << endl;
            } else {
                cout << "Computer chose scissors" << endl << "You Win" << endl << endl;
            }
        } else if(user_input == "paper") {
            if(computer_input == 1) {
                cout << "Computer chose rock" << endl << "You Win" << endl << endl;
            } else if(computer_input == 2) {
                cout << "Computer chose paper" << endl << "You Tie" << endl << endl;
            } else {
                cout << "Computer chose scissors" << endl << "You Lose" << endl << endl;
            }
        } else if(user_input == "scissors") {
            if(computer_input == 1) {
                cout << "Computer chose rock" << endl << "You Lose" << endl << endl;
            } else if(computer_input == 2) {
                cout << "Computer chose paper" << endl << "You Win" << endl << endl;
            } else {
                cout << "Computer chose scissors" << endl << "You Tie" << endl << endl; 
            }
        } else {
            cout << "Your input was invalid. Please check your spelling and retry." << endl << endl;
        }
    }
    return 0;
}