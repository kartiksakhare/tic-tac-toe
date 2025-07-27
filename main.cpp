#include <iostream>
#include "game.hpp"

int main() {
    Game game;
    int row, col;
    char playAgain;

    do {
        game.reset();
        while (true) {
            game.printBoard();
            std::cout << "Player " << game.getCurrentPlayer() << " turn (row col): ";

            // Input validation: ensure two integers are entered
            if (!(std::cin >> row >> col)) {
                std::cout << "Invalid input! Please enter two numbers like: 0 2\n";
                std::cin.clear();              // Clear error flags
                std::cin.ignore(10000, '\n');  // Discard bad input
                continue;
            }

            if (!game.makeMove(row, col)) {
                std::cout << "Invalid move. Try again.\n";
                continue;
            }

            if (game.checkWin()) {
                game.printBoard();
                std::cout << "Player " << game.getCurrentPlayer() << " wins!\n";
                break;
            } else if (game.isDraw()) {
                game.printBoard();
                std::cout << "🤝 It's a draw!\n";
                break;
            }

            game.switchPlayer();
        }

        std::cout << "Play again? (y/n): ";
        std::cin >> playAgain;

        // Extra cleanup in case user types something like "xyz"
        std::cin.clear();
        std::cin.ignore(10000, '\n');

    } while (playAgain == 'y' || playAgain == 'Y');

    return 0;
}
