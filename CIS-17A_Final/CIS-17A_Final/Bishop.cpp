//
//  Bishop.cpp
//  CIS-17A_Final
//
//  Created by 刘豪杰 on 6/6/23.
//

#include "Bishop.h"

Bishop::Bishop(ChessBoard* board, Color color) : ChessPiece(board, color)
{
    
}

Bishop::~Bishop(){
    
}

string Bishop::toString() const{
    
    if(color==BLACK){
        return "\u265D";
    }else {
        return "\u2657";
    }

}

vector<string>* Bishop::legalMoves() const{
    
    vector<string>* move = new vector<string>();
    int n_row = row;
    int n_col = column;
    Position n_pos;
    n_pos.row=n_row;
    n_pos.column=n_col;
    
    if(color == BLACK){
        
        // go left down
        
        while(n_col>0 && n_row>0){
            n_pos.row=n_row-1;
            n_pos.column=n_col-1;
            if(board->getPiece(n_pos) == NULL){
                n_col-=1;
                n_row-=1;
                move->push_back(getPosition(n_col,n_row));
            }else{
                n_col-=1;
                n_row-=1;
                move->push_back(getPosition(n_col,n_row));
                n_col=0;
                n_row=0;
            }
        }
        
        n_row = row;
        n_col = column;
        n_pos.row=row;
        n_pos.column=column;
               
        // go right down
        
        while(n_col<8 && n_row>0){
            
            n_pos.row=n_row-1;
            n_pos.column=n_col+1;
            
            if(board->getPiece(n_pos) == NULL){
                n_col+=1;
                n_row-=1;
                move->push_back(getPosition(n_col,n_row));
            }else{
                n_col+=1;
                n_row-=1;
                move->push_back(getPosition(n_col,n_row));
                n_col= 8;
                n_row= 0;
            }
        }
        
        n_row = row;
        n_col = column;
        n_pos.row=row;
        n_pos.column=column;
        
        // go left up
        
        while(n_col>0 && n_row<8){
        
            
            n_pos.row=n_row+1;
            n_pos.column=n_col-1;
            
            if(board->getPiece(n_pos) == NULL){
                n_col-=1;
                n_row+=1;
                move->push_back(getPosition(n_col,n_row));
            }else{
                n_col-=1;
                n_row+=1;
                move->push_back(getPosition(n_col,n_row));
                n_col= 0;
                n_row= 8;
            }
        }
        
        n_row = row;
        n_col = column;
        n_pos.row=row;
        n_pos.column=column;
        
        // go right up
        
        while (n_col<8 && n_row<8) {

            n_pos.row=n_row+1;
            n_pos.column=n_col+1;
            
            if(board->getPiece(n_pos) == NULL){
                n_col+=1;
                n_row+=1;
                move->push_back(getPosition(n_col,n_row));
            }else{
                n_col+=1;
                n_row+=1;
                move->push_back(getPosition(n_col,n_row));
                n_col= 8;
                n_row= 8;
            }
        }
        
        n_row = row;
        n_col = column;
        n_pos.row=row;
        n_pos.column=column;
        
    }
    
    if (color==WHITE){
        
        // your code
        
    }
    
    
    return move;
}
