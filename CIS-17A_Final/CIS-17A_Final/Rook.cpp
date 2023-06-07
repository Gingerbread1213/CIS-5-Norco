//
//  Rook.cpp
//  CIS-17A_Final
//
//  Created by 刘豪杰 on 6/6/23.
//

#include "Rook.h"


Rook::Rook(ChessBoard* board, Color color) : ChessPiece(board, color)
{
    
}

Rook::~Rook(){
    
}

string Rook::toString(){
    
    if(color==BLACK){
        return "\u265C";
    }else {
        return "\u2656";
    }
}

vector<string>* Rook::legalMoves(){
    
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
                move->push_back(toCoorString(n_col,n_row));
            }else{
                n_row-=1;
                move->push_back(toCoorString(n_col,n_row));
                n_row = 0;
            }
        }
        
        n_pos.row=n_row;
        
        // back
        
        while(n_row<8){
            n_pos.row=n_row+1;
            if(board->getPiece(n_pos) == NULL){
                n_row+=1;
                move->push_back(toCoorString(n_col,n_row));
            }else{
                n_row+=1;
                move->push_back(toCoorString(n_col,n_row));
                n_row = 8;
            }
        }
        
        n_pos.row=n_row;
        
        // left
        
        while(n_col>0){
            n_pos.column=n_col-1;
            if(board->getPiece(n_pos) == NULL){
                n_col-=1;
                move->push_back(toCoorString(n_col,n_row));
            }else{
                n_col-=1;
                move->push_back(toCoorString(n_col,n_row));
                n_col = 0;
            }
        }
        
        n_pos.column=n_col;
        
        // right
        
        while(n_col<8){
            n_pos.column=n_col+1;
            if(board->getPiece(n_pos) == NULL){
                n_col+=1;
                move->push_back(toCoorString(n_col,n_row));
            }else{
                n_col+=1;
                move->push_back(toCoorString(n_col,n_row));
                n_col = 8;
            }
        }
        
        n_pos.column=n_col;
        
    }
    
    
    if(color == WHITE){
        
        // your code
        
    }
    
    return move;
}
