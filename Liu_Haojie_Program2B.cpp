// Haojie Liu

// CIS-5 Online

// Feb 16

// Program 2B: Laser Wars Cantina

#include <iostream>

using namespace std;

int main(){
    double price;
    double tax;
    double tip;
    const double TAX_RATE = 0.08;
    const double TIP_RATE = 0.2;
    
    
    cout << "enter the bill total" << endl;
    
    cin >> price;
    
    cout << "Welcome to laser wars cantina. Home of that one song" << endl;
    cout << "\n" <<endl;
   
    
    cout << "Food items .......................  $";
    cout << price << endl;
    
    cout << "Tax 8% .......................  $";
    Tax = price * 0.08;
    cout << Tax <<endl;
    
    cout << "Tip 20% .......................  $";
    Tip = price* 0.2;
    cout << Tip <<endl;
    
    cout << "\n" << endl;
    cout << "Total                        ";
    cout << price + Tax + Tip <<endl;
    
    return 0;
}
