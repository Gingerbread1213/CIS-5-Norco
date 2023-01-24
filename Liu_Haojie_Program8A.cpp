#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

bool isValid(int num, int min, int max);
void addition();
void subtraction();
void multiplication();
void division();
int displayMenu();


int main(){

    string name;
    bool condition = true;
    
    cout << "Welcome to the Math Tutor!, Please enter your name here:" <<endl;
    getline(cin, name);
    cout << "Hello! " << name << "Please choose one of the follwing option to begin your practice! \n";

    
    do{
        int choice = displayMenu();
        if ((isValid(choice, 1, 5))==true){
            if (choice == 1){
                addition();
            }
            else if (choice == 2){
                subtraction();
            }
            else if (choice == 3){
                multiplication();
            }
            else if (choice == 4){
                division();
            }
            else if (choice == 5){
                cout << "good bye!" << endl;
                condition = false;
            }
        }
    }
    while (condition == true);
    
    
    return 0;
}




bool isValid(int num, int min, int max){

    
    if ((num >= min) && (num <= max)){
        return true;
    }
    else{
        return false;
    }
}


void addition(){
    
    int numTop, numBot, answer, stuAnswer, max, min;
    int attempt = 1;
    srand(time(0));
    
    max = 500;
    min = 2;
    numTop = (rand()%(max-min+1)) + min;
    max = 99;
    min = 1;
    numBot = (rand() % (max-min+1)) + min;
    
    answer = numTop + numBot;
    
    cout << "Enter your Answer please" << endl;
    cout << setw(5)<<numTop << "\n";
    cout << "+  " << numBot << "\n";
    cout << "________" << endl;
    cin >> stuAnswer;
    
    while ((stuAnswer != answer) && (attempt <= 2)){
        cout << "please try again, you got "<< 3 - attempt << "more attempts left" << endl;
        attempt++;
        cin >> stuAnswer;
    }
    if (stuAnswer == answer){
        cout << "Congradulation! you got this correct!" << endl;
    }
    else {
        cout << "Sorry,this is not the corret anwser" << " The correct answer is:" << answer << endl;
    }
    
    return;
}

void subtraction(){
    int numTop, numBot, answer, stuAnswer, max, min;
    int attempt = 1;
    
    srand(time(0));
    
    max = 500;
    min = 2;
    numTop = (rand() % (max-min+1)) + min;
    max = 500;
    min = 1;
    numBot = (rand() % (max-min+1)) + min;
    
    answer = numTop - numBot;
    
    cout << "Enter your Answer please" << endl;
    cout << setw(5) << numTop << "\n";
    cout << "-" << setw(4) << numBot << "\n";
    cout << "________" << endl;
    cin >> stuAnswer;
    
    while ((stuAnswer != answer) && (attempt <= 2)){
        cout << "please try again, you got "<< 3 - attempt << "more attempts left" << endl;
        attempt++;
        cin >> stuAnswer;
    }
    if (stuAnswer == answer){
        cout << "Congradulation! you got this correct!" << endl;
    }
    else {
        cout << "Sorry,this is not the corret anwser" << " The correct answer is:" << answer << endl;
    }

    return;
    
}

void multiplication(){
    int numTop, numBot, answer, stuAnswer, max, min;
    int attempt = 1;
    
    srand(time(0));

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
    
    while ((stuAnswer != answer) && (attempt <= 2)){
        cout << "please try again, you got "<< 3 - attempt << "more attempts left" << endl;
        attempt++;
        cin >> stuAnswer;
    }
    if (stuAnswer == answer){
        cout << "Congradulation! you got this correct!" << endl;
    }
    else {
        cout << "Sorry,this is not the corret anwser" << " The correct answer is:" << answer << endl;
    }
    
    return;
}

void division(){
    int numTop, numBot, answer, stuAnswer, max, min;
    int attempt = 1;
    
    max = 999;
    min = 10;
    numTop = (rand() % (max-min+1)) + min;
    max = 9;
    min = 1;
    numBot = (rand() % (max-min+1)) + min;
    
    int reminder = numTop%numBot;
    
    numTop = numTop-reminder;
    answer = numTop/numBot;

    cout << "Enter your Answer please" << endl;
    cout << setw(5)<< numTop << "\n";
    cout << "/" << setw(4) << numBot << "\n";
    cout << "________" << endl;
    cin >> stuAnswer;
    
    while ((stuAnswer != answer) && (attempt <= 2)){
        cout << "please try again, you got "<< 3 - attempt << "more attempts left" << endl;
        attempt++;
        cin >> stuAnswer;
    }
    if (stuAnswer == answer){
        cout << "Congradulation! you got this correct!" << endl;
    }
    else {
        cout << "Sorry,this is not the corret anwser" << " The correct answer is:" << answer << endl;
    }
    
    return;
}

int displayMenu(){
    int choice;
    cout << "1. Addition \n" << "2. Subtraction \n" << "3. Multiplication \n" << "4. Division \n" << "5. Quit" << endl;
    cin >> choice;
    return choice;
}

