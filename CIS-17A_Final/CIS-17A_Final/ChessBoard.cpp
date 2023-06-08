//
//  ChessBoard.cpp
//  CIS-17A_Final
//
//  Created by 刘豪杰 on 6/4/23.
//

#include "ChessBoard.h"
#include "King.h"
#include "Queen.h"
#include "Knight.h"
#include "Bishop.h"
#include "Rook.h"
#include "Pawn.h"
#include <string>
#include <sstream>

using namespace std;


ChessBoard::ChessBoard(){
    for(int i =0; i<SIZE;i++){
        for(int j=0; j<SIZE;j++){
            board[i][j] = NULL;
        }
    }
}


ChessBoard::~ChessBoard() {
    delete board[SIZE][SIZE];
}


void ChessBoard::initialize(){
    
    // set black
    
    board[7][0] = new Rook(this, BLACK);
    board[7][0]->setColumn(0);
    board[7][0]->setRow(7);
    
    board[7][7] = new Rook(this, BLACK);
    board[7][7]->setColumn(7);
    board[7][7]->setRow(7);
    
    board[7][1] = new Knight(this, BLACK);
    board[7][1]->setColumn(1);
    board[7][1]->setRow(7);
    
    board[7][6] = new Knight(this, BLACK);
    board[7][6]->setColumn(6);
    board[7][6]->setRow(7);
    
    board[7][2] = new Bishop(this, BLACK);
    board[7][2]->setColumn(2);
    board[7][2]->setRow(7);
    
    board[7][5] = new Bishop(this, BLACK);
    board[7][5]->setColumn(5);
    board[7][5]->setRow(7);
    
    board[7][3] = new Queen(this, BLACK);
    board[7][3]->setColumn(3);
    board[7][3]->setRow(7);
    
    board[7][4] = new King(this, BLACK);
    board[7][4]->setColumn(4);
    board[7][4]->setRow(7);
    
    
    for(int i=0; i<8;i++){
        board[6][i] = new Pawn(this, BLACK);
        board[6][i]->setColumn(i);
        board[6][i]->setRow(6);
    }
    
    
    // set white
    
    board[0][0] = new Rook(this, WHITE);
    board[0][0]->setColumn(0);
    board[0][0]->setRow(0);
    
    board[0][7] = new Rook(this, WHITE);
    board[0][7]->setColumn(7);
    board[0][7]->setRow(0);
    
    board[0][1] = new Knight(this, WHITE);
    board[0][1]->setColumn(1);
    board[0][1]->setRow(0);
    
    board[0][6] = new Knight(this, WHITE);
    board[0][6]->setColumn(6);
    board[0][6]->setRow(6);
    
    board[0][2] = new Bishop(this, WHITE);
    board[0][2]->setColumn(2);
    board[0][2]->setRow(2);
    
    board[0][5] = new Bishop(this, WHITE);
    board[0][5]->setColumn(5);
    board[0][5]->setRow(5);
    
    board[0][3] = new Queen(this, WHITE);
    board[0][3]->setColumn(3);
    board[0][3]->setRow(3);
    
    board[0][4] = new King(this, WHITE);
    board[0][4]->setColumn(4);
    board[0][4]->setRow(4);
    
    
    for(int i=0; i<8;i++){
        board[1][i] = new Pawn(this, WHITE);
        board[1][i]->setColumn(i);
        board[1][i]->setRow(1);
    }
    
    
}

ChessPiece* ChessBoard::getPiece(Position position){
    
    return board[position.row][position.column];

}

bool ChessBoard::placePiece(ChessPiece* piece, Position position){
    
    if(piece != NULL){
        
        if(getPiece(position)==NULL){
            return true;
        }else if (getPiece(position)->getColor()==piece->getColor()){
            return false;
        }else{
            return true;
        }
            
    }
    
    return false;
}

bool ChessBoard::move(string from, string to){
    
    Position fromPosition;
    Position toPosition;
    fromPosition.row=static_cast<int>(from[1])-49;
    fromPosition.column=static_cast<int>(from[0])-97;
    toPosition.row=static_cast<int>(to[1])-49;
    toPosition.column=static_cast<int>(to[0])-97;

    
    vector<string>* res;
    
    if(board[fromPosition.row][fromPosition.column]!= NULL){
        res = (board[fromPosition.row][fromPosition.column]->legalMoves());
    }else{
        return false;
    }
    
    string pos;
    bool ok = false;
    bool go = false;
    pos = toPosition.column+'a';
    pos = pos+to_string(toPosition.row+1);
    
    auto it = find(res->begin(), res->end(), pos);

    if (it != res->end()) {
        ok = true;
    } else {
        ok = false;
    }
    
    if(ok){
        go = placePiece(getPiece(fromPosition), toPosition);
    }else{
        return false;
    }
    
    if(go){
        board[toPosition.row][toPosition.column]=NULL;
        getPiece(fromPosition)->setPosition(toPosition);
        board[toPosition.row][toPosition.column]=getPiece(fromPosition);
        board[fromPosition.row][fromPosition.column]=NULL;
        return true;
    }else{
        return false;
    }
    
    
    return false;
    
}


void ChessBoard::printBoard() {
    stringstream ss;

    for (int row = SIZE - 1; row >= 0; row--) {
        ss << "   ";
        for (int col = 0; col < SIZE; col++) {
            ss << "+---";
        }
        ss << "+\n"
           << " " << row + 1 << " ";

        for (int col = 0; col < SIZE; col++) {
            ss << "| ";

            if (board[row][col] != nullptr) {
                string code = board[row][col]->toString();
                ss << code;
            } else {
                ss << " ";
            }
            ss << " ";
        }
        ss << "|\n";
    }

    ss << "   ";
    for (int col = 0; col < SIZE; col++) {
        ss << "+---";
    }
    ss << "+\n"
       << "     ";

    for (int col = 0; col < SIZE; col++) {
        ss << static_cast<char>(97 + col) << "   ";
    }
    ss << "\n";

    cout << ss.str();
}












