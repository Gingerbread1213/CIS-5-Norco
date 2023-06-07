//
//  ChessPiece.cpp
//  CIS-17A_Final
//
//  Created by 刘豪杰 on 6/6/23.
//



#include "ChessBoard.h"
#include <string>

using namespace std;


ChessPiece::ChessPiece(ChessBoard board, Color color){
    
    this->board = board;
    this->color = color;
    
}


int ChessPiece::getRow(){
    return row;
}

int ChessPiece::getColumn(){
    return column;
}

void ChessPiece::setRow(int newRow){
    this->row = newRow;
    return;
}

void ChessPiece::setColumn(int newCol){
    this->column = newCol;
    return;
}

ChessPiece::Color ChessPiece::getColor(){
    return color;
}

string ChessPiece::getPosition(){
    return toString();
}


string ChessPiece::toString(){
    
    string pos;
    pos = column+'a';
    pos = pos+to_string(row+1);
    
    return pos;
}

void ChessPiece::setPosition(Position position){
    
    row = position.row;
    column = position.column;
    
    return;
}



