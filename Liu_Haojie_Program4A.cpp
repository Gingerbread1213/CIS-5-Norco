// Haojie Liu

// CIS-5 Online

// Feb 22

// Program 4A: Three Numbers in order

#include <iostream>

using namespace std;

int main (){
    
    int num1;
    int num2;
    int num3;
    
    
    
    cout << "please enter your first number" << endl;
    cin >> num1;
    if (num1 > 500){
        cout << "the number is over 500! retry" << endl;
        return 0;
    }
    cout << "please enter your second number" << endl;
    cin >> num2;
    if (num2 > 500){
        cout << "the number is over 500! retry" << endl;
        return 0;
    }
    cout << "please enter your third number" << endl;
    cin >> num3;
    if (num3 > 500){
        cout << "the number is over 500! retry" << endl;
        return 0;
    }
    
    
    
    if ((num1 <= num2)&&(num1 <= num3)) {
        cout << num1 << " ";
        if (num2 <= num3){
            cout << num2 << " ";
            cout << num3 << " ";
        }
        else {
            cout << num3 << " ";
            cout << num2 << " ";
        }
    }else if ((num2 <= num1)&&(num2 <= num3)){
        cout << num2 << " ";
        if (num3 <= num1){
            cout << num3 << " ";
            cout << num1 << " ";
        }
        else {
            cout << num1 << " ";
            cout << num3 << " ";
        }
    }else if ((num3 <= num1)&&(num3 <= num2)){
        cout << num3 << " ";
        if (num1 <= num2){
            cout << num1 << " ";
            cout << num2 << " ";
        }
        else {
            cout << num2 << " ";
            cout << num1 << " ";
        }
        
    }
    
    return 0;
    
}
