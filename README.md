# 🎮 Tic-Tac-Toe Console Game in C++

A simple 2-player Tic-Tac-Toe game played in the terminal, written in pure C++ using object-oriented principles.

## 🧩 Features

- 2-player turn-based gameplay (Player X and O)
- Clear board rendering
- Win and draw detection
- Input validation
- Replay option
- Clean code structure with a `Game` class

## 🛠️ Requirements

- C++17 or later
- g++, clang++, or any standard C++ compiler

## 📦 Build Instructions

### 🧱 Using Makefile (Recommended)

```bash
make        # Builds the game
./game      # Runs the game
make clean  # Removes the binary
```

### 🧱 Manual Compilation
```bash
g++ main.cpp src/game.cpp -Iinclude -o game
./game
```

## 🎮 How to Play

Run the game from terminal
Enter your move as: row column (0-based index)
Example: 1 2 means row 1, column 2
The board updates after each move
Game ends with win or draw message
Press y to play again

## 📁 Project Structure

```bash
tic-tac-toe/
├── main.cpp
├── src/
│   └── Game.cpp
├── include/
│   └── Game.hpp
├── Makefile
├── LICENSE
└── README.md
```

## 📚 Learning Objectives

Object-Oriented Programming (OOP)
Encapsulation and class design
Input handling and validation
Turn-based game logic
