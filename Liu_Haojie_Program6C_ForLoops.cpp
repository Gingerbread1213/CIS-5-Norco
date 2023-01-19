// Haojie Liu

// CIS-5 Online

// Mar 28

// Program 6C: For Loops

#include <iostream>
#include <iomanip>


using namespace std;


int main(){
    
    float divSale;
    float total = 0;
    
    cout << "Welcome, please input your sale amount of your four divisions into the system"<< endl ;
    
    for (int i = 0; i<4; i++){
        
        cout << "Enter your sales:" << endl;
        cin >> divSale;
        total = divSale + total;
        
    }
    
    setprecision(2);
    cout << "your total is " << total << "$" << endl;
    
    return 0;
}
