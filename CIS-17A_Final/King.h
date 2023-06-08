//
//  King.hpp
//  CIS-17A_Final
//
//  Created by 刘豪杰 on 6/7/23.
//

#ifndef King_hpp
#define King_hpp


#include <stdio.h>
#include "ChessBoard.h"
#include <string>
#include <vector>
#include <iostream>


class King : public ChessPiece
{
    
public:
    King(ChessBoard* board, Color color);
    virtual ~King();
    string toString() const;
    virtual vector<string>* legalMoves() const;
};

#endif /* King_hpp */
