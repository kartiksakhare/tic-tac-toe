#include "game.hpp"
#include <iostream>

Game::Game() {
    reset();
}

void Game::reset() {
    board = std::vector<std::vector<char>>(3, std::vector<char>(3, ' '));
    currentPlayer = 'X';
}

void Game::printBoard() {
    std::cout << "\n";
    for (int i = 0; i < 3; ++i) {
        std::cout << " ";
        for (int j = 0; j < 3; ++j) {
            std::cout << board[i][j];
            if (j < 2) std::cout << " | ";
        }
        std::cout << "\n";
        if (i < 2) std::cout << "---+---+---\n";
    }
    std::cout << "\n";
}

bool Game::makeMove(int row, int col) {
    if (row < 0 || row > 2 || col < 0 || col > 2)
        return false;
    if (board[row][col] != ' ')
        return false;
    board[row][col] = currentPlayer;
    return true;
}

bool Game::checkWin() {
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == currentPlayer &&
            board[i][1] == currentPlayer &&
            board[i][2] == currentPlayer)
            return true;
        if (board[0][i] == currentPlayer &&
            board[1][i] == currentPlayer &&
            board[2][i] == currentPlayer)
            return true;
    }
    if (board[0][0] == currentPlayer &&
        board[1][1] == currentPlayer &&
        board[2][2] == currentPlayer)
        return true;
    if (board[0][2] == currentPlayer &&
        board[1][1] == currentPlayer &&
        board[2][0] == currentPlayer)
        return true;
    return false;
}

bool Game::isDraw() {
    for (auto& row : board)
        for (char cell : row)
            if (cell == ' ') return false;
    return true;
}

void Game::switchPlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

char Game::getCurrentPlayer() {
    return currentPlayer;
}
