//
//  Pawn.hpp
//  CIS-17A_Final
//
//  Created by 刘豪杰 on 6/6/23.
//

#ifndef Pawn_h
#define Pawn_h

#include <stdio.h>
#include <vector>
#include <string>
#include "ChessBoard.h"

class Pawn : public ChessPiece
{
    
public:
    Pawn(ChessBoard* board, Color color);
    virtual ~Pawn();
    string toString() const;
    virtual vector<string>* legalMoves() const;
};

#endif /* Pawn_hpp */
