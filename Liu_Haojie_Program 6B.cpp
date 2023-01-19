// Haojie Liu

// CIS-5 Online

// Mar 28

// Program 6B: Do While Loops

#include <iostream>


using namespace std;


int main (){
    
    int choice = 0;
    bool condition = true;
    
    do{
        cout << "choose your favorite super hero\n";
        cout << "1. Superman\n2. Batman\n3. The Notorious RBG\n4. Quit\n";
        cin >> choice;
        
        if (choice == 1){
            
            cout << "Superman is always the best!\n";
        }
        else if (choice == 2){
            cout << "Batman will save you!\n";
        }
        else if (choice == 3){
            cout << "You can't spell TRUTH without RUTH.\n";
        }
        else if (choice == 4){
            condition = false;
        }
    }
    while (condition == true);
    cout << "Good bye!" << endl;
    
    return 0;
}
