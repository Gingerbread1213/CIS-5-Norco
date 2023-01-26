// Begin File for Coin Flip Game, Random Heads or Tails Betting Game

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

char getDecision();
char getGuess();
char flipCoin();
void winOrLose(char g, char c, float & b);



int main()
{
    float bank = 15.00;
    char decision, guess, coin;
    
    srand(time(0));
    
   // display the 3 lines of messages to user (or create another function for these cout statements)
    cout << "Welcome to the Coin Flip Game" << endl;
    cout << "Your bank balance starts at $15" << endl;
    cout << "It costs $1.00 to play" << endl;
    
    // call get decision
    decision = getDecision();
    
    // use a while loop and continue while the decision is y and the bank balance is >0
    while( decision == 'y' && bank > 0){
        
        guess = getGuess();
        coin = flipCoin();
        winOrLose(guess, coin, bank);
        getDecision();
    }
    // the body of the while loop consist of 4 function calls....
        // call getGuess
        // call flipCoin
        // call winOrLose
        // call getDecision
    
    // after the while loop, display the thank you message with the bank balance
    
    cout << "sorry you have no more money" <<endl;
    return 0;
}

char getDecision()
{
    char input;
    cout << "would you like to play? (y/n)" << endl;
    cin >> input;
    // the purpose of this function is to ask if the player wishes to play again
    // and return a y or n
    return input;
}

char getGuess()
{
    
    // the purpose of getGuess is to prompt the user to input h or t
    // and return the result
    char input;
    cout << "Guess Head or tail? (h/t)" << endl;
    cin >> input;
    // the purpose of this function is to ask if the player wishes to play again
    // and return a y or n
    return input;
    
}

char flipCoin()
{
    int random;
    
    random = (rand()%2) + 1;
    cout << random;
    if (random == 1){
        cout << "the coin landed on heads" << endl;
        return 'h';
    }
    else if (random == 2){
        cout << "the coin landed on tails" << endl;
        return 't';
    }
    
    // the purpose of flipCoin is to generate a random number 1 or 2
    // if it's 1, display "the coin landed on heads" and return h
    // if its a 2, display "the coin landed on tails" and return t
    return true;
}

void winOrLose(char guess, char coin, float & bank)
{
    if (guess == coin){
        bank = bank + 1;
        cout << "YOU WIN 1$" << endl;
        cout << "Your current bank balance: " << bank << endl;
    }
    else {
        bank = bank - 1;
        cout << "Sorry you lost 1$" << endl;
        cout << "Your current bank balance: " << bank << endl;
    }
    // the purpose of this function is to determine if the player wins or loses
    // and adjust the bank accordingly
    
    
}
