//
//  Knight.hpp
//  CIS-17A_Final
//
//  Created by 刘豪杰 on 6/7/23.
//

#ifndef Knight_hpp
#define Knight_hpp

#include <stdio.h>
#include "ChessBoard.h"
#include <string>
#include <vector>
#include <iostream>


class Knight : public ChessPiece
{
    
public:
    Knight(ChessBoard* board, Color color);
    virtual ~Knight();
    string toString() const;
    virtual vector<string>* legalMoves() const;
};

#endif /* Knight_hpp */
