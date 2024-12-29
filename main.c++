#include <iostream>
#include <ctime>
using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;

    player = getUserChoice();
    cout << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    cout << "\nComputer's choice: ";
    showChoice(computer);

    chooseWinner(player, computer);
}

char getUserChoice(){
    char player;
    cout << "Rock-Paper-Scissors Game" << endl;

    do{
        cout << "Choose one of the following" << endl;
        cout << "***************************" << endl;
        cout << "'r' for rock" << endl;
        cout << "'p' for paper" << endl;
        cout << "'s' for scissors" << endl;
        cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}

char getComputerChoice(){
    srand(time(0));
    int num = rand() % 3 + 1;

    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }

    return 0;
}

void showChoice(char choice){
    switch(choice){
        case 'r': cout << "Rock";
            break;
        case 'p': cout << "Paper";
            break;
        case 's': cout << "Scissors";
            break;
    }
}

void chooseWinner(char player, char computer){
    switch(player){
        case 'r': if(computer == 'r'){cout << "\nTie";}
            else if(computer == 'p'){cout << "\nYou Lose";}
            else{cout << "\nYou Win";}
            break;

        case 'p': if(computer == 'p'){cout << "\nTie";}
            else if(computer == 's'){cout << "\nYou Lose";}
            else{cout << "\nYou Win";}
            break;

        case 's': if(computer == 's'){cout << "\nTie";}
            else if(computer == 'p'){cout << "\nYou Win";}
            else{cout << "\nYou Lose";}
            break;
    }
}