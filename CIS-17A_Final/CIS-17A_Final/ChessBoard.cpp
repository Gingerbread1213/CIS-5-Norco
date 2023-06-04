//
//  ChessBoard.cpp
//  CIS-17A_Final
//
//  Created by 刘豪杰 on 6/4/23.
//

#include "ChessBoard.h"
#include <string>

using namespace std;

const int SIZE = 8;

class ChessPiece;

struct Position{
  
    int x;
    int y;
    
};

class ChessBoard{
    
private:
    ChessPiece *board[SIZE][SIZE];
  
public:
    ChessBoard(); // create board
    ~ChessBoard(); // delete board
    
    void initialize(); //place pieces
    
    ChessPiece* getPiece(Position position); // get the piece type by input position
    
    bool placePiece(ChessPiece* piece, Position position);
    
    bool move(Position fromPosition, Position toPosition);

    string toString(); // debug
    
};



class ChessPiece{
  
    enum Color {WHITE, BLACK};
    
protected:
    ChessBoard board;
    int row;
    int column;
    Color color;
    
public:
    ChessPiece(ChessBoard board, Color color); // create chess piece
    ~ChessPiece(); // destructor
    
    int getRow(); // return row
    int getColumn(); // return column
    void setRow(); // set a row
    void setColumn(); // set a column
    Color getColor(); // return color
    string getPosition();
    void setPosition(Position position);
    
    
    virtual string toString();
    virtual vector<string>* legalMoves();
    
    
};
















