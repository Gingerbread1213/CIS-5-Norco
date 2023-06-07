//
//  Knight.cpp
//  CIS-17A_Final
//
//  Created by 刘豪杰 on 6/7/23.
//

#include "Knight.h"

Knight::Knight(ChessBoard* board, Color color) : ChessPiece(board, color)
{
    
}

Knight::~Knight(){
    
}

string Knight::toString(){
    
    if(color==BLACK){
        return "\u265E";
    }else {
        return "\u2658";
    }
}

vector<string>* Knight::legalMoves(){
    
    vector<string>* move = new vector<string>();
    return move;
}
