// Haojie Liu

// CIS-5 Online

// Mar 5

// Program 3B: Box Office

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    
    int Adult, Child;
    const float ADULT_PRICE = 10;
    const float CHILD_PRICE = 6;
    const float PROFIT = 0.2;
    float Total, NetProfit,Paid;
    
    string MovieName;
    
    cout << "What is the name of the Movie?" << endl;
    getline(cin, MovieName);
    cout << " " <<endl;
    cout << "How many adult tickets are sold?"<<endl;
    cin >> Adult;
    cout << " " <<endl;
    cout << "How many child tickets are sold?"<<endl;
    cin >> Child;
    cout << " " <<endl;
    cout << " " <<endl;
    cout << " " <<endl;
    
    Total = (Adult*ADULT_PRICE)+(Child*CHILD_PRICE);
    NetProfit = Total * PROFIT;
    Paid = Total - NetProfit;
    
    cout << setprecision(2) << fixed;
    cout << left <<  setw(27) << "\nMovie Name:" << right << setw(7) << MovieName;
    cout << left <<  setw(27) << "\nAdult tickets sold:" << right << setw(7) << Adult;
    cout << left <<  setw(27) << "\nChild tickets sold:" << right << setw(7) << Child;
    cout << endl;
    cout << left <<  setw(29) << "\nGross Box Office Profit:"  << "$" << right << setw(7) << Total;
    cout << left <<  setw(29) << "\nNet Box Office Profit:"   << "$" << right << setw(7) << NetProfit;
    cout << left <<  setw(29) << "\nAmount Paid to Distributor:"  << "$" << right << setw(7) << Paid << endl;
    
    
    return 0;
}
