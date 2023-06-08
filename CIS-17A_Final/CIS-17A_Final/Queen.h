//
//  Queen.hpp
//  CIS-17A_Final
//
//  Created by 刘豪杰 on 6/7/23.
//

#ifndef Queen_hpp
#define Queen_hpp

#include <stdio.h>
#include "ChessBoard.h"
#include <string>
#include <vector>
#include <iostream>


class Queen : public ChessPiece
{
    
public:
    Queen(ChessBoard* board, Color color);
    virtual ~Queen();
    string toString () const;
    virtual vector<string>* legalMoves() const;
};


#endif /* Queen_hpp */
