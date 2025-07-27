#ifndef GAME_HPP
#define GAME_HPP

#include <vector>
#include <string>

class Game {
private:
    std::vector<std::vector<char>> board;
    char currentPlayer;

public:
    Game();
    void printBoard();
    bool makeMove(int row, int col);
    bool checkWin();
    bool isDraw();
    void switchPlayer();
    void reset();
    char getCurrentPlayer();
};

#endif
