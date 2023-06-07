//
//  Queen.cpp
//  CIS-17A_Final
//
//  Created by 刘豪杰 on 6/7/23.
//

#include "Queen.h"

Queen::Queen(ChessBoard* board, Color color) : ChessPiece(board, color)
{
    
}

Queen::~Queen(){
    
}

string Queen::toString(){
    
    if(color==BLACK){
        return "\u265B";
    }else {
        return "\u2655";
    }
}

vector<string>* Queen::legalMoves(){
    
    vector<string>* move = new vector<string>();
    return move;
}
