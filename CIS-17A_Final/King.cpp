//
//  King.cpp
//  CIS-17A_Final
//
//  Created by 刘豪杰 on 6/7/23.
//

#include "King.h"

King::King(ChessBoard* board, Color color) : ChessPiece(board, color)
{
    
}

King::~King(){
    
}

string King::toString(){
    
    if(color==BLACK){
        return "\u265A";
    }else {
        return "\u2654";
    }
}

vector<string>* King::legalMoves(){
    
    vector<string>* move = new vector<string>();
    return move;
}
