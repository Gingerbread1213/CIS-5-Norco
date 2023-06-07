#include <iostream>
#include <string>
#include <vector>

using namespace std;



int main(){
    
    int row=1;
    int col=2;
    
    string pos;
    pos = col+'a';
    pos = pos+to_string(row+1) ;

    
    cout << pos << endl;
    cout << 1+'a';
    
    return 0;
}


// Queen and king and knight not moving
// can move when empty or capture others
// pawn 1 or 2 move when initial, 1 after
// rook is rook
// bishop is bishop



