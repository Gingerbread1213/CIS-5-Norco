#include <iostream>


using namespace std;

int main(){
    
    int line = 10;
    
    for (int i=0; i <=line; i++){
        
        cout << endl;
        
        for (int j=0; j <= line - i + 1; j++){
            
            cout << "*";
            
        }
    }
    
        return 0;
}
