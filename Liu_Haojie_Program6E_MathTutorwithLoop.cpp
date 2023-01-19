// Haojie Liu

// CIS-5 Online

// March 28

// Program 5A: Math Tutor with loops


#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main(){
    
    int numTop, numBot, answer, stuAnswer, max, min;
    string name;
    int choice = 0;
    bool condition = true;
    
    srand(time(0));

    cout << "Welcome to the Math Tutor!, Please enter your name here:" <<endl;
    getline(cin, name);
    cout << "Hello! " << name << "Please choose one of the follwing option to begin your practice! \n";
    
    do{
        cout << "1. Addition \n" << "2. Subtraction \n" << "3. Multiplication \n" << "4. Division \n" << "5. Quit" << endl;
        cin >> choice;
        
        if (choice == 1){
            
            do {
                max = 500;
                min = 2;
                numTop = (rand()%(max-min+1)) + min;
                max = 99;
                min = 1;
                numBot = (rand() % (max-min+1)) + min;}
            while (numTop < numBot);
            
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
            
        }
        else if (choice == 2){
            do{
                max = 500;
                min = 2;
                numTop = (rand() % (max-min+1)) + min;
                max = 500;
                min = 1;
                numBot = (rand() % (max-min+1)) + min;}
            while(numTop < numBot);
            
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
            
        }
        else if (choice == 3){
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
            
        }
        else if (choice == 4){
            do{
                max = 999;
                min = 10;
                numTop = (rand() % (max-min+1)) + min;
                max = 9;
                min = 1;
                numBot = (rand() % (max-min+1)) + min;}
            while(numTop < numBot);
            
            int reminder = numTop%numBot;
            
            numTop = numTop-reminder;
            answer = numTop/numBot;

            cout << "Enter your Answer please" << endl;
            cout << setw(5)<< numTop << "\n";
            cout << "/" << setw(4) << numBot << "\n";
            cout << "________" << endl;
            cin >> stuAnswer;
            
            if (stuAnswer == answer){
                cout << "Congradulation! you got this correct!" << endl;
            }
            else {
                cout << "Sorry," << name << ",this is not the corret anwser" << " The correct answer is:" << answer << endl;
            }
            
        }
        else if (choice == 5){
            condition = false;
        }
    }
    while (condition == true);
    
    cout << "Thank you for using Math tutor! Good bye!" << endl;
    
    
    return 0;
}

