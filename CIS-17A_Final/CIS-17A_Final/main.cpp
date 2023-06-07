#include <iostream>
#include <string>
#include <vector>
#include "ChessBoard.h"

using namespace std;

int ok();


int main(){
    
    int *a[3][3];
    
    int x = 1;
    
    
    a[0][0]=&x;
    
    cout << *a[0][0] <<endl;
    
    x = 2;
    cout << *a[0][0] <<endl;
    
    
    
    return 0;
}


// Queen and king and knight not moving
// can move when empty or capture others
// pawn 1 or 2 move when initial, 1 after
// rook is rook
// bishop is bishop



int ok (){
    
    return 0;
}
