//
//  Bishop.h
//  CIS-17A_Final
//
//  Created by 刘豪杰 on 6/6/23.
//

#ifndef Bishop_h
#define Bishop_h


#include <stdio.h>
#include <vector>
#include <string>
#include "ChessBoard.h"

class Bishop : public ChessPiece
{
    
public:
    Bishop(ChessBoard* board, Color color);
    virtual ~Bishop();
    string toString () const;
    virtual vector<string>* legalMoves() const;
};



#endif /* Bishop_h */
