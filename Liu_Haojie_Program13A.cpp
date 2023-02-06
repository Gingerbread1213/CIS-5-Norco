#include <iostream>


using namespace std;


int main(){
    
    const int NUM_DIVS = 3;
    const int NUM_QTRS = 4;
    double sales[NUM_DIVS][NUM_QTRS];
    double divSales[NUM_DIVS];
    double totalSales = 0;
    
    cout << "This program will calculate the division sale and \n";
    cout << "total sales of all the company's divisions\n";
    cout << "Enter the following sales information:\n"<< endl;
    
    
    for (int i = 0; i<NUM_DIVS;i++){
        for (int j = 0; j<NUM_QTRS;j++){
            cout << "Division " << i+1 << ", Quarter " << j+1 << ": $";
            cin >> sales[i][j];
            divSales[i] = divSales[i] + sales[i][j];
        }
        totalSales = totalSales + divSales[i];
        cout << "\n";
    }
    
    for (int i = 0; i<NUM_DIVS; i++){
        cout << "Division "<< i+1 << "sales for company are: $" << divSales[i] << endl;
    }
    cout << "The total sales for the company are: $" << totalSales << endl;
    
    
    
    return 0;
    
}
