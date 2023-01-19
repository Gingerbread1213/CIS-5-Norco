#include <iostream>


using namespace std;


int main (){
    
    int input;
    
    cout << "enter your number between 25 and 50" << endl;
    
    cin >> input;
    
    
    
    while (input <= 25 || input >= 50){
        
        cout << "Your number is out of the range, please input another one"<< endl;
        cin >> input;
    }
    
    cout << "You number "<<input<< " is accepted, thank you!"<<endl;
    cout << "GOOD BYE!" << endl;
    
    
    return 0;
}
