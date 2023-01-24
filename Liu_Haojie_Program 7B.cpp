#include <iostream>
#include <iomanip>


using namespace std;


int main(){
    
    const int ROW = 10;
    const int COL = 10;
    
    cout << "   ";
    for (int i=1; i <= COL; i++){
        cout<< right << i << setw(5);
    }
        
    
    for (int i = 1; i <= ROW ; i++){
        
        cout << "\n"<<"  -----------------------------------------------"<<endl;
        cout << i ;
        
        for (int j = 1; j <= COL; j++){
            cout << "|" << setw(4) << i*j << left;
            
        }
    }
    cout << endl;
    
    return 0;
}

