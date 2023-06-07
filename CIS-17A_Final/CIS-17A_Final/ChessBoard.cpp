//
//  ChessBoard.cpp
//  CIS-17A_Final
//
//  Created by 刘豪杰 on 6/4/23.
//

#include "ChessBoard.h"
#include <string>

using namespace std;


ChessBoard::ChessBoard(){
    for(int i =0; i<SIZE;i++){
        for(int j=0; j<SIZE;j++){
            board[i][j] = NULL;
        }
    }
}


ChessBoard::~ChessBoard(){
    
    for(int i =0; i<SIZE;i++){
        for(int j=0; j<SIZE;j++){
            delete board[i][j];
        }
    }
}

void ChessBoard::initialize(){
    
    
    
    
}

ChessPiece* ChessBoard::getPiece(Position position){
    
    return board[position.row][position.column];

}

bool ChessBoard::placePiece(ChessPiece* piece, Position position){
    
    
    return false;
}

bool ChessBoard::move(Position fromPosition, Position toPosition){
    
    
    return false;
}












