#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main(){
    
    srand(time(0));
    
    int num = rand() % 500 + 1;
    int input = 501;
    cout << num << endl;
    
    do {
        cout << "please enter number you think:" << endl;
        cin >> input;
        if (input > num){
            cout << "your number, "<< input << ",  is too high please try again." << endl;
        }
        else if (input < num){
            cout << "your number," << input << ", is too low please try again." << endl;
        }
        else{
            cout << "You got it! "<< num << " is the correct number" << endl;
        }
    }
    while (input != num);
    return 0;
}
