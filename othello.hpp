#ifndef OTHELLO_HPP_INCLUDED
#define OTHELLO_HPP_INCLUDED

//************************************
#include <vector>

class BoardGame{
public:
    //*** For stable class
    BoardGame();
    ~BoardGame();

private:
    //*** Utility atributes
    struct Position{
        int row;
        int column;
    };

    std::vector<Position> whitePiecePositions;
    std::vector<Position> blackPiecePositions;

    //*** Utility methods
    char classifySquare(const Position& pos) const;
    std::vector<Position> identifyPossibleMovements(const std::vector<Position>& piecePositions, char squareType) const;

    //*** Operative methods
    void setPiece(const std::vector<Position>& validMovements, char colorInTurn);
};


#endif // OTHELLO_HPP_INCLUDED
