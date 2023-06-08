//
//  Rook.cpp
//  CIS-17A_Final
//
//  Created by 刘豪杰 on 6/6/23.
//

#include "Rook.h"
#include <iostream>

using namespace std;


Rook::Rook(ChessBoard* board, Color color) : ChessPiece(board, color)
{
    
}

Rook::~Rook(){
    
}

string Rook::toString() const{
    
    if(color==BLACK){
        return "\u265C";
    }else {
        return "\u2656";
    }
}

vector<string>* Rook::legalMoves() const{
    
    vector<string>* move = new vector<string>();
    int n_col = column;
    int n_row = row;
    Position n_pos;
    n_pos.row=n_row;
    n_pos.column=n_col;
    
    if(color==BLACK){
        
        // front
        while(n_row>0){
            n_pos.row=n_row-1;
            if(board->getPiece(n_pos) == NULL){
                n_row-=1;
                move->push_back(getPosition(n_col,n_row));
            }else{
                n_row-=1;
                move->push_back(getPosition(n_col,n_row));
                n_row = 0;
            }
        }
        
        n_pos.row=row;
        n_row = row;
        
        // back
        
        while(n_row<7){
            n_pos.row=n_row+1;
            if(board->getPiece(n_pos) == NULL){
                n_row+=1;
                move->push_back(getPosition(n_col,n_row));
            }else{
                n_row+=1;
                move->push_back(getPosition(n_col,n_row));
                n_row = 7;
            }
        }
        
        n_pos.row=row;
        n_row = row;
        // left
        
        while(n_col>0){
            n_pos.column=n_col-1;
            if(board->getPiece(n_pos) == NULL){
                n_col-=1;
                move->push_back(getPosition(n_col,n_row));
            }else{
                n_col-=1;
                move->push_back(getPosition(n_col,n_row));
                n_col = 0;
            }
        }
        
        n_pos.column=column;
        n_col = column;
        // right
        
        while(n_col<7){
            n_pos.column=n_col+1;
            if(board->getPiece(n_pos) == NULL){
                n_col+=1;
                move->push_back(getPosition(n_col,n_row));
            }else{
                n_col+=1;
                move->push_back(getPosition(n_col,n_row));
                n_col = 7;
            }
        }
        
        n_pos.column=column;
        n_col = column;
    }
    
    
    if(color == WHITE){
        
        // your code
        
    }
    
    return move;
}
