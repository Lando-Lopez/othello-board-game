#ifndef OTHELLO_HPP_INCLUDED
#define OTHELLO_HPP_INCLUDED

//************************************
#include <vector>

class BoardGame{
public:
    //*** For stable class
    BoardGame();
    ~BoardGame();

    //*** Utility attributes
    struct Position{
        int row;
        int column;
        char squareType;
    };

    //*** Save Positions of each piece.
    std::vector<Position> whitePiecePositions;
    std::vector<Position> blackPiecePositions;

    //*** Utility methods
    std::vector<Position> identifyPossibleMovements(const std::vector<Position>& piecePositions) const; //Possibles movements of player in turn
    void setPiece(Position selectedSquare, char colorInTurn); //Update Position of captured pieces and sets a new piece
    Position getCoordsSelectedSquare(); //Transform mouse coordinates into [row][column] format

private:
    //*** Auxiliary methods
    char classifySquare(const Position& pos) const; //Only call inside of setPiece, when we need to know the squareType of the newPiece

};


#endif // OTHELLO_HPP_INCLUDED
