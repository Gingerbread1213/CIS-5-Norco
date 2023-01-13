// Haojie Liu

// CIS-5 Online

// Feb 16

// Program 2A: Full Name - The program accepts the user's first and last name from the keyboard and displays a message to the user.

#include <iostream>

using namespace std;


int main(){
    string Firstname, Lastname;
    
    cout << "enter your first name!" << endl;
    cin >> Firstname;
    cout << "enter your Last name!" << endl;
    cin >> Lastname;
    
    cout << "Welcome to C++ programming, " + Firstname + " " + Lastname << endl;
    
    return 0;
}



