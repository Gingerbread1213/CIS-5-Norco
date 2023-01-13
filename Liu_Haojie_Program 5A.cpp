// Haojie Liu

// CIS-5 Online

// March 21

// Program 5A: Math Tutor with Switch


#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    
    int choice;
    int numTop, numBot, answer, stuAnswer, max, min;
    string name;
    
    cout << "Welcome to the Math Tutor!, Please enter your name here:" <<endl;
    getline(cin, name);
    cout << "Hello! " << name << "Please choose one of the follwing option to begin your practice! \n";
    cout << "1. Addition \n" << "2. Subtraction \n" << "3. Multiplication \n" << "4. Division \n" << "5. Quit" << endl;
    cin >> choice;
    
    switch (choice) {
        case 1:
            max = 999;
            min = 100;
            numTop = (rand()%(max-min+1)) + min;
            max = 99;
            min = 10;
            numBot = (rand() % (max-min+1)) + min;
            answer = numTop + numBot;
            cout << "Enter your Answer please" << endl;
            cout << setw(5)<<numTop << "\n";
            cout << "+  " << numBot << "\n";
            cout << "________" << endl;
            cin >> stuAnswer;
            
            if (stuAnswer == answer){
                cout << "Congradulation! you got this correct!" << endl;
            }
            else {
                cout << "Sorry," << name << ",this is not the corret anwser" << " The correct answer is:" << answer << endl;
            }
            break;
            
        case 2:
            max = 99;
            min = 10;
            numTop = (rand() % (max-min+1)) + min;
            max = 9;
            min = 1;
            numBot = (rand() % (max-min+1)) + min;
            answer = numTop - numBot;
            cout << "Enter your Answer please" << endl;
            cout << setw(5) << numTop << "\n";
            cout << "-" << setw(4) << numBot << "\n";
            cout << "________" << endl;
            cin >> stuAnswer;
            
            if (stuAnswer == answer){
                cout << "Congradulation! you got this correct!" << endl;
            }
            else {
                cout << "Sorry," << name << ",this is not the corret anwser" << " The correct answer is:" << answer << endl;
            }
            break;
            
        case 3:
            max = 12;
            min = 1;
            numTop = (rand() % (max-min+1)) + min;
            numBot = (rand() % (max-min+1)) + min;
            answer = numTop * numBot;
            cout << "Enter your Answer please" << endl;
            cout << setw(5)<<numTop << "\n";
            cout << "x" << setw(4) << numBot << "\n";
            cout << "________" << endl;
            cin >> stuAnswer;
            
            if (stuAnswer == answer){
                cout << "Congradulation! you got this correct!" << endl;
            }
            else {
                cout << "Sorry," << name << ",this is not the corret anwser" << " The correct answer is:" << answer << endl;
            }
            break;
        
        case 4:
            cout << "Division function have not been developed, please wait!" <<endl;
            break;
            
        case 5:
            cout << "Thank you for using the Math Tutor! Good Bye!" << endl;
            break;
        
        default:
            cout << "Your choice cannot be determined, please choose one of the option above" << endl;
            break;
    }
    
    
    return 0;
}
