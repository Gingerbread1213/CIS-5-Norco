// Haojie Liu

// CIS-5 Online

// Feb 16

// Program 3A: Find the Hypotenuse


#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    
    double hypo;
    double oppo;
    double adj;
    string name;
    string day;
    string time;
    
    cout<< "enter your name" <<endl;
    cin >> name;
    
    cout << "enter the day" << endl;
    cin >> day;
    
    cout << "enter the time" << endl;
    cin >> time;
    
    cout << "enter your adjacent and opposite" << endl;
    cin >> oppo >> adj;
    
    hypo = pow((pow(oppo , 2) + pow(adj, 2)),0.5);

    cout << name + " ";
    cout << day + " ";
    cout << time<< endl;
    cout << "your opposite: " << oppo <<"\n";
    cout << "your adjacent: " << adj << "\n";
    cout << "your hypotenuse: " << setprecision(4)<< hypo << endl;
    
    return 0;
}
