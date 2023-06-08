//
//  Pawn.cpp
//  CIS-17A_Final
//
//  Created by 刘豪杰 on 6/6/23.
//
#include <iostream>
#include "Pawn.h"


using namespace std;

Pawn::Pawn(ChessBoard* board, Color color) : ChessPiece(board, color)
{
    
}

Pawn::~Pawn(){
    
}

string Pawn::toString() const{
    
    if(color==BLACK){
        return "\u265F";
    }else {
        return "\u2659";
    }

}

vector<string>* Pawn::legalMoves() const{
    
    vector<string>* move = new vector<string>();
    int n_col = column;
    int n_row = row;
    Position n_pos;
    n_pos.row=n_row;
    n_pos.column=n_col;
    
    if(color==BLACK){
        n_pos.row=n_row-1;
        if(board->getPiece(n_pos) == NULL){
            move->push_back(getPosition(n_col,n_row-1));
        }
        n_pos.row=n_row-2;
        if(board->getPiece(n_pos) == NULL && n_row==6){
            move->push_back(getPosition(n_col,n_row-2));
        }
        n_pos.row=n_row-1;
        n_pos.column=n_col+1;
        if(board->getPiece(n_pos)!= NULL){
            move->push_back(getPosition(n_col+1,n_row-1));
        }
        n_pos.row=n_row-1;
        n_pos.column=n_col-1;
        if(board->getPiece(n_pos)!=NULL){
            move->push_back(getPosition(n_col-1,n_row-1));
        }
    }
    
    
    // white
    
    if(color==WHITE){
        
        // Your code
        
    }

    
    return move;
}

// find place that we can place our piece
