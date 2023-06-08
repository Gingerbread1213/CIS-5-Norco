//
//  Rook.hpp
//  CIS-17A_Final
//
//  Created by 刘豪杰 on 6/6/23.
//

#ifndef Rook_hpp
#define Rook_hpp

#include <stdio.h>
#include <vector>
#include <string>
#include "ChessBoard.h"

class Rook : public ChessPiece
{
    
public:
    Rook(ChessBoard* board, Color color);
    virtual ~Rook();
    string toString() const;
    vector<string>* legalMoves() const;
};

#endif /* Rook_hpp */
