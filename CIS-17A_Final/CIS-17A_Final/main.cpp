#include <iostream>
#include <string>
#include <vector>
#include "ChessBoard.h"

using namespace std;

int ok();


int main(){
    

    ChessBoard board;
    board.printBoard();
    board.initialize();
    board.printBoard();
    board.move("e7", "e6");
    board.printBoard();
    board.move("f8", "c5");
    board.printBoard();
    board.move("c5", "d6");
    board.printBoard();
    board.move("d6", "h2");

    board.printBoard();
    
    
    
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
