//
//  ChessBoard.hpp
//  CIS-17A_Final
//
//  Created by 刘豪杰 on 6/4/23.
//

#ifndef ChessBoard_h
#define ChessBoard_h

#include <stdio.h>
#include <string>
#include <algorithm>

using namespace std;


const int SIZE = 8;

class ChessPiece;



struct Position{
    int row;
    int column;
};



class ChessBoard{
    
private:
    
    ChessPiece *board[SIZE][SIZE];
  
public:
    
    ChessBoard(); // create board
    
    virtual ~ChessBoard(); // delete board
    
    void initialize(); //place pieces
    
    void printBoard();
    
    ChessPiece* getPiece(Position position); // get the piece type by input position
    
    bool placePiece(ChessPiece* piece, Position position);
    
    bool move(string from, string to);

    string toString(); // debug
    

    
};


enum Color {WHITE, BLACK};


class ChessPiece{
  
    
protected:
    ChessBoard* board;
    int row;
    int column;
    Color color;
    
public:
    
    ChessPiece(ChessBoard* board, Color color); // create chess piece
    virtual ~ChessPiece(){};
    int getRow(); // return row
    int getColumn(); // return column
    void setRow(int newRow); // set a row
    void setColumn(int newCol); // set a column
    Color getColor(); // return color
    string getPosition() const;
    string getPosition(int col, int row) const;
    void setPosition(Position position);
    virtual string toString() const = 0;
    virtual vector<string>* legalMoves() const=0;
    
};




#endif /* ChessBoard_hpp */
